/*
Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.
Se deberán utilizar funciones y vectores.
 */

#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"
#include "IngresoDeValores.h"
#include "OperacionesMatematicas.h"
#define MIN -1000
#define MAX 1000
#define N 3

int main(void)
{
	setbuf (stdout, NULL);

	int numeros [N];
	int i;
	int auxiliar;
	int contadorPositivos;
	int contadorNegativos;
	int acumulador;
	int mayorImpares;
	int flagImpares;
	int flagListadoPares;

	contadorPositivos = 0;
	contadorNegativos = 0;
	acumulador = 0;
	flagImpares = 0;
	flagListadoPares = 0;

	CargarRangoNumeros(numeros, N, "Ingresar un numero (entre -1000 y 1000): ");

	for (i = 0 ; i < N ; i++)
	{
		auxiliar = ValidarTipoInt(numeros [i]);

		if (auxiliar > 0)
		{
			contadorPositivos ++;
		}
		else
		{
			if (auxiliar < 0)
			{
				contadorNegativos ++;
			}
		}
		if (VerificarParidad(numeros [i]) == 0)
		{
			printf ("Posiciones de los numeros impares: %d\n", i);

			if (flagImpares == 0 || numeros [i] > mayorImpares)
			{
				mayorImpares = numeros [i];
				flagImpares = 1;
			}
		}
		else
		{
			printf ("Listado de los numeros pares: %d\n", numeros [i]);
			flagListadoPares = 1;
		}
	}
	if (flagImpares == 0)
	{
		printf ("No se ingresaron numeros impares\n");
	}
	else
	{
		printf ("El mayor de los impares es: %d\n", mayorImpares);
	}
	if (flagListadoPares == 0)
	{
		printf ("no se ingresaron numeros pares\n");
	}
	acumulador = SumatoriaPares(numeros, N);

	MostrarNumeros(numeros, N);

	printf ("Cantidad de positivos: %d\n", contadorPositivos);
	printf ("Cantidad de negativos: %d\n", contadorNegativos);
	printf ("Sumatoria de los pares: %d\n", acumulador);

	return EXIT_SUCCESS;
}
