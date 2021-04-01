#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"
#include "IngresoDeValores.h"
#include "OperacionesMatematicas.h"
#define MIN -1000
#define MAX 1000

/**
 * @fn int ValidarTipoInt(int)
 * @brief Recibe un numero y establece si es negativo, positivo o cero.
 *
 * @param numero: valor a analizar, ingresado por el usuario .
 * @return Retorna -1: Negativo, 1: Positivo o 0: Cero.
 */
int ValidarTipoInt (int numero)
{
	int retorno;

	retorno = 0;

	if (numero < 0)
	{
		retorno = -1;
	}
	else
	{
		if (numero > 0)
		{
			retorno = 1;
		}
	}
	return retorno;
}
/**
 * @fn int ValidarIntRango(int, int, int)
 * @brief Recibe un numero entero y un rango el cual tendra que validar si lo cumple o no.
 *
 * @param valor: numero entero ingresado por el usuario.
 * @param min: rango minimo a cumplir.
 * @param max: rango maximo a cumplir.
 * @return Retorna 1: Si cumple la condicion. Retorna 0: Si no cumple la condicion.
 */
int ValidarIntRango (int valor, int min, int max)
{
	int retorno;

	retorno = 1;

	if (valor < min || valor > max)
	{
		retorno = 0;
	}
	return retorno;
}
/**
 * @fn int VerificarParidad(int)
 * @brief Recibe un entero y verifica si es par o impar.
 *
 * @param valor: Variable a verificar paridad.
 * @return Retorna 1: Espar. Retorna 0: Es impar.
 */
int VerificarParidad (int valor)
{
	int retorno;

	retorno = 0;

	if (valor % 2 == 0)
	{
		int UpperInt (int valor);
		retorno = 1;
	}
	return retorno;
}

