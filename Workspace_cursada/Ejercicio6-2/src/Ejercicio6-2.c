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
#include "InputOutput.h"
#define N 4

int main(void)
{
	setbuf (stdout, NULL);

	int numeros [N];
	int i;
	int j;
	int auxiliar;

	GetIntsSecuence(numeros, N, "Ingresar numeros: ");

	for (i = 0 ; i < N - 1 ; i++)
	{
		for (j = i + 1 ; j < N ; j++)
		{
				if (numeros [i] > numeros [j])
				{
					auxiliar = numeros [i];
					numeros [i] = numeros [j];
					numeros [j] = auxiliar;
				}
		}
	 }
	for (i = 0 ; i < N ; i++)
	{
		if (numeros [i] >= 0)
		{
			printf ("Listado positivos: %d\n", numeros [i]);
		}
		else
		{
			printf ("Listado negativos: %d\n", numeros [i]);
		}
	}
	return EXIT_SUCCESS;
}
