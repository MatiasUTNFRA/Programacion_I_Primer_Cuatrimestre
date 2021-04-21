#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "InputOutput.h"

void GetStrings (char cadena [], int cantidad, char mensaje [])
{
	int aux [1000];

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
