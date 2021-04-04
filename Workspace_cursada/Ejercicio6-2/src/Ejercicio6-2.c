/*
Ejercicio 6-2:
Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos).
Necesito generar un listado de los números positivos de manera creciente y negativos de manera decreciente. (Como máximo 4 for)
Ejemplo:
Listado 1 : 4-5-6-10-18-29
Listado 2 : -1,-5,-9,-12

 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf (stdout, NULL);

	int numeros [10] = {3, 1, 5, 9, 8, 2, -8, -7, -2, -4,};
	int a;
	int b;
	int auxiliar;

	/*for (a = 0 ; a < 6 - 1 ; a++)//Amarillo
	{
		for (b = a + 1 ; b < 6 ; b++) // Verde
		{
			if (numeros [a] < numeros [b]) // Criterio de ordenamiento
			{
				auxiliar = numeros [a];
				numeros [a] = numeros [b];
				numeros[b] = auxiliar;


			}
		}
	}*/
	int mivector[5] = {8, 1, 4, 9, 2};
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
	}



	return EXIT_SUCCESS;
}
