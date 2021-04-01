#include <stdio.h>
#include <stdlib.h>
#include "IngresoDeValores.h"
#include "Validaciones.h"
#include "OperacionesMatematicas.h"

/**
 * @fn int ObtenerEntero(void)
 * @brief Pide el ingreso de un valor tipo Int y lo almacena en memoria
 *
 * @return Retorna el valor entero ingresado
 */
int ObtenerEntero (void)
{
	int valor;

	printf ("Ingresar un numero: ");
	scanf ("%d", &valor);

	return valor;
}
