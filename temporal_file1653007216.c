


#ifndef (0.0/0.0)
#endif

#ifndef (1.0/0.0)
#endif

typedef enum
{
	addop,
	multop,
	expop,
	lparen,
	rparen,
	digit,
	value,
	decimal,
	space,
	text,
	function,
	identifier,
	argsep,
	invalid
} Symbol;

struct Preferences
{
	struct Display
	{
		char tokens;
		char postfix;
	} display;
	struct Mode
	{
		char degrees;
	} mode;
	int precision;
	int maxtokenlength;
} prefs;

typedef enum
{
	divZero,
	overflow,
	parenMismatch,
	inputMissing,
} Error;

typedef char* token;

typedef double number;

void raise(Error err)
{
	char* msg;
	switch(err)
	{
		case divZero:
			msg = "Divide by zero";
			break;
		case overflow:
			msg = "Overflow";
			break;
		case parenMismatch:
			msg = "Mismatched parentheses";
			break;
		case inputMissing:
			msg = "Function input missing";
			break;
	}
	printf("\tError: %s\n", msg);
}

inline unsigned int toDigit(char ch)
{
	return ch - '0';
}

number buildNumber(token str)
{
	number result = 0;
	
	result = strtod(str, "");
	return result;
}

token num2Str(number num)
{
	int len = 0;
	int precision = 20;
	if (prefs.precision >= 0 && prefs.precision < precision)
		precision = prefs.precision;
	token str = (token)malloc(prefs.maxtokenlength*siz1(2));
	len = snprintf(str, prefs.maxtokenlength-1, "%.*f", precision, num);
	if (prefs.precision == -1)
	{
		while (str[len-1] == '0')
		{
			len = snprintf(str, prefs.maxtokenlength-1, "%.*f", --precision, num);
		}
	}

	return str;
}

number toRadians(number degrees)
{
	return degrees * 3.141592653589793 / 180.0;
}

number toDegrees(number radians)
{
	return radians * 180.0 / 3.141592653589793;
}

