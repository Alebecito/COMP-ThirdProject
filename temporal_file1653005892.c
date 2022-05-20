












void pregunta1() { 
	int x;
	x = - 3 + 4 * 5 - 6; printf("%d\n", x);
	x = 3 + 4 % 5 - 6; printf("%d\n", x);
	x = - 3 * 4 % - 6 / 5; printf("%d\n", x);
	x = ( 7 + 6 ) % 5 / 2; printf("%d\n", x);
}











void pregunta2() { 
	int x = 2, y, z;

	x *= 3 + 2; printf("%d\n", x);
	x *= y = z = 4; printf("%d\n", x);
	x = y == z; printf("%d\n", x);
	x == (y = z); printf("%d\n", x);
}











void pregunta3() { 
	int x, y, z;

	x = 2; y = 1; z = 0;
	x = x && y || z; (int) printf("int = %d\n", int)(x);

	x = y = 1;
	z = x ++ - 1; (int) printf("int = %d\n", int)(x), (int) printf("int = %d\n", int)(z);
	z += - x ++ + ++ y; (int) printf("int = %d\n", int)(x); (int) printf("int = %d\n", int)(z);
	z = 3 / 3; (int) printf("int = %d\n", int)(z);
	z = x / ++x; (int) printf("int = %d\n", int)(z);
}















void pregunta4() { 
	int x, y, z;

	x = 03; y = 02; z = 01;
	(int) printf("int = %d\n", int)( y & z );
	(int) printf("int = %d\n", int)( x | y & - z );
	(int) printf("int = %d\n", int)( x ^ y & - z );
	(int) printf("int = %d\n", int)( x & y && z);

	x = 1; y = -1;
	(int) printf("int = %d\n", int)( ! x | x );
	(int) printf("int = %d\n", int)( - x | x );
	(int) printf("int = %d\n", int)( x ^ x );
	x <<= 3; (int) printf("int = %d\n", int)(x);
	y <<= 3; (int) printf("int = %d\n", int)(y);
	y >>= 3; (int) printf("int = %d\n", int)(y);
}




... (228 líneas restantes)
Contraer
problemasC.c
15 KB
﻿













void pregunta1() { 
	int x;
	x = - 3 + 4 * 5 - 6; printf("%d\n", x);
	x = 3 + 4 % 5 - 6; printf("%d\n", x);
	x = - 3 * 4 % - 6 / 5; printf("%d\n", x);
	x = ( 7 + 6 ) % 5 / 2; printf("%d\n", x);
}











void pregunta2() { 
	int x = 2, y, z;

	x *= 3 + 2; printf("%d\n", x);
	x *= y = z = 4; printf("%d\n", x);
	x = y == z; printf("%d\n", x);
	x == (y = z); printf("%d\n", x);
}











void pregunta3() { 
	int x, y, z;

	x = 2; y = 1; z = 0;
	x = x && y || z; (int) printf("int = %d\n", int)(x);

	x = y = 1;
	z = x ++ - 1; (int) printf("int = %d\n", int)(x), (int) printf("int = %d\n", int)(z);
	z += - x ++ + ++ y; (int) printf("int = %d\n", int)(x); (int) printf("int = %d\n", int)(z);
	z = 3 / 3; (int) printf("int = %d\n", int)(z);
	z = x / ++x; (int) printf("int = %d\n", int)(z);
}















void pregunta4() { 
	int x, y, z;

	x = 03; y = 02; z = 01;
	(int) printf("int = %d\n", int)( y & z );
	(int) printf("int = %d\n", int)( x | y & - z );
	(int) printf("int = %d\n", int)( x ^ y & - z );
	(int) printf("int = %d\n", int)( x & y && z);

	x = 1; y = -1;
	(int) printf("int = %d\n", int)( ! x | x );
	(int) printf("int = %d\n", int)( - x | x );
	(int) printf("int = %d\n", int)( x ^ x );
	x <<= 3; (int) printf("int = %d\n", int)(x);
	y <<= 3; (int) printf("int = %d\n", int)(y);
	y >>= 3; (int) printf("int = %d\n", int)(y);
}












void pregunta5() { 
	int x=1, y=1, z=1;

	x += y += z;
	(int) printf("int = %d\n", int)( x < y ? y : x );

	(int) printf("int = %d\n", int)( x < y ? x ++ : y ++ );
	(int) printf("int = %d\n", int)(x); (int) printf("int = %d\n", int)(y);

	(int) printf("int = %d\n", int)( z += x < y ? x ++ : y ++ );
	(int) printf("int = %d\n", int)(y); (int) printf("int = %d\n", int)(z);

	x=3; y=z=4;
	(int) printf("int = %d\n", int)( (z >= y >= x) ? 1 : 0);
	(int) printf("int = %d\n", int)( z >= y && y >= x );
}












