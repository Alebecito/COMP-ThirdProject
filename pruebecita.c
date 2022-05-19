// #include <stdio.h>

//
// debe compilar utilizando
// gcc -w problemasC.c -o problemas
// si no el compilador da errores y warnings
//

#define PRINTX printf("%d\n", x)
#define PRINT(int) printf("int = %d\n", int)

// RESPUESTA PREGUNTA 1
// En esta función se hace uso de la precedencia para obtener las x, primero
// se resuelven los paréntesis, luego se resuelven los productos, divisiones
// y módulos, y por ultimo las sumas y las restas.
void pregunta1() { // Aritmética básica
	int x;
	x = - 3 + 4 * 5 - 6; PRINTX;
	x = 3 + 4 % 5 - 6; PRINTX;
	x = - 3 * 4 % - 6 / 5; PRINTX;
	x = ( 7 + 6 ) % 5 / 2; PRINTX;
}

// RESPUESTA PREGUNTA 2
// En esta función se hace uso de las asignaciones, sin embargo, estas tienen
// menos prioridad que la aritmética básica por lo que  en el primer caso primero
// se suman los números para luego multiplicarlo por el valor que está en x. Luego
// estas se resuelven de derecha a izquierda por lo que se asigna 4 a z y luego a y,
// por último, esta se multiplica por el valor de x y se asigna a este. En la
// siguiente línea se realiza una comparación entre y con z, el resultado de esta
// comparación se retorna en 1 o 0 que son true y false respectivamente y se asigna a x.
// En la última línea se realiza otra comparación, pero esta no se esta asignando a ninguna
// variable por lo que x queda con su mismo valor.
void pregunta2() { // Asignación
	int x = 2, y, z;

	x *= 3 + 2; PRINTX;
	x *= y = z = 4; PRINTX;
	x = y == z; PRINTX;
	x == (y = z); PRINTX;
}

// RESPUESTA PREGUNTA 3
// En el primer caso por precedencia primero se realiza el AND, y para este cualquier numero
// distinto a cero es True, por lo que este retorna un 1 y luego se retorna un 1 en el OR ya
// que se compara el True anteriormente obtenido. En el siguiente caso tenemos un
// postincremento de la variable x por lo que se utiliza el valor actual de esta para hacer
// la operación y obtener z y luego x se incrementa. En el siguiente caso también se da un
// postincremento de x por lo que se utiliza su valor actual, pero tenemos un preincremento
// de y por lo que esta si se debe incrementar antes de realizar las operaciones. En el ultimo
// caso se quiere hacer una división de x entre el preincremento de x, entonces primero se
// incrementa x quedando con un valor de 4 a ambos lados, y su división resulta en 1.
void pregunta3() { // Lógica y operadores de incremento
	int x, y, z;

	x = 2; y = 1; z = 0;
	x = x && y || z; PRINT(x);

	x = y = 1;
	z = x ++ - 1; PRINT(x), PRINT(z);
	z += - x ++ + ++ y; PRINT(x); PRINT(z);
	z = 3 / 3; PRINT(z);
	z = x / ++x; PRINT(z);
}

// RESPUESTA PREGUNTA 4
// Los operadores de bits funcionan a nivel de operaciones binarias, sin embargo, si la
// operación resulta en verdadera se retorna el valor de la primera variable que se esta evaluando.
// Esto pasa en el primer caso por lo que se retorna el valor de x. En el segundo caso, sucede igual
// ya que, aunque z sea negativo, todo en un AND va a ser true a menos que sea 0. En el tercer caso
// se realiza un XOR a nivel binario entre 3 y 2 y esto resulta en 1. En el cuarto caso por orden 
// de precedencia primero se realiza un AND bit a bit por lo que se conserva el valor de x, pero luego
// se realiza un AND normal y este si se cumple retorna un 1. Luego en el quinto caso se niega x por
// lo que su valor queda en 0, pero como se esta realizando un OR con el mismo sin negar entonces el
// valor va a ser 1. En el sexto caso, en vez de negarlo, se pone en negativo x, es decir, -1 y como
// este no es igual a cero, es el valor que va a retornar el OR. Finalmente, en los últimos 3 casos
// se hace un desplazamiento de bits, en los primeros 2 se desplaza x con valor 1, 3 veces hacia a la
// izquierda por lo que obtenemos 8 en binario, sin embargo, en el ultimo caso como se intenta desplazar
// el 1 hacia la derecha, no hay espacios para moverlo, por lo que su valor queda igual.
void pregunta4() { // Operadores de bits
	int x, y, z;

	x = 03; y = 02; z = 01;
	PRINT( y & z );
	PRINT( x | y & - z );
	PRINT( x ^ y & - z );
	PRINT( x & y && z);

	x = 1; y = -1;
	PRINT( ! x | x );
	PRINT( - x | x );
	PRINT( x ^ x );
	x <<= 3; PRINT(x);
	y <<= 3; PRINT(y);
	y >>= 3; PRINT(y);
}