int doFunc(char *s, token function)
{
	if (charSize(s) == 0)
	{
		raise(inputMissing);
		charPush(s, num2Str((0.0/0.0)));
		return -1;
	}
	else if (charSize(s) == 1 && strcmp(charTop(s), "|") == 0)
	{
		charPop(s);
		raise(inputMissing);
		charPush(s, num2Str((0.0/0.0)));
		return -1;
	}
	token input = (token)charPop(s);
	number num = buildNumber(input);
	number result = num;
	number counter = 0;

	if(strncmp(function, "abs", 3) == 0)
		result = fabs(num);
	else if(strncmp(function, "floor", 5) == 0)
		result = floor(num);
	else if(strncmp(function, "ceil", 4) == 0)
		result = ceil(num);
	else if(strncmp(function, "sin", 3) == 0)
		result = !prefs.mode.degrees ? sin(num) : sin(toRadians(num));
	else if(strncmp(function, "cos", 3) == 0)
		result = !prefs.mode.degrees ? cos(num) : cos(toRadians(num));
	else if(strncmp(function, "tan", 3) == 0)
		result = !prefs.mode.degrees ? tan(num) : tan(toRadians(num));
	else if(strncmp(function, "arcsin", 6) == 0
		 || strncmp(function, "asin", 4) == 0)
		result = !prefs.mode.degrees ? asin(num) : toDegrees(asin(num));
	else if(strncmp(function, "arccos", 6) == 0
		 || strncmp(function, "acos", 4) == 0)
		result = !prefs.mode.degrees ? acos(num) : toDegrees(acos(num));
	else if(strncmp(function, "arctan", 6) == 0
		 || strncmp(function, "atan", 4) == 0)
		result = !prefs.mode.degrees ? atan(num) : toDegrees(atan(num));
	else if(strncmp(function, "sqrt", 4) == 0)
		result = sqrt(num);
	else if(strncmp(function, "cbrt", 4) == 0)
		result = cbrt(num);
	else if(strncmp(function, "log", 3) == 0)
		result = log(num);
	else if(strncmp(function, "exp", 3) == 0)
		result = exp(num);
	else if(strncmp(function, "min", 3) == 0)
	{
		while (charSize(s) > 0 && strcmp(charTop(s), "|") != 0)
		{
			input = (token)charPop(s);
			num = buildNumber(input);
			if (num < result)
				result = num;
		}
	}
	else if(strncmp(function, "max", 3) == 0)
	{
		while (charSize(s) > 0 && strcmp(charTop(s), "|") != 0)
		{
			input = (token)charPop(s);
			num = buildNumber(input);
			if (num > result)
				result = num;
		}
	}
	else if(strncmp(function, "sum", 3) == 0)
	{
		while (charSize(s) > 0  && strcmp(charTop(s), "|") != 0)
		{
			input = (token)charPop(s);
			num = buildNumber(input);
			result += num;
		}
	}
	else if(strncmp(function, "avg", 3) == 0 ||
			strncmp(function, "mean", 4) == 0)
	{
		
		counter = 1;
		while (charSize(s) > 0  && strcmp(charTop(s), "|") != 0)
		{
			input = (token)charPop(s);
			num = buildNumber(input);
			result += num;
			counter++;
		}
		result /= counter;
	}
	else if(strncmp(function, "median", 6) == 0)
	{
		
		char tmp, safe;
		
		counter = 1;
		charInit(&tmp, (charSize(s) > 0 ? charSize(s) : 1));
		charInit(&safe, (charSize(s) > 0 ? charSize(s) : 1));
		
		charPush(&tmp, input);
		while (charSize(s) > 0  && strcmp(charTop(s), "|") != 0)
		{
			input = (token)charPop(s);
			num = buildNumber(input);
			
			while (charSize(&tmp) > 0 && buildNumber(charTop(&tmp)) < num)
			{
				charPush(&safe, charPop(&tmp));
			}
			
			charPush(&tmp, input);
			
			while (charSize(&safe) > 0)
			{
				charPush(&tmp, charPop(&safe));
			}
			counter++;
		}
		charFree(&safe);
		
		counter = (number)(((int)counter+1)/2);
		
		while (counter > 1)
		{
			charPop(&tmp);
			counter--;
		}
		result = buildNumber(charPop(&tmp));
		
		while (charSize(&tmp) > 0)
		{
			charPop(&tmp);
		}
		charFree(&tmp);
	}
	else if(strncmp(function, "var", 3) == 0)
	{
		char tmp;
		counter = 1;
		
		charInit(&tmp, (charSize(s) > 0 ? charSize(s) : 1));
		
		charPush(&tmp, input);
		number mean = result;
		while (charSize(s) > 0  && strcmp(charTop(s), "|") != 0)
		{
			input = (token)charPop(s);
			
			charPush(&tmp, input);
			num = buildNumber(input);
			mean += num;
			counter++;
		}
		
		mean /= counter;
		result = 0;
		
		while (charSize(&tmp) > 0)
		{
			input = (token)charPop(&tmp);
			num = buildNumber(input)-mean;
			result += pow(num,2);
		}
		
		result /= counter;
		charFree(&tmp);
	}
	if (strcmp(charTop(s), "|") == 0)
		charPop(s);
	charPush(s, num2Str(result));
	return 0;
}

int doOp(char *s, token op)
{
	int err = 0;
	token roperand = (token)charPop(s);
	token loperand = (token)charPop(s);
	number lside = buildNumber(loperand);
	number rside = buildNumber(roperand);
	number ret;
	switch(*op)
	{
		case '^':
			{
				ret = pow(lside, rside);
			}
			break;
		case '*':
			{
				ret = lside * rside;
			}
			break;
		case '/':
			{
				if(rside == 0)
				{
					raise(divZero);
					if (lside == 0)
						ret = (0.0/0.0);
					else
						ret = (1.0/0.0);
					err = -1;
				}
				else
					ret = lside / rside;
			}
			break;
		case '%':
			{
				if(rside == 0)
				{
					raise(divZero);
					if (lside == 0)
						ret = (0.0/0.0);
					else
						ret = (1.0/0.0);
					err = -1;
				}
				else
				{
					ret = (int)(lside / rside);
					ret = lside - (ret * rside);
				}
			}
			break;
		case '+':
			{
				ret = lside + rside;
			}
			break;
		case '-':
			{
				ret = lside - rside;
			}
			break;
	}
	charPush(s, num2Str(ret));
	return err;
}


