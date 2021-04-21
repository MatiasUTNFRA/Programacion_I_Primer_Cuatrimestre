#include <stdio.h>
#include <stdlib.h>
#include "InputOutput.h"
#include "MathOperations.h"

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
