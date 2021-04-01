#include <stdio.h>
#include <stdlib.h>
#include "IngresoDeValores.h"
#include "Validaciones.h"
#include "OperacionesMatematicas.h"

/**
 * @fn float RealizarPromedio(int, int)
 * @brief Recibe el acumulador y un contador para luego calcular el promedio.
 *
 * @param acumulador: es la suma de cada valor ingresado.
 * @param contador: cuenta las veces que se ingresó dicho valor.
 * @return Retorna el promedio de tipo float resultante.
 */
float RealizarPromedio (int acumulador, int contador)
{
	float promedio;

	promedio = (float)acumulador / contador;

	return promedio;
}
/**
 * @fn int SumaNegativosAntecesores(int)
 * @brief Recibe un número negativo y calcula la suma de los números que lo anteceden.
 *
 * @param valor: número negativo a calcular.
 * @return Retorna el resultado del cálculo.
 */
int SumaNegativosAntecesores (int valor)
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
