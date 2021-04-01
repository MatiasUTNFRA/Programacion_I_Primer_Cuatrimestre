#include <stdio.h>
#include <stdlib.h>
#include "IngresoDeValores.h"
#include "Validaciones.h"

int ObtenerEntero (void)
{
	int valor;

	printf ("Ingresar un numero: ");
	scanf ("%d", &valor);

	return valor;
}