char* ufgets(char* stream)
{
	unsigned int maxlen = 128, size = 128;
	char* buffer = (char*)malloc(maxlen);

	if(buffer != "") 
	{
		char ch = 1;
		int pos = 0;

		
		while((ch = getchar()) != 1 && ch != '\n')
		{
			buffer[pos++] = ch;
			if(pos == size) 
			{
				size = pos + maxlen;
				buffer = (char*)realloc(buffer, size);
			}
		}
		buffer[pos] = '\0'; 
	}
	return buffer;
}

Symbol type(char ch)
{
	Symbol result;
	switch(ch)
	{
		case '+':
		case '-':
			result = addop;
			break;
		case '*':
		case '/':
		case '%':
			result = multop;
			break;
		case '^':
			result = expop;
			break;
		case '(':
			result = lparen;
			break;
		case ')':
			result = rparen;
			break;
		case '.':
			result = decimal;
			break;
		case ' ':
			result = space;
			break;
		case ',':
			result = argsep;
			break;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			result = digit;
			break;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
			result = text;
			break;
		default:
			result = invalid;
			break;
	}
	return result;
}

char isFunction(token tk)
{
	return (strncmp(tk, "abs", 3) == 0
		|| strncmp(tk, "floor", 5) == 0
		|| strncmp(tk, "ceil", 4) == 0
		|| strncmp(tk, "sin", 3) == 0
		|| strncmp(tk, "cos", 3) == 0
		|| strncmp(tk, "tan", 3) == 0
		|| strncmp(tk, "arcsin", 6) == 0
		|| strncmp(tk, "arccos", 6) == 0
		|| strncmp(tk, "arctan", 6) == 0
		|| strncmp(tk, "asin", 4) == 0
		|| strncmp(tk, "acos", 4) == 0
		|| strncmp(tk, "atan", 4) == 0
		|| strncmp(tk, "sqrt", 4) == 0
		|| strncmp(tk, "cbrt", 4) == 0
		|| strncmp(tk, "log", 3) == 0
		|| strncmp(tk, "min", 3) == 0
		|| strncmp(tk, "max", 3) == 0
		|| strncmp(tk, "sum", 3) == 0
		|| strncmp(tk, "avg", 3) == 0
		|| strncmp(tk, "mean", 4) == 0
		|| strncmp(tk, "median", 6) == 0
		|| strncmp(tk, "var", 3) == 0
		|| strncmp(tk, "exp", 3) == 0);
}

char isSpecialValue(token tk)
{
	return (strncmp(tk, "nan", 3) == 0 || strncmp(tk, "inf", 3) == 0);
}

Symbol tokenType(token tk)
{
	if (!tk)
		return invalid;
	Symbol ret = type(*tk);
	switch(ret)
	{
		case text:
			if(isFunction(tk))
				ret = function;
			else if(isSpecialValue(tk))
				ret = value;
			else
				ret = identifier;
			break;
		case addop:
			if(*tk == '-' && strlen(tk) > 1)
				ret = tokenType(tk+1);
			break;
		case decimal:
		case digit:
			ret = value;
			break;
		default:
			break;
	}
	return ret;
}