// RESPUESTA PREGUNTA 5
// Los operadores condicionales pueden realizar cierta acción dependiendo del resultado de su condicional.
// Esto se puede ver el primer caso ya que se evalúa si x es menor a y, como esto es falso se retorna el
... (228 líneas restantes)
Contraer
problemasC.c
15 KB
﻿
// #include <stdio.h>

//
// debe compilar utilizando
// gcc -w problemasC.c -o problemas
// si no el compilador da errores y warnings
//

#define PRINTX printf("%d\n", x)
#define PRINT(int) printf("int = %d\n", int)

// RESPUESTA PREGUNTA 1
// En esta función se hace uso de la precedencia para obtener las x, primero
// se resuelven los paréntesis, luego se resuelven los productos, divisiones
// y módulos, y por ultimo las sumas y las restas.
void pregunta1() { // Aritmética básica
	int x;
	x = - 3 + 4 * 5 - 6; PRINTX;
	x = 3 + 4 % 5 - 6; PRINTX;
	x = - 3 * 4 % - 6 / 5; PRINTX;
	x = ( 7 + 6 ) % 5 / 2; PRINTX;
}

// RESPUESTA PREGUNTA 2
// En esta función se hace uso de las asignaciones, sin embargo, estas tienen
// menos prioridad que la aritmética básica por lo que  en el primer caso primero
// se suman los números para luego multiplicarlo por el valor que está en x. Luego
// estas se resuelven de derecha a izquierda por lo que se asigna 4 a z y luego a y,
// por último, esta se multiplica por el valor de x y se asigna a este. En la
// siguiente línea se realiza una comparación entre y con z, el resultado de esta
// comparación se retorna en 1 o 0 que son true y false respectivamente y se asigna a x.
// En la última línea se realiza otra comparación, pero esta no se esta asignando a ninguna
// variable por lo que x queda con su mismo valor.
void pregunta2() { // Asignación
	int x = 2, y, z;

	x *= 3 + 2; PRINTX;
	x *= y = z = 4; PRINTX;
	x = y == z; PRINTX;
	x == (y = z); PRINTX;
}

// RESPUESTA PREGUNTA 3
// En el primer caso por precedencia primero se realiza el AND, y para este cualquier numero
// distinto a cero es True, por lo que este retorna un 1 y luego se retorna un 1 en el OR ya
// que se compara el True anteriormente obtenido. En el siguiente caso tenemos un
// postincremento de la variable x por lo que se utiliza el valor actual de esta para hacer
// la operación y obtener z y luego x se incrementa. En el siguiente caso también se da un
// postincremento de x por lo que se utiliza su valor actual, pero tenemos un preincremento
// de y por lo que esta si se debe incrementar antes de realizar las operaciones. En el ultimo
// caso se quiere hacer una división de x entre el preincremento de x, entonces primero se
// incrementa x quedando con un valor de 4 a ambos lados, y su división resulta en 1.
void pregunta3() { // Lógica y operadores de incremento
	int x, y, z;

	x = 2; y = 1; z = 0;
	x = x && y || z; PRINT(x);

	x = y = 1;
	z = x ++ - 1; PRINT(x), PRINT(z);
	z += - x ++ + ++ y; PRINT(x); PRINT(z);
	z = 3 / 3; PRINT(z);
	z = x / ++x; PRINT(z);
}

