#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Validations.h"

int MainMenu()
{
    puts("MENU PRINCIPAL");
    puts("--------------");
    puts("0. Salir");
    puts("1. Cargar empleados");
    puts("2. Mostrar empleados");
    puts("3. Mostrar solo los empleados analistas");
    puts("4. Mostrar cuantos empleados tester hay");
    printf ("Su opcion: ");

    return GetNumber(0, 4);
}
int MenuConfirm()
{
    printf("1. Confirma  - 2. Cancela: ");
    int opcion = GetNumber(1, 2);
    return opcion == 1;
}