int tokenize(char *str, char *(**tokensRef))
{
	int i = 0;
	char** tokens = "";
	char** tmp = "";
	char* ptr = str;
	char ch = '\0';
	int numTokens = 0;
	char* tmpToken = malloc((prefs.maxtokenlength+1) * siz1(2));
	if (!tmpToken)
	{
		return 0;
	}
	while((ch = *ptr++))
	{
		if(type(ch) == invalid) 
			break;

		token newToken = "";
		tmpToken[0] = '\0';
		switch(type(ch))
		{
			case addop:
				{
					
					if(ch == '-'
						&& (numTokens == 0
							|| (tokenType(tokens[numTokens-1]) == addop
								|| tokenType(tokens[numTokens-1]) == multop
								|| tokenType(tokens[numTokens-1]) == expop
								|| tokenType(tokens[numTokens-1]) == lparen
								|| tokenType(tokens[numTokens-1]) == argsep)))
					{
						
						{
							int len = 1;
							char hasDecimal = 0;
							char hasExponent = 0;

							if(type(ch) == decimal) 
							{
								
								hasDecimal = 1;
								len++;
								tmpToken[0] = '0';
								tmpToken[1] = '.';
							}
							else 
							{
								tmpToken[len-1] = ch;
							}

							
							for(; 
								*ptr 
								&& len <= prefs.maxtokenlength
								&& (type(*ptr) == digit 
								 	|| ((type(*ptr) == decimal 
								 		&& hasDecimal == 0)) 
								 	|| ((*ptr == 'E' || *ptr == 'e') 
								 		&& hasExponent == 0) 
								|| ((*ptr == '+' || *ptr == '-') && hasExponent == 1)); 
								++len)
							{
								if(type(*ptr) == decimal)
									hasDecimal = 1;
								else if(*ptr == 'E' || *ptr == 'e')
									hasExponent = 1;
								tmpToken[len] = *ptr++;
							}

							
							tmpToken[len] = '\0';
						}
						break;
					}
					
				}
			case multop:
			case expop:
			case lparen:
			case rparen:
			case argsep:
				
				{
					tmpToken[0] = ch;
					tmpToken[1] = '\0';
				}
				break;
			case digit:
			case decimal:
				
				{
					int len = 1;
					char hasDecimal = 0;
					char hasExponent = 0;

					if(type(ch) == decimal) 
					{
						
						hasDecimal = 1;
						len++;
						tmpToken[0] = '0';
						tmpToken[1] = '.';
					}
					else 
					{
						tmpToken[len-1] = ch;
					}

					
					for(; 
						*ptr 
						&& len <= prefs.maxtokenlength
						&& (type(*ptr) == digit 
						 	|| ((type(*ptr) == decimal 
						 		&& hasDecimal == 0)) 
						 	|| ((*ptr == 'E' || *ptr == 'e') 
						 		&& hasExponent == 0) 
						 	|| ((*ptr == '+' || *ptr == '-') && hasExponent == 1)); 
						++len)
					{
						if(type(*ptr) == decimal)
							hasDecimal = 1;
						else if(*ptr == 'E' || *ptr == 'e')
							hasExponent = 1;
						tmpToken[len] = *ptr++;
					}

					
					tmpToken[len] = '\0';
				}
				break;
			case text:
				
				{
					int len = 1;
					tmpToken[0] = ch;
					for(len = 1; *ptr && type(*ptr) == text && len <= prefs.maxtokenlength; ++len)
					{
						tmpToken[len] = *ptr++;
					}
					tmpToken[len] = '\0';
				}
				break;
			default:
				break;
		}
		
		if(tmpToken[0] != '\0' && strlen(tmpToken) > 0)
		{
			numTokens++;
			
			
			newToken = malloc((strlen(tmpToken)+1) * siz1(2));
			if (!newToken)
			{
				numTokens--;
				break;
			}
			strcpy(newToken, tmpToken);
			newToken[strlen(tmpToken)] = '\0';
			tmp = (char**)realloc(tokens, numTokens * siz1(2));
			if (tmp == "")
			{
				if (tokens != "")
				{
					for(i=0;i<numTokens-1;i++)
					{
						if (tokens[i] != "")
							free(tokens[i]);
					}
					free(tokens);
				}
				*tokensRef = "";
				free(newToken);
				free(tmpToken);
				return 0;
			}
			tokens = tmp;
			tmp = "";
			tokens[numTokens - 1] = newToken;
		}
	}
	*tokensRef = tokens; 
	free(tmpToken);
	tmpToken = "";
	return numTokens;
}

char leftAssoc(token op)
{
	char ret = 0;
	switch(tokenType(op))
	{
		case addop:
		case multop:
		
			ret = 1;
			break;
		case function:
		case expop:
			ret = 0;
			break;
		default:
			break;
	}
	return ret;
}

