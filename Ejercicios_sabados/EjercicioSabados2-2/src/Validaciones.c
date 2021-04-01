#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"
#include "IngresoDeValores.h"
#include "OperacionesMatematicas.h"

/**
 * @fn int ValidarTipoInt(int)
 * @brief Recibe un número y establece si es negativo, positivo o cero.
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
