/*
Ejercicio 10-3:
Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:
idProducto (numerico)
descripcion (alfanumérico)
nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
tipo (numérico)
precio (numérico decimal)
Agregar la estructura etipoProducto, que definirá los siguientes campos:
idTipo (numérico)
descripcionTipo(alfanumérico)
Para esta estructura en principio trabajaremos con datos hardcodeados:
idTipo
descripcionTipo
1000
Iphone
1001
Ipad
1002
Mac
1003
Accesorios



Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:
ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array. Al momento de dar de alta el producto, el usuario podrá elegir el tipo de producto, de una lista que se le desplegará en pantalla.
BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo. Si modifica el tipo de producto, se utilizara el mismo criterio que para dar de alta.
LISTADO Productos.
LISTADO ordenado por precio.
LISTADO ordenado por descripción.
Agregar los siguientes informes:
El/los  productos más caros.
Precio promedio por tipo de producto. Se deberá mostrar la descripción del tipo y a continuación el precio promedio.
Se agregan los siguientes listados:
El listado de todos los productos con la descripción del tipo.
Por cada tipo la lista de productos.
 */

#include <stdio.h>
#include <stdlib.h>
#include "InputOutput.h"
#include "Validations.h"
#include "Product.h"
#include "MathOperations.h"
#include "Menus.h"
#include "Ordering.h"

int main(void)
{
	setbuf (stdout, NULL);

	int opcion;
	eProducto MiProducto [MAX_PRODUCTO];
	int resultado;

	opcion = MainMenu();
	InitNumbers(MiProducto, MAX_PRODUCTO);

	while (opcion != 0)
	{
		switch (opcion)
		{
			case 1:
				resultado = AddValue(MiProducto, MAX_PRODUCTO);
				ReportResults(resultado);
			break;
			case 2:
				resultado = RemoveValue(MiProducto, MAX_PRODUCTO);
				ReportResults(resultado);
			break;
			case 3:
				resultado = ModifyValue(MiProducto, MAX_PRODUCTO);
				ReportResults(resultado);
			break;
			case 4:
				ShowAllValuesList(MiProducto, MAX_PRODUCTO);
			break;
			case 5:
				ListProductsByPrice(MiProducto, MAX_PRODUCTO);
			break;
			case 6:
				ListProductsByDescription(MiProducto, MAX_PRODUCTO);
			break;
			case 7:
				ShowMostExpensive(MiProducto, MAX_PRODUCTO);
			break;
			case 8:
				AverageByType(MiProducto, MAX_PRODUCTO);
			break;
		}
	system ("pause");
	opcion = MainMenu();
	}
	return EXIT_SUCCESS;
}

