/*
Ejercicio 6-3:
Pedirle al usuario su nombre y apellido (en variables separadas, una para el nombre y otra para el apellido).
Ninguna de las dos variables se puede modificar.
Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
Por ejemplo:
Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
Gomez, Juan Ignacio
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "InputOutput.h"
void SortNameSurname (char nombre [], char apellido []);
int main(void)
{
	setbuf (stdout, NULL);

	char nombre [25];
	char apellido [25];
	/*char apellidoNombre [51]; // 48 + 1 + 1 + 1 Combinacion, \0, ',', ' '
	char auxiliar [1000];
	int longitud;
	int i;

	printf ("Ingresar nombre: \n");
	fflush (stdin);
	scanf("%[^\n]", auxiliar);

	while (strlen (auxiliar) > 24)
	{
		printf ("Ingresar nombre: ");
		fflush (stdin);
		scanf("%[^\n]", auxiliar);
	}
	strcpy (nombre, auxiliar);


	printf ("Ingresar el apellido: \n");
	fflush (stdin);
	scanf ("%[^\n]", apellido);*/

	GetStrings(nombre, 24, "Ingresar nombre: ");
	GetStrings(apellido, 24, "Ingresar apellido: ");
	SortNameSurname(nombre, apellido);


}
	/*strcpy (apellidoNombre, apellido);
	strcat (apellidoNombre, ", ");
	strcat (apellidoNombre, nombre);

	strlwr (apellidoNombre);

	apellidoNombre [0] = toupper (apellidoNombre [0]);

	longitud = strlen (apellidoNombre);

	for (i = 1 ; i < longitud ; i++)
	{
		if (isspace (apellidoNombre[i]) != 0 ) // es espacio
		{
			apellidoNombre [i+1] = toupper (apellidoNombre [i+1]);
		}
	}
	puts (apellidoNombre);

	return EXIT_SUCCESS;*/

// Arrays paralelas:

/*#define MAX_ALUMNOS 3
#define MAX_CADENA 30

int main(void) {
	setbuf(stdout, NULL);

	int legajos[MAX_ALUMNOS] = {1000, 1004, 1100};
	float notas1[MAX_ALUMNOS] = {10, 5.5, 7.5};
	float notas2[MAX_ALUMNOS] = {5, 10, 5.5};
	float promedio[MAX_ALUMNOS];

	//char nombres[FILAS][COLUMNAS];
	char nombres[MAX_ALUMNOS][MAX_CADENA] = {"Juan", "Pepe", "Ana"};

	int i;

	for(i=0; i<MAX_ALUMNOS; i++){
		printf("Ingrese legajo: ");
		scanf("%d", &legajos[i]);

		printf("Ingrese nota 1: ");
		scanf("%f", &notas1[i]);

		printf("Ingrese nota 2: ");
		scanf("%f", &notas2[i]);

		printf("Ingrese nombre: ");
		fflush(stdin);
		gets(nombres[i]);
	}

	for(i=0; i<MAX_ALUMNOS; i++){
		printf("Legajo: %d\n", legajos[i]);
		printf("Nombre: %s\n", nombres[i]);
		printf("Nota 1: %.2f\n", notas1[i]);
		printf("Nota 2: %.2f\n\n", notas2[i]);
	}

	return 0;*/
/**
 * @fn void SortNameSurname(char[], char[])
 * @brief Recibe un nombre y un apellido, acomoda las mayusculas que esten mal y lo muestra ordenado.
 *
 * @param nombre: nombre a analizar.
 * @param apellido: apellido a analizar.
 */
void SortNameSurname (char nombre [], char apellido [])
{
	char apellidoNombre [100];
	int i;
	int longitud;

		strcpy (apellidoNombre, apellido);
		strcat (apellidoNombre, ", ");
		strcat (apellidoNombre, nombre);

		strlwr (apellidoNombre);

		apellidoNombre [0] = toupper (apellidoNombre [0]);

		longitud = strlen (apellidoNombre);

		for (i = 1 ; i < longitud ; i++)
		{
			if (isspace (apellidoNombre[i]) != 0 ) // es espacio
			{
				apellidoNombre [i+1] = toupper (apellidoNombre [i+1]);
			}
		}
		puts (apellidoNombre);
}