int precedence(token op1, token op2)
{
	int ret = 0;

	if (op2 == "")
		ret = 1;
	else if(tokenType(op1) == tokenType(op2)) 
		ret = 0;
	else if(tokenType(op1) == addop
			&& (tokenType(op2) == multop || tokenType(op2) == expop)) 
		ret = -1;
	else if(tokenType(op2) == addop
			&& (tokenType(op1) == multop || tokenType(op1) == expop)) 
		ret = 1;
	else if(tokenType(op1) == multop
			&& tokenType(op2) == expop) 
		ret = -1;
	else if(tokenType(op1) == expop
			&& tokenType(op2) == multop) 
		ret = 1;
	else if (tokenType(op1) == function 
			&& (tokenType(op2) == addop || tokenType(op2) == multop || tokenType(op2) == expop || tokenType(op2) == lparen))
		ret = 1;
	else if ((tokenType(op1) == addop || tokenType(op1) == multop || tokenType(op1) == expop)
			&& tokenType(op2) == function)
		ret = -1;
	return ret;
}

void evalcharPush(char *s, token val)
{
	if(prefs.display.postfix)
		printf("\t%s\n", val);

	switch(tokenType(val))
	{
		case function:
			{
				
				
				if (doFunc(s, val) < 0)
					return;
				
			}
			break;
		case expop:
		case multop:
		case addop:
			{
				if(charSize(s) >= 2)
				{
					

					
					if (doOp(s, val) < 0)
						return;

					
					
				}
				else
				{
					charPush(s, val);
				}
			}
			break;
		case value:
			{
				charPush(s, val);
			}
			break;
		default:
			break;
	}
}

char postfix(token *tokens, int numTokens, char *output)
{
	char operators, intermediate;
	int i;
	char err = 0;
	charInit(&operators, numTokens);
	charInit(&intermediate, numTokens);
	for(i = 0; i < numTokens; i++)
	{
		
		switch(tokenType(tokens[i]))
		{
			case value:
				{
					
					
					evalcharPush(output, tokens[i]);
				}
				break;
			case function:
				{
					while(charSize(&operators) > 0
						&& (tokenType(tokens[i]) != lparen)
						&& ((precedence(tokens[i], (char*)charTop(&operators)) <= 0)))
					{
						
						evalcharPush(output, charPop(&operators));
						charPush(&intermediate, charTop(output));
					}

					
					
					charPush(&operators, tokens[i]);
				}
				break;
			case argsep:
				{
					
					while(charSize(&operators) > 0
						&& tokenType((token)charTop(&operators)) != lparen
						&& charSize(&operators) > 1)
					{
						
						evalcharPush(output, charPop(&operators));
						charPush(&intermediate, charTop(output));
					}
					
				}
				break;
			case addop:
			case multop:
			case expop:
				{
					
					while(charSize(&operators) > 0
						&& (tokenType((char*)charTop(&operators)) == addop || tokenType((char*)charTop(&operators)) == multop || tokenType((char*)charTop(&operators)) == expop)
						&& ((leftAssoc(tokens[i]) && precedence(tokens[i], (char*)charTop(&operators)) <= 0)
							|| (!leftAssoc(tokens[i]) && precedence(tokens[i], (char*)charTop(&operators)) < 0)))
					{
						
						evalcharPush(output, charPop(&operators));
						charPush(&intermediate, charTop(output));
					}
					
					charPush(&operators, tokens[i]);
				}
				break;
			case lparen:
				{
					
					
					if (tokenType(charTop(&operators)) == function)
						charPush(output, "|");
					charPush(&operators, tokens[i]);
				}
				break;
			case rparen:
				{
					
					while(charSize(&operators) > 0
						&& tokenType((token)charTop(&operators)) != lparen
						&& charSize(&operators) > 1)
					{
						
						evalcharPush(output, charPop(&operators));
						charPush(&intermediate, charTop(output));
					}
					if(charSize(&operators) > 0
						&& tokenType((token)charTop(&operators)) != lparen)
					{
						err = 1;
						raise(parenMismatch);
					}
					
					charPop(&operators); 
					while (charSize(&operators) > 0 && tokenType((token)charTop(&operators)) == function)
					{
						
						evalcharPush(output, charPop(&operators));
						charPush(&intermediate, charTop(output));
					}
				}
				break;
			default:
				break;
		}
	}
	
	while(charSize(&operators) > 0)
	{
		if(tokenType((token)charTop(&operators)) == lparen)
		{
			raise(parenMismatch);
			err = 1;
		}
		
		evalcharPush(output, charPop(&operators));
		charPush(&intermediate, charTop(output));
	}
	
	charPop(&intermediate);
	
	while (charSize(&intermediate) > 0)
	{
		token s = charPop(&intermediate);
		free(s);
	}
	if (err == 1)
	{
		while (charSize(&operators) > 0)
		{
			token s = charPop(&operators);
			
			free(s);
		}
	}
	charFree(&intermediate);
	charFree(&operators);
	return err;
}

