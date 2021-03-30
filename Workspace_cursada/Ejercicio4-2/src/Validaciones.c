#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"
#include "Conversion.h"

int ValidarEntero (int valor, int min, int max)
{
	int retorno;

	retorno = 1;

	if (valor < min || valor > max)
	{
		retorno = 0;
	}
	return retorno;
}
int ValidarFlotante (float valor, float min, float max)
{
	int retorno;

	retorno = 1;

	if (valor < min || valor > max)
	{
		retorno = 0;
	}
	return retorno;
}
int ValidarTipoDeEntero (int numero)
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
