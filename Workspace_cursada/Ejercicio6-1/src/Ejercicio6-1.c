/*
Ejercicio 6-1:
Disponemos de dos variables numéricas (a y b). Realizar un algoritmo que permita el intercambio de valores de dichas variables.

 */

#include <stdio.h>
#include <stdlib.h>
void GetInt(char mensaje [], int valor);
int main(void)
{
	setbuf (stdout, NULL);
	/*int a;
	int b;
	int auxiliar;

	a = 7;
	b = 1;

	auxiliar = a;

	a = b;
	b = auxiliar;

	printf ("a: %d \nb: %d", a, b);*/

	int numero;

	numero = GetInt("Ingresar un numero: ", numero);

	printf ("%a", numero);
	return EXIT_SUCCESS;
}
void GetInt(char mensaje [], int valor)
{
	printf ("%s", mensaje);
	scanf ("%d", &valor);
}
//Burbujeo:

/*int mivector[5] = {8, 1, 4, 9, 2};
int i;
int j;
int auxiliar;

for (i = 0 ; i < 5 - 1 ; i++)//Amarillo
{
	for (j = i + 1 ; j < 5 ; j++) // Verde
	{
		if (mivector[i] > mivector [j]) // Criterio de ordenamiento
		{
			auxiliar = mivector [i];
			mivector[i] = mivector [j];
			mivector[j] = auxiliar;
		}
	}
}*/


