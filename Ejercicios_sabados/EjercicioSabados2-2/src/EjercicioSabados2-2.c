/*
Ejercicio 2-2:
Realizar un programa que permita el ingreso de 10 números enteros.
Determinar el promedio de los positivos, la cantidad de ceros y del menor de
los negativos la suma de los antecesores.

Nota:
Utilizar la función del punto anterior y desarrollar funciones para resolver los
procesos que están resaltados.
*/

#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"
#include "IngresoDeValores.h"
#include "OperacionesMatematicas.h"

int main(void)
{
	setbuf (stdout, NULL);

	int numeroIngresado;
	int tipoDeEntero;
	int i;
	int acumulador;
	int contador;
	float promedio;
	int contadorCeros;
	int mayorNegativos;
	int flagNegativos;
	int sumaNegativos;

	acumulador = 0;
	contador = 0;
	contadorCeros = 0;
	flagNegativos = 0;

	for (i = 0 ; i < 10 ; i ++ )
	{
		numeroIngresado = ObtenerEntero();

		tipoDeEntero = ValidarTipoInt(numeroIngresado);

		switch (tipoDeEntero)
		{
		case 1:
			acumulador += numeroIngresado;
			contador++;
		break;

		case -1:
			if (flagNegativos == 0 || numeroIngresado > mayorNegativos)
			{
				mayorNegativos = numeroIngresado;
				flagNegativos = 1;
			}
		break;

		default:
			contadorCeros ++;
		break;
		}
	}
	if (contador == 0)
	{
		printf ("No se ingresaron numeros positivos\n");
	}
	else
	{
		promedio = RealizarPromedio (acumulador, contador);
		printf ("El promedio de los positivos es de: %.2f\n", promedio);
	}
	if (flagNegativos == 0)
	{
		printf ("No se ingresaron numeros negativos\n");
	}
	else
	{
		sumaNegativos = SumaNegativosAntecesores(mayorNegativos);
		printf ("La suma de los negativos antecesores es de: %d\n", sumaNegativos);
	}
	printf ("La cantidad de ceros ingresados es de: %d", contadorCeros);

	return EXIT_SUCCESS;
}
