/*
Ejercicio 4-1 (Estructuras facil):
Crear la estructura empleado con idEmpleado, nombre, sueldo y puesto (programador,
analista, tester).
Crear un menu con las siguientes opciones:
1. Cargar empleados. Carga secuencial.
2. Mostrar empleados. Ordenados por puesto.
3. Mostrar solo los empleados analistas.
4. Mostrar cuantos empleados tester hay.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Validations.h"

int main(void)
{
	setbuf (stdout, NULL);

	int opcion;
	eEmpleado empleados [MAX_EMPLEADOS];
	int last;

	last = 0;

	opcion = MainMenu();

	while (opcion != 0)
	{
		switch (opcion)
	{
			case 1:
					last = GetEmployees(last);
			break;
			case 2:

			break;
			case 3:

			break;
			case 4:

			break;
	}

	}
	return EXIT_SUCCESS;
}
