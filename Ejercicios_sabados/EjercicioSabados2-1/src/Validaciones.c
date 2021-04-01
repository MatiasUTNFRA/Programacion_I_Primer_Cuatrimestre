#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"
#include "IngresoDeValores.h"

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
