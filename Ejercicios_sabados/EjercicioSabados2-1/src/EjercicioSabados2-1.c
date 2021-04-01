/*
Crear una función que reciba como parámetro un numero entero. La función
retornara 1 en caso de que sea positivo, -1 en caso de que sea negativo y 0 en
caso de que sea 0. Realizar la prueba lógica de la función en el main.
 */

#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"
#include "IngresoDeValores.h"

int main(void)
{
	setbuf (stdout, NULL);

	int numeroIngresado;
	int tipoDeEntero;

	numeroIngresado = ObtenerEntero();

	tipoDeEntero = ValidarTipoInt (numeroIngresado);

	printf ("%d", tipoDeEntero);

	return EXIT_SUCCESS;
}

