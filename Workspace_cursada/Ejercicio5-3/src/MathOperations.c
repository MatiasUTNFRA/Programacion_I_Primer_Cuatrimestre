#include <stdio.h>
#include <stdlib.h>
#include "InputOutput.h"
#include "MathOperations.h"
#include "Validations.h"
#define N 10

/**
 * @fn float DoAverage(int, int)
 * @brief Recibe el acumulador y un contador para luego calcular el promedio.
 * 
 * @param acumulador: es la suma de cada valor ingresado.
 * @param contador: cuenta las veces que se ingresara dicho valor.
 * @return Retorna el promedio de tipo float resultante.
 */
float DoAverage(int acumulador, int contador)
{
	float promedio;

	promedio = (float)acumulador / contador;

	return promedio;
}
/**
 * @fn int SumPredecessorsNegatives(int)
 * @brief Recibe un numero negativo y calcula la suma de los numeros que lo anteceden.
 * 
 * @param valor: numero negativo a calcular.
 * @return Retorna el resultado del calculo.
 */
int SumPredecessorsNegatives(int valor)
{
	int resultado;

	resultado = -1;

	while (valor < -1)
	{
		resultado += valor;
		valor ++;
	}
	return resultado;
}
// Operaciones de calculadora: 



// --Arrays--
/**
 * @fn int AdderInts(int[], int)
 * @brief Recibe enteros y los va sumando.
 *
 * @param numeros: array a calcular.
 * @param cantidad: cantidad de posiciones del array.
 * @return Retorna la suma acumulada del array.
 */
int AdderInts (int numeros [], int cantidad)
{
	int acumulador;
	int i;

	acumulador = 0;

	for (i = 0 ; i < cantidad ; i++)
	{
		acumulador += numeros [i];
	}
	return acumulador;
}
/**
 * @fn int SearchLowestNegativeInt(int[], int)
 * @brief Busca el entero negativo mas pequeño (mayor de los negativos).
 *
 * @param numeros: array donde se buscara.
 * @param cantidad: cantidad de posiciones del array.
 * @return Si son negativos: busca y retorna el mas pequeño. Positivos: Retorna 0.
 */
int SearchLowestNegativeInt (int numeros [], int cantidad)
{
	int i;
	int NegativoMasChico;
	int flag;

	flag = 0;

	for (i = 0 ; i < cantidad ; i++)
	{
		if (numeros [i] < 0)
		{
			if (i == 0 || numeros [i] > NegativoMasChico)
			{
				NegativoMasChico = numeros[i];
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		NegativoMasChico = 0;
		return NegativoMasChico;
	}
	return SumPredecessorsNegatives(NegativoMasChico);
}
/**
 * @fn int PositivesAverage(int[], int)
 * @brief Calcula el promedio de los numeros positivos.
 *
 * @param numeros: array a calcular.
 * @param cantidad: cantidad de posiciones que posee el array.
 * @return Si son positivos: Calcula el promedio y lo retorna. Negativos: Retorna 0
 */
int PositivesAverage (int numeros [], int cantidad)
{
	int contador;
	int i;
	int acumulador;
	int promedio;

	contador = 0;

	for (i = 0 ; i < cantidad ; i++)
	{
		if (numeros[i] > 0)
		{
			contador ++;
		}
	}
	if (contador != 0)
	{
		acumulador = AdderInts(numeros, cantidad);
		promedio = DoAverage(acumulador, contador);
		return promedio;
	}
	else
	{
		promedio = 0;
		return promedio;
	}
}