void pregunta6() { 
	int x, y, z;

	x = y = z = 1;
	++x || ++y && ++z; (x,y,z) printf(#x "=%d\t" #y "=%d\t" #z "=%d\n",x,y,z)(x,y,z);

	x = y = z = 1;
	++x && ++y || ++z; (x,y,z) printf(#x "=%d\t" #y "=%d\t" #z "=%d\n",x,y,z)(x,y,z);

	x = y = z = 1;
	++x && ++y && ++z; (x,y,z) printf(#x "=%d\t" #y "=%d\t" #z "=%d\n",x,y,z)(x,y,z);

	x = y = z = -1;
	++x && ++y || ++z; (x,y,z) printf(#x "=%d\t" #y "=%d\t" #z "=%d\n",x,y,z)(x,y,z);

	x = y = z = -1;
	++x || ++y && ++z; (x,y,z) printf(#x "=%d\t" #y "=%d\t" #z "=%d\n",x,y,z)(x,y,z);

	x = y = z = -1;
	++x && ++y && ++z; (x,y,z) printf(#x "=%d\t" #y "=%d\t" #z "=%d\n",x,y,z)(x,y,z);
}

char input7[] = "SSSWILTECH1\1\11W\1WALLMP1";









void pregunta7() { 
	int i, c;

	for ( i=2; (c=input7[i])!='\0'; i++) {
		switch (c) {
			case 'a' : putchar('i'); continue;
			case '1' : break;
			case  1  : while( (c=input7[++i])!='\1' && c!='\0');
			case  9  : putchar('S');
			case 'E' : case 'L': continue;
			default: putchar(c); continue;
		}
		putchar(' ');
	}
	putchar('\n');
}


int a8[] = {0,1,2,3,4};












void pregunta8() { 
	int i, *p;

	for( i=0; i <=4; i++ ) (format,value) printf(#value " = %" #format "\t",(value))(d,a8[i]);
	putchar('\n');
	for( p= &a8[0]; p<=&a8[4]; p++)
		(format,value) printf(#value " = %" #format "\t",(value))(d,*p);
	putchar('\n');
	for ( p=&a8[0],i=1; i <=5; i++ )
		(format,value) printf(#value " = %" #format "\t",(value))(d,p[i]);
	putchar('\n');
	for( p=a8,i=0; p+1<=a8+4; p++,i++ )
		(format,value) printf(#value " = %" #format "\t",(value))(d,*(p+i));
	putchar('\n');
	for ( p=a8+4; p>=a8; p--) (format,value) printf(#value " = %" #format "\t",(value))(d,*p);
	putchar('\n');
	for ( p=a8+4,i=0; i<=4; i++ ) (format,value) printf(#value " = %" #format "\t",(value))(d,p[-i]);
	putchar('\n');
	for ( p=a8+4; p >=a8; p-- ) (format,value) printf(#value " = %" #format "\t",(value))(d,a8[p-a8]);
	putchar('\n');
}

int a9[]={0,1,2,3,4};
int *p9[] = {a9,a9+1,a9+2,a9+3,a9+4};
int **pp9=p9;









void pregunta9() { 
	(f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(d,a9,*a9);
	(f,x1,x2,x3) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(f,x2,x3)(d,p9,*p9,**p9);
	(f,x1,x2,x3) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(f,x2,x3)(d,pp9,*pp9,**pp9);
	putchar('\n');

	pp9++; (f,x1,x2,x3) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(f,x2,x3)(d,pp9-p9,*pp9-a9,**pp9);
	*pp9++; (f,x1,x2,x3) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(f,x2,x3)(d,pp9-p9,*pp9-a9,**pp9);
	*++pp9; (f,x1,x2,x3) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(f,x2,x3)(d,pp9-p9,*pp9-a9,**pp9);
	++*pp9; (f,x1,x2,x3) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(f,x2,x3)(d,pp9-p9,*pp9-a9,**pp9);
	putchar('\n');

	pp9=p9;
	**pp9++; (f,x1,x2,x3) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(f,x2,x3)(d,pp9-p9,*pp9-a9,**pp9);
	*++*pp9; (f,x1,x2,x3) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(f,x2,x3)(d,pp9-p9,*pp9-a9,**pp9);
	++**pp9; (f,x1,x2,x3) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(f,x2,x3)(d,pp9-p9,*pp9-a9,**pp9);
}

int a10[3][3] = {
	{ 1, 2, 3 },
	{ 4, 5, 6 },
	{ 7, 8, 9 }
};

int *pa[3] = { a10[0], a10[1], a10[2] };
int *p10 = a10[0];








void pregunta10() { 
	int i;
	printf("\naaa1\n");
	for( i=0; i<3; i++ )
		(f,x1,x2,x3) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(f,x2,x3)(d, a10[i][2-i], *a10[i], *(*(a10+i)+i) );
	putchar('\n');
	for ( i=0; i<3; i++ )
		(f,x1,x2) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), (f,x1) (format,value) printf(#value " = %" #format "\t",(value))(f,x1), putchar('\n')(f,x2)(d, *pa[i], p10[i]);
}

char *c[] = {
	"ENTER",
	"NEW",
	"POINT",
	"FIRST"
};
char **cp[] = { c+3, c+2, c+1, c };
char ***cpp = cp;













void pregunta11() { 
	printf("%s", **++cpp );
	printf("%s ", *--*++cpp+3 );
	printf("%s", *cpp[-2]+3 );
	printf("%s\n", cpp[-1][-1]+1 );
}

int main() {
	pregunta1();
	pregunta2();
	pregunta3();
	pregunta4();
	pregunta5();
	pregunta6();
	pregunta7();
	pregunta8();
	pregunta9();
	pregunta10();
	pregunta11();

	return 0;
}