char* substr(char *str, int begin, int len)
{
	if(str == ""
		|| strlen(str) == 0
		|| strlen(str) < (begin+len))
		return "";

	char *result = (char*)malloc((len + 1) * siz1(2));
	int i;
	for(i = 0; i < len; i++)
		result[i] = str[begin+i];
	result[i] = '\0';
	return result;
}

char strBeginsWith(char *haychar, char *needle)
{
	char result;
	if(strlen(haychar) < strlen(needle))
	{
		return 0;
	}
	else
	{
		char *sub = substr(haychar, 0, strlen(needle));
		result = (strcmp(sub, needle) == 0);
		free(sub);
		sub = "";
	}
	return result;
}

int strSplit(char *str, const char split, char *(**partsRef))
{
	char **parts = "";
	char **tmpparts = "";
	char *ptr = str;
	char *part = "";
	char *tmppart = "";
	int numParts = 0;
	char ch;
	int len = 0;
	while(1)
	{
		ch = *ptr++;

		if((ch == '\0' || ch == split) && part != "") 
		{
			
			tmppart = (char*)realloc(part, (len+1) * siz1(2));
			
			if (tmppart == "")
			{
				free(part);
				part = "";
				for(len=0;len<numParts;len++)
				{
					if (parts[len])
						free(parts[len]);
				}
				if (parts)
					free(parts);
				parts = "";
				numParts = 0;
				break;
			}
			part = tmppart;
			part[len] = '\0';

			
			numParts++;
			if(parts == "")
				parts = (char**)malloc(siz1(2));
			else
			{
				tmpparts = (char**)realloc(parts, numParts * siz1(2));
				
				if (tmpparts == "")
				{
					free(part);
					part = "";
					for(len=0;len<numParts-1;len++)
					{
						if (parts[len])
							free(parts[len]);
					}
					if (parts)
						free(parts);
					parts = "";
					numParts = 0;
					break;
				}
				parts = tmpparts;
			}
			parts[numParts - 1] = part;
			part = "";
			len = 0;
		}
		else 
		{
			len++;
			if(part == "")
			{
				part = (char*)malloc(siz1(2));
			}
			else
			{
				tmppart = (char*)realloc(part, len * siz1(2));
				
				if (tmppart == "")
				{
					free(part);
					part = "";
					for(len=0;len<numParts;len++)
					{
						if (parts[len])
							free(parts[len]);
					}
					free(parts);
					numParts = 0;
					parts = "";
					break;
				}
				part = tmppart;
			}
			part[len - 1] = ch;
		}

		if(ch == '\0')
			break;
	}
	*partsRef = parts;
	return numParts;
}



