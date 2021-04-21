/*
 ============================================================================
 Name        : Ejercicio7-1A.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
/*variables

simples (escalares) : int float char void double
compuestas
    arrays
        vectores unidimensionales
        matrices bidimensionales

    estructura defino bajo el mismo nombre distintos atributos de distintos tipos
*/

/*
typedef struct
{
    //campos o atributos
    int legajo;
    int nota1;
    int nota2;
    float promedio;
    char nombre[25];

}eAlumno;

//void MostrarUnAlumno(int, float, float, float, char[]);
void MostrarUnAlumno(eAlumno);

eAlumno PedirDatos();

int main()
{

    eAlumno miAlumno;// = {1000, 8, 9, 8.5, "Juan", "juancito@lalal.com"};

    miAlumno = PedirDatos();

    MostrarUnAlumno(miAlumno);

    return 0;
}

void MostrarUnAlumno(eAlumno unAlumno)
{
    printf("%d %d %d %f %s\n", unAlumno.legajo,
                             unAlumno.nota1,
                             unAlumno.nota2,
                             unAlumno.promedio,
                             unAlumno.nombre);
}

eAlumno PedirDatos()
{
    eAlumno alumnoIngresado;

    printf("Ingrese legajo: ");
    scanf("%d", &alumnoIngresado.legajo);
    printf("Ingrese Nota 1: ");
    scanf("%d", &alumnoIngresado.nota1);
    printf("Ingrese Nota 2: ");
    scanf("%d", &alumnoIngresado.nota2);
    printf("Ingrese nombre: ");
    __fpurge(stdin);
    scanf("%[^\n]", alumnoIngresado.nombre);

    alumnoIngresado.promedio = (float)(alumnoIngresado.nota1 + alumnoIngresado.nota2)/2;

    return alumnoIngresado;
}*/
