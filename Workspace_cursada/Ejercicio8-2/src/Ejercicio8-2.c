/*
 Ejercicio 8-2:
Realizar el ejercicio 7-1 con estructuras.
Ejercicio 7-1:
Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:
idProducto (numerico)
descripcion (alfanumérico)
nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
tipo (numérico, por el momento utilizaremos un define:  MAC - IPHONE - IPAD - ACCESORIOS)
precio (numérico decimal)
Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:
ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array.
BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo.
LISTADO Productos.
LISTADO ordenado por precio.
LISTADO ordenado por descripción.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf (stdout, NULL);
	return EXIT_SUCCESS;
}