// RESPUESTA PREGUNTA 4
// Los operadores de bits funcionan a nivel de operaciones binarias, sin embargo, si la
// operación resulta en verdadera se retorna el valor de la primera variable que se esta evaluando.
// Esto pasa en el primer caso por lo que se retorna el valor de x. En el segundo caso, sucede igual
// ya que, aunque z sea negativo, todo en un AND va a ser true a menos que sea 0. En el tercer caso
// se realiza un XOR a nivel binario entre 3 y 2 y esto resulta en 1. En el cuarto caso por orden 
// de precedencia primero se realiza un AND bit a bit por lo que se conserva el valor de x, pero luego
// se realiza un AND normal y este si se cumple retorna un 1. Luego en el quinto caso se niega x por
// lo que su valor queda en 0, pero como se esta realizando un OR con el mismo sin negar entonces el
// valor va a ser 1. En el sexto caso, en vez de negarlo, se pone en negativo x, es decir, -1 y como
// este no es igual a cero, es el valor que va a retornar el OR. Finalmente, en los últimos 3 casos
// se hace un desplazamiento de bits, en los primeros 2 se desplaza x con valor 1, 3 veces hacia a la
// izquierda por lo que obtenemos 8 en binario, sin embargo, en el ultimo caso como se intenta desplazar
// el 1 hacia la derecha, no hay espacios para moverlo, por lo que su valor queda igual.
void pregunta4() { // Operadores de bits
	int x, y, z;

	x = 03; y = 02; z = 01;
	PRINT( y & z );
	PRINT( x | y & - z );
	PRINT( x ^ y & - z );
	PRINT( x & y && z);

	x = 1; y = -1;
	PRINT( ! x | x );
	PRINT( - x | x );
	PRINT( x ^ x );
	x <<= 3; PRINT(x);
	y <<= 3; PRINT(y);
	y >>= 3; PRINT(y);
}

// RESPUESTA PREGUNTA 5
// Los operadores condicionales pueden realizar cierta acción dependiendo del resultado de su condicional.
// Esto se puede ver el primer caso ya que se evalúa si x es menor a y, como esto es falso se retorna el
// valor en caso de que resultara falso, es decir, x. En el segundo caso pasa lo mismo, pero primero se
// retorna y e luego se incrementa. En el tercer caso se le quiere sumar un valor a z, el valor que se le
// suma es el resultado de la condicional, es decir, se le suma y a z y luego y se incrementa. En el quinto
// caso se usan operadores relacionales, pero estos retornan valores de 1 ó 0, por lo que cuando se intenta
// hacer una doble comparación, primero se evalúa una y el resultado de esta es el que se evalúa con la
// siguiente por lo que no se guarda el valor que esta entre las 2 comparaciones. Por ultimo las
// comparaciones tienen mayor precedencia que el operador AND por lo que estas se realizan primero y al
// final se retorna 1.
void pregunta5() { // Operadores relacionales y condicionales
	int x=1, y=1, z=1;

	x += y += z;
	PRINT( x < y ? y : x );

	PRINT( x < y ? x ++ : y ++ );
	PRINT(x); PRINT(y);

	PRINT( z += x < y ? x ++ : y ++ );
	PRINT(y); PRINT(z);

	x=3; y=z=4;
	PRINT( (z >= y >= x) ? 1 : 0);
	PRINT( z >= y && y >= x );
}

#define PRINT3(x,y,z) printf(#x "=%d\t" #y "=%d\t" #z "=%d\n",x,y,z)

// RESPUESTA PREGUNTA 6
// Los operadores lógicos trabajan primero con el valor de la izquierda y luego el de la derecha, además hacen
// short-circuits que básicamente es que, si el valor de la izquierda ya cumple con la condición, no es necesario
// evaluar el de la derecha. Esto pasa el primer caso, ya que independientemente del resultado del AND si el OR se
// cumple, entonces ya se cumple toda la operación, por eso solo se evalúa x y no el resto. En el siguiente caso
// si se debe evaluar los 2 lados del AND para poder obtener el primer valor del OR, al dar True, no es necesario
// evaluar z. En el tercer caso al ser todos AND si se necesita evaluar todas las variables. En el cuarto caso como
// el incremento de x resulta en 0 por lo que el AND no evaluar su valor a la derecha, y el OR si necesita evaluarlo
// ya que el valor de la izquierda es False. En el quinto caso como el valor de izquierda del OR es False, se debe 
// evaluar el AND. Y en el ultimo caso como x es Falso ya todo lo demás es Falso por lo que no se debe evaluar.
void pregunta6() { // Precedencia de operadores y evaluación
	int x, y, z;

	x = y = z = 1;
	++x || ++y && ++z; PRINT3(x,y,z);

	x = y = z = 1;
	++x && ++y || ++z; PRINT3(x,y,z);

	x = y = z = 1;
	++x && ++y && ++z; PRINT3(x,y,z);

	x = y = z = -1;
	++x && ++y || ++z; PRINT3(x,y,z);

	x = y = z = -1;
	++x || ++y && ++z; PRINT3(x,y,z);

	x = y = z = -1;
	++x && ++y && ++z; PRINT3(x,y,z);
}

