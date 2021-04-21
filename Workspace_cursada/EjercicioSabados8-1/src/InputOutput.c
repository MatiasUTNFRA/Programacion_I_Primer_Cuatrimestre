#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "InputOutput.h"
#include "MathOperations.h"

//Entrada de datos:
/**
 * @fn int GetInt(char mensaje [])
 * @brief Recibe una cadena de texto, pide el ingreso de un valor tipo Int y lo almacena en memoria
 *
 * @return Retorna el valor entero ingresado
 */
int GetInt (char mensaje [])
{
	int valor;

	printf ("%s", mensaje);
	scanf ("%d", &valor);

	return valor;
}
void GetStrings (char cadena [], int cantidad, char mensaje [])
{
	char aux [1000];

	printf ("%s", mensaje);
	fflush (stdin);
	scanf("%[^\n]", aux);

	while (strlen (aux) > cantidad)
	{
		printf ("Ingresar nombre: ");
		fflush (stdin);
		scanf("%[^\n]", aux);
	}
	strcpy (cadena, aux);
}
// -- Estructuras --
eDatoCompuesto GetStructure ()
{
	eDatoCompuesto DatoIngresado;

	GetStrings (DatoIngresado.nombre, 30, "Ingresar el nombre: \n");

	DatoIngresado.golesMetidos = GetInt("Ingresar entero1: \n");

	DatoIngresado.partidosJugados = GetInt("Ingresar entero2: \n");

	DatoIngresado.promedioGoles = DoAverage(DatoIngresado.golesMetidos, DatoIngresado.partidosJugados);

	return DatoIngresado;
}
// Salida de datos:

void ShowStructure (eDatoCompuesto TipoDato)
{
	 printf("%s %d %d %.2f\n", TipoDato.nombre,
			 TipoDato.golesMetidos,
			 TipoDato.partidosJugados,
			 TipoDato.promedioGoles);
}
