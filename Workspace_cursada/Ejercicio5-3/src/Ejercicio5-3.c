/*
Ejercicio 5-3:
Realizar un programa que permita el ingreso de 10 números enteros distintos de cero.
La carga deberá ser aleatoria (todos los elementos se inicializaran en cero por default.
Determinar el promedio de los positivos, y del menor de los negativos la suma de los antecesores.
Utilizar funciones y vectores.

 */

#include <stdio.h>
#include <stdlib.h>
#include "InputOutput.h"
#include "MathOperations.h"
#include "Validations.h"

#define N 3

int main(void)
{
	setbuf (stdout, NULL);

	int numeros [N];
	float promedioPositivos;
	int sumaNegativosAntencesores;

	InitNumbersZero(numeros, N);

	promedioPositivos = PositivesAverage(numeros, N);

	if (promedioPositivos == 0)
	{
		printf ("no se ingresaron numeros positivos\n");
	}
	else
	{
		printf ("El promedio de los positivos es de: %.2f\n", promedioPositivos);
	}
	sumaNegativosAntencesores = SearchLowestNegativeInt(numeros, N);

	if (sumaNegativosAntencesores == 0)
	{
		printf ("No se ingresaron numeros negativos\n");
	}
	else
	{
		printf ("La suma de los negativos antecesores es de: %d", sumaNegativosAntencesores);
	}

	return EXIT_SUCCESS;
}