char input7[] = "SSSWILTECH1\1\11W\1WALLMP1";

// RESPUESTA PREGUNTA 7
// En esta función se van recogiendo letras de una cadena de caracteres mediante un loop con switch por cada letra, en
// las primeras iteraciones no se cumple ningún caso por lo que se dirige al caso default. Para el caso ‘E’ y ‘L’ no se
// imprime la letra solo se continua. Para el caso ‘1’ solo se hace un break y se sigue con la siguiente iteración.
// Cuando se llega al \1 esto se toma como el numero 1 en int, por lo que en ese caso se crea un while que recorre la
// lista hasta que se encuentre otro \1 o un \0, lo que pasa es que cuando se termina este while no hay ningún continue
// o break, por lo que se salta al siguiente caso, por lo que se inserta una ‘S’. Luego se repiten los casos anteriores
// hasta terminar la lista.
void pregunta7() { // switch, break continue
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

#define PR(format,value) printf(#value " = %" #format "\t",(value))
#define NL putchar('\n')
#define PR1(f,x1) PR(f,x1), NL
#define PR2(f,x1,x2) PR(f,x1), PR1(f,x2)
#define PR3(f,x1,x2,x3) PR(f,x1), PR2(f,x2,x3)
#define PR4(f,x1,x2,x3,x4) PR(f,x1), PR3(f,x2,x3,x4)

int a8[] = {0,1,2,3,4};

// RESPUESTA PREGUNTA 8
// Los vectores crean espacios de memoria consecutivos para guardar sus datos, por lo que, a la hora de crear un puntero,
// si a este se le asigna un espacio de un vector, sumando o restando podemos acceder a los datos del vector. En el primer 
// caso se recorre el vector normalmente mediante un for. En el siguiente caso mediante ‘&’ obtenemos la dirección de memoria
// del dato se le asigna al puntero, como los espacios son consecutivos, incrementando el número de la dirección se obtiene el
// siguiente valor del vector. En el siguiente caso se recorre el puntero mediante índices que funciona como p+1. En el
// siguiente caso, se muestra que se puede obtener el valor al que apunta un puntero mediante ‘*’, además se incrementa el
// p junto a i por lo que se va saltando de dos en 2, hasta llegar a un espacio nulo que es representado con 0. En el siguiente
// caso se recorre el puntero hacia atrás. En el siguiente caso, si se usa un valor negativo en un puntero, este retorna el 
// valor contrario, es decir, si 0 es primer valor en un vector, -0 es el ultimo valor en el vector. Finalmente se recorre el
// puntero restando la dirección actual del puntero con la primera dirección del vector.
void pregunta8() { // Vectores y punteros simples
	int i, *p;

	for( i=0; i <=4; i++ ) PR(d,a8[i]);
	NL;
	for( p= &a8[0]; p<=&a8[4]; p++)
		PR(d,*p);
	NL;
	for ( p=&a8[0],i=1; i <=5; i++ )
		PR(d,p[i]);
	NL;
	for( p=a8,i=0; p+1<=a8+4; p++,i++ )
		PR(d,*(p+i));
	NL;
	for ( p=a8+4; p>=a8; p--) PR(d,*p);
	NL;
	for ( p=a8+4,i=0; i<=4; i++ ) PR(d,p[-i]);
	NL;
	for ( p=a8+4; p >=a8; p-- ) PR(d,a8[p-a8]);
	NL;
}

int a9[]={0,1,2,3,4};
int *p9[] = {a9,a9+1,a9+2,a9+3,a9+4};
int **pp9=p9;

// RESPUESTA PREGUNTA 9
// Se pueden crear punteros que apunten a otros punteros o vectores con punteros, y mediante ‘*’ podemos acceder al
// valor de la dirección de este puntero. Además, el operador ‘*’ tiene el mismo nivel de precedencia que ‘++’, por lo
// que, independientemente de su posición, se resuelven de derecha de izquierda. *pp9++ primero incrementa a pp9 y 
// luego obtiene su valor. *++pp9 incrementa primero a pp9 y luego obtiene su puntero. ++*pp9 primero obtiene el 
// puntero y luego incrementa este. **pp9++ primero incrementa pp9 y luego obtiene el valor del puntero del puntero.
// *++*pp9 primero obtiene el valor puntero, lo incrementa, y luego obtiene el valor de este mismo puntero. El ultimo
// ++**pp9 obtiene el valor del puntero del puntero y luego lo incrementa.
void pregunta9() { // vectores de punteros
	PR2(d,a9,*a9);
	PR3(d,p9,*p9,**p9);
	PR3(d,pp9,*pp9,**pp9);
	NL;

	pp9++; PR3(d,pp9-p9,*pp9-a9,**pp9);
	*pp9++; PR3(d,pp9-p9,*pp9-a9,**pp9);
	*++pp9; PR3(d,pp9-p9,*pp9-a9,**pp9);
	++*pp9; PR3(d,pp9-p9,*pp9-a9,**pp9);
	NL;

	pp9=p9;
	**pp9++; PR3(d,pp9-p9,*pp9-a9,**pp9);
	*++*pp9; PR3(d,pp9-p9,*pp9-a9,**pp9);
	++**pp9; PR3(d,pp9-p9,*pp9-a9,**pp9);
}

int a10[3][3] = {
	{ 1, 2, 3 },
	{ 4, 5, 6 },
	{ 7, 8, 9 }
};

int *pa[3] = { a10[0], a10[1], a10[2] };
int *p10 = a10[0];

// RESPUESTA PREGUNTA 10
// Se pueden almacenar vectores dentro de una lista de vectores, para recorrer los valores dentro de este vector se
// utilizan dos index para las filas y columnas. En el primer caso se recorre el vector con un solo index por lo que el
// vector solo va a recorrer el primer dato de cada vector, también se recorren los vectores mediante sus direcciones 
// de memoria, el primer puntero obtiene la dirección del vector y el segundo la dirección del dato. En el segundo caso
// se crea un vector de int que guardan la dirección de cada vector, y un puntero con la dirección del primer vector,
// luego estos se recorren en un for. 
void pregunta10() { // multiples dimensiones
	int i;
	printf("\naaa1\n");
	for( i=0; i<3; i++ )
		PR3(d, a10[i][2-i], *a10[i], *(*(a10+i)+i) );
	NL;
	for ( i=0; i<3; i++ )
		PR2(d, *pa[i], p10[i]);
}

char *c[] = {
	"ENTER",
	"NEW",
	"POINT",
	"FIRST"
};
char **cp[] = { c+3, c+2, c+1, c };
char ***cpp = cp;

// RESPUESTA PREGUNTA 11
// Se crea un vector de punteros que llevan a varias cadenas de caracteres (*c), este vector se le asigna otro vector de
// punteros(**cp), pero se asignan en orden contrario, y luego este vector se asigna a otro puntero(***cpp). En el primer
// caso como se resuelve de derecha a izquierda primero se incrementa la dirección de memoria (++cpp) por lo que la posición
// actual de cpp queda en la segunda dirección de cp, luego obtenemos el valor en c mediante ** y obtenemos la palabra 
// “POINT”. En el siguiente caso por precedencia se incrementa cpp y queda en la tercera posición de cp, luego nos 
// dirigimos a esa dirección de memoria con * y en cp reducimos su valor, y eso nos lleva a la primera posición de c, 
// finalmente accedemos a su valor con * y se realiza un +3 eliminando los primeros 3 caracteres de la palabra obteniendo
// “ER”. En el siguiente caso retrocedemos 2 direcciones de memoria en cpp, nos dirigimos a su valor y lo incrementamos en
// +3 eliminando sus primeros 3 caracteres y obtenemos “ST”. En el ultimo caso con cpp[-1][-1]+1, primero, retrocedemos un
// espacio en cpp y obtenemos su valor en cp, luego retrocedemos otro espacio en cp y obtenemos su valor y finalmente lo
// incrementamos en 1 eliminando su primer carácter y finalmente obtenemos “EW”.
void pregunta11() { // sopa de punteros 
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