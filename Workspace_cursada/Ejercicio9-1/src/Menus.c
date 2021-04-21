#include <stdio.h>

#include "InputOutput.h"
#include "product.h"

int MainMenu()
{
    puts("MENU PRINCIPAL");
    puts("--------------");
    puts("0. Salir");
    puts("1. Alta");
    puts("2. Baja");
    puts("3. Modificacion");
    puts("4. Listado");
    puts("5. Listado por precio");
    puts("6. Listado por descripcion");
    puts("7. Productos mas caros");
    puts("8. Precio promedio por tipo de producto");
    printf("Su opcion: ");
    return GetNumber(0, 8);
}

int MenuProductNationality()
{
    puts("1. EE.UU");
    puts("2. CHINA");
    puts("3. OTRO");
    printf("Su opcion: ");
    return GetNumber(1, 3);
}

int MenuProductType()
{
    puts("1. IPHONE");
    puts("2. MAC");
    puts("3. IPAD");
    puts("4. ACCESORIOS");
    printf("Su opcion: ");
    return GetNumber(1, 4);
}

int MenuConfirm()
{
    printf("1. Confirma  - 2. Cancela: ");
    int opcion = GetNumber(1, 2);
    return opcion == 1;
}

int MenuModify()
{
    puts("0. Terminar");
    puts("1. Precio");
    puts("2. Tipo");
    printf("Su opcion: ");
    return GetNumber(0, 2);
}