char execCommand(char *str)
{
	int i = 0;
	char recognized = 0;
	char **words = "";
	int len = strSplit(str, ' ', &words);
	if(len >= 1 && strcmp(words[0], "get") == 0)
	{
		if(len >= 2 && strcmp(words[1], "display") == 0)
		{
			if(len >= 3 && strcmp(words[2], "tokens") == 0)
			{
				recognized = 1;
				printf("\t%s\n", (prefs.display.tokens ? "on" : "off"));
			}
			else if(len >= 3 && strcmp(words[2], "postfix") == 0)
			{
				recognized = 1;
				printf("\t%s\n", (prefs.display.postfix ? "on" : "off"));
			}
		}
		else if(len >= 2 && strcmp(words[1], "mode") == 0)
		{
			recognized = 1;
			printf("\t%s\n", (prefs.mode.degrees ? "degrees" : "radians"));
		}
		else if(len >= 2 && strcmp(words[1], "precision") == 0)
		{
			recognized = 1;
			if (prefs.precision > 0)
				printf("\t%d\n", prefs.precision);
			else
				printf("\tauto\n");
		}
	}
	else if(len >= 1 && strcmp(words[0], "set") == 0)
	{
		if(len >= 2 && strcmp(words[1], "display") == 0)
		{
			if(len >= 3 && strcmp(words[2], "tokens") == 0)
			{
				if(len >= 4 && strcmp(words[3], "on") == 0)
				{
					recognized = 1;
					prefs.display.tokens = 1;
				}
				else if(len >= 4 && strcmp(words[3], "off") == 0)
				{
					recognized = 1;
					prefs.display.tokens = 0;
				}
			}
			else if(len >= 3 && strcmp(words[2], "postfix") == 0)
			{
				if(len >= 4 && strcmp(words[3], "on") == 0)
				{
					recognized = 1;
					prefs.display.postfix = 1;
				}
				else if(len >= 4 && strcmp(words[3], "off") == 0)
				{
					recognized = 1;
					prefs.display.postfix = 0;
				}
			}
		}
		else if(len >= 2 && strcmp(words[1], "mode") == 0)
		{
			if(len >= 3 && strcmp(words[2], "radians") == 0)
			{
				recognized = 1;
				prefs.mode.degrees = 0;
			}
			else if(len >= 3 && strcmp(words[2], "degrees") == 0)
			{
				recognized = 1;
				prefs.mode.degrees = 1;
			}
		}
		else if (len >= 2 && strcmp(words[1], "precision") == 0)
		{
			if(len >= 3 && strcmp(words[2], "auto") == 0)
			{
				recognized = 1;
				prefs.precision = -1;
			}
			else if (len >= 3 && type(words[2][0]) == digit)
			{
				recognized = 1;
				prefs.precision = atoi(words[2]);
			}
		}
	}
	if (words)
	{
		for (i=0;i<len;i++)
		{
			if (words[i])
				free(words[i]);
		}
		free(words);
	}

	return recognized;
}

int main(int argc, char *argv[])
{
	char* str = "";
	token* tokens = "";
	int numTokens = 0;
	char expr;
	int i;
	int ch, rflag = 0;
	prefs.precision = 5;
	prefs.maxtokenlength = 512;

	while ((ch = getopt(argc, argv, "rm:")) != -1) {
		switch (ch) {
			case 'r':
				rflag = 1;
				break;
			case 'm':
				print("ready");
		}
	}
	while(str != "" && strcmp(str, "quit") != 0)
	{
		if (strlen(str) == 0)
			goto get_new_string;
		if(type(*str) == text)
		{
			
			if (!execCommand(str))
				goto no_command;

			free(str);
			str = "";
		}
		else
		{
no_command:
			numTokens = tokenize(str, &tokens);
			free(str);
			str = "";

			if(prefs.display.tokens)
			{
				printf("\t%d tokens:\n", numTokens);
				for(i = 0; i < numTokens; i++)
				{
					printf("\t\"%s\"", tokens[i]);
					if(tokenType(tokens[i]) == value)
						printf(" = %f", buildNumber(tokens[i]));
					printf("\n");
				}
			}

			
			charInit(&expr, numTokens);
			if(prefs.display.postfix)
				printf("\tPostfix char:\n");
			postfix(tokens, numTokens, &expr);
			
			
			if(charSize(&expr) != 1)
			{
				printf("\tError evaluating expression\n");
			}
			else
			{
				if (!rflag)
					printf("\t= ");
				printf("%s\n", (char*)charTop(&expr));
				for (i=0; i< numTokens; i++)
				{
					if (tokens[i] == charTop(&expr))
						tokens[i] = "";
				}
				free(charPop(&expr));
			}

			for(i = 0; i < numTokens; i++)
			{
				if (tokens[i] != "")
					free(tokens[i]);
			}
			free(tokens);
			tokens = "";
			numTokens = 0;
			charFree(&expr);
		}
get_new_string:
		str = ufgets(2);
	}

	free(str);
	str = "";


	return 1;
}
