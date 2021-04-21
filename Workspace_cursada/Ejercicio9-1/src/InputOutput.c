#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Validations.h"
#include "Product.h"
#include "Menus.h"

/**
 * @fn void InitNumbers (int[], int)
 * @brief Inicializa todos los valores del array en -1.
 * 
 * @param numeros: array a inicializar.
 * @param cantidad: cantidad de elementos a inicializar.
 */
void InitNumbers (eProducto productos [], int cantidad)
{
	int i;
	
	for(i = 0 ; i < cantidad ; i++)
	{
		productos[i].idProducto = -1;
	}
}

/**
 * @fn void GetStrings(char[], int)
 * @brief Almacena cadenas de texto y verifica que no sobrepase la capacidad del Array.
 * 
 * @param cadena: Cadena de texto a almacenar.
 * @param cantidad: Cantidad de posiciones que posee el array.
 */
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

/**
 * @fn int GetInt(char[])
 * @brief Pide un numero en formato de cadena de caracteres y lo pasa a tipo int.
 *
 * @param mensaje: mensaje que recibira el usuario para indicarle que ingrese un numero.
 * @return Retorna el numero ya convertido.
 */
int GetInt()
{
    char str[20];
    int numero;

    fflush (stdin);
    scanf ("%s", str);

    while(!IsInt(str))
    {
        printf("No es un numero valido. Reingresar: ");
        fflush(stdin);
        scanf ("%s", str);
    }
    numero = atoi (str);

    return numero;
}
/**
 * @fn double GetReal(char[])
 * @brief Pide un numero en formato de cadena de caracteres y lo pasa a tipo float.
 *
 * @param mensaje: mensaje que recibira el usuario para indicarle que ingrese un numero.
 * @return Retorna el numero ya convertido.
 */
double GetReal()
{
    char str[20];
    double numero;

    fflush(stdin);
    scanf ("%s", str);

    while(!IsReal(str))
    {
        printf("No es un numero valido. Reingresar: ");
        fflush(stdin);
        scanf ("%s", str);
    }
    numero = atof (str);

    return numero;
}
/**
 * @fn int GetNumber(int, int)
 * @brief Funcion intermedia que se encarga de llamar a otras funciones para obtener numeros en particular
 *
 * @param min: Rango minimo que debera tener el numero.
 * @param max: Rango maximo que debera tener el numero.
 * @return Retorna el numero ya obtenido y validado por otras funciones.
 */
int GetNumber(int min, int max)
{
    int valor;

    valor = GetInt("Su opcion: ");

    while(!SetIntRange(valor, min, max))
    {
        printf("Opcion invalida. Debe ser entre %d y %d", min, max);
        valor = GetInt("\nSu opcion: ");
    }
    return valor;
}
/**
 * @fn int FindFreeSpaceInt (int[], int)
 * @brief Busca espacios libres en arrays inicializadas en -1.
 *
 * @param numeros: Array donde se buscara el espacio libre.
 * @param tam: Cantidad de elementos del array.
 * @return Retorna el indice encontrado y si no lo encuentra retorna: -1
 */
int FindFreeSpaceInt (eProducto productos[], int tam)
{
    int i = tam - 1; // inicia el índice en el último elemento para hacer una busqueda regresiva
    // retrocede mientras no haya llegado al principio del array y mientras no encuentre espacios vacíos
    while(i >= 0 && productos [i].idProducto != -1)
    {
        i--;
    }
    return i;
}
/**
 * @fn int FindValue(eProducto[], int, int)
 * @brief Busca algun valor que ya se haya ingresado.
 *
 * @param productos: array donde se buscara.
 * @param tam: cantidad de elementos del array.
 * @param id: Valor a comparar con el array.
 * @return Retorna el indice encontrado y si no lo encuentra retorna -1.
 */
int FindValue(eProducto productos[], int tam, int id)
{
    int i = tam - 1; // inicia el índice en el último elemento para hacer una busqueda regresiva
    // retrocede mientras no haya llegado al principio del array y mientras no encuentre el producto
    while(i >= 0 && productos[i].idProducto != id)
    {
        i--;
    }
    return i; // retorna la posición del producto con ese id o bien -1 si no se encuentra
}
/**
 * @fn void ShowValueList(eProducto)
 * @brief Muestra los valores ingresados dentro de la estructura.
 *
 * @param p: Variable donde esta alojada la estructura.
 */
void ShowValueList(eProducto p)
{
    printf("\nId: %d\n", p.idProducto);
    printf("Descripcion: %s\n", p.descripcion);

    switch (p.nacionalidad)
    {
    	case EEUU:
    	printf("Nacionaidad: EEUU\n");
    	break;
    	case CHINA:
    	printf("Nacionaidad: China\n");
    	break;
    	case OTRO:
    	printf("Nacionaidad: Otro\n");
    	break;
    }
    switch (p.tipo)
    {
    	case IPHONE:
    	printf("Tipo: IPhone\n");
    	break;
    	case MAC:
    	printf("Tipo: Mac\n");
    	break;
    	case IPAD:
    	printf("Tipo: IPad\n");
    	break;
    	case ACCESORIOS:
    	printf("Tipo: Accesorios\n");
    	break;
    }
    printf("Precio: %.2f\n", p.precio);
}
/**
 * @fn int AddValue(eProducto[], int)
 * @brief Almacena valores dentro del array de estructuras.
 *
 * @param productos: array de estructuras donde se almacenaran los valores ingresados.
 * @param tam: cantidad de elementos del array.
 * @return Retorna: 0: Exito al almacenar, 1: Cancelado, 2: Duplicado, 3: Sin espacio.
 */
int AddValue(eProducto productos[], int tam)
{
    int resultado;
    int pos;
    int id;

    pos = FindFreeSpaceInt(productos, tam);

    if(pos >= 0)
    {
        printf("Ingrese el id del producto (0 para retroceder): ");
        id = GetNumber(0, MAX_PRODUCTO);
        if(id == 0)
        {
            resultado = CANCELADO;

        } else if(FindValue(productos, tam, id) < 0)
        {
            productos[pos].idProducto = id;
            GetStrings(productos[pos].descripcion, 30, "Ingrese descripcion: \n");
            //scanf("%s", productos[pos].descripcion);
            printf("Ingrese nacionalidad:\n");
            productos[pos].nacionalidad = MenuProductNationality();
            printf("Ingrese tipo de producto:\n");
            productos[pos].tipo = MenuProductType();
            printf("Ingrese el precio: ");
            productos[pos].precio = GetReal();

            printf ("Se va a agregar el siguiente producto: \n");
            ShowValueList(productos[pos]);
            if(MenuConfirm())
            {
                resultado = EXITO;
            }
            else
            {
                productos[pos].idProducto = -1;
                resultado = CANCELADO;
            }
        }
        else
        {
            resultado = DUPLICADO;
        }
    }
    else
    {
        resultado = SIN_ESPACIO;
    }
    return resultado;
}
/**
 * @fn int RemoveValue(eProducto[], int)
 * @brief Efectua una eliminacion logica del valor almacenado en el array de estructuras.
 *
 * @param productos: array de estructuras donde se realizara la eliminacion.
 * @param tam: cantidad de elementos del array
 * @return Retorna: 0: Exito al eliminar, 1: Cancelado, 4: Inexistente.
 */
int RemoveValue(eProducto productos[], int tam)
{
    int resultado;
    int id;
    int pos;

    printf("Ingrese el id del producto (0 para retroceder): ");
    id = GetNumber(0, MAX_PRODUCTO);

    if(id == 0)
    {
        resultado = CANCELADO;
    }
    else
    {
        pos = FindValue(productos, tam, id);

        if(pos < 0)
        {
            resultado = INEXISTENTE;
        }
        else
        {
        	printf ("Se va a eliminar el siguiente producto: \n");
        	ShowValueList(productos[pos]);

            if(MenuConfirm())
            {
                productos[pos].idProducto = -1;
                resultado = EXITO;
            }
            else
            {
                resultado = CANCELADO;
            }
        }
    }
    return resultado;
}
/**
 * @fn int ModifyValue(eProducto[], int)
 * @brief Permite modificar valores ingresados en el array de estructuras.
 *
 * @param productos: array de estructuras a modificar.
 * @param tam: cantidad de elementos del array.
 * @return Retorna: 0: Exito al modificar, 1: Cancelado, 4: Inexistente.
 */
int ModifyValue(eProducto productos[], int tam)
{
    int resultado;
    int pos;
    int id;
    int opcion;

    printf("Ingrese el id del producto (0 para retroceder): ");
    id = GetNumber(0, MAX_PRODUCTO);

    if(id == 0)
    {
        resultado = CANCELADO;
    }
    else
    {
        pos = FindValue(productos, tam, id);

        if(pos < 0)
        {
            resultado = INEXISTENTE;
        }
        else
        {
        	ShowValueList(productos[pos]);
            opcion = MenuModify();

            while(opcion != 0)
            {
                switch(opcion)
                {
                case 1:
                    printf("Ingrese el nuevo precio: ");
                    productos[pos].precio = GetReal();
                    break;
                case 2:
                    printf("Ingrese el nuevo tipo de producto:\n");
                    productos[pos].tipo = MenuProductType();
                    break;
                }
                opcion = MenuModify();
            }
            resultado = EXITO;
        }
    }
    return resultado;
}
/**
 * @fn void ShowAllValuesList(eProducto[], int)
 * @brief Muestra todos los valores que se ingresaron en el array de estructuras.
 *
 * @param productos: array de estructuras a mostrar.
 * @param tam: cantidad de elementos del array.
 */
void ShowAllValuesList(eProducto productos[], int tam)
{
    int i;
    int flag;

    flag = 0;

    for(i = 0; i < tam; i++)
    {
        if(productos[i].idProducto > 0)
        {
        	ShowValueList(productos[i]);
            flag = 1;
        }
    }
    if (flag == 0)
    {
    	printf ("No se encontraron existencias.\n");
    }
}
void PriceList(eProducto productos[], int tam, float precio)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        if(productos[i].idProducto > 0 && productos[i].precio == precio)
        {
        	ShowValueList(productos[i]);
        }
    }
}
void ListProductsByPrice(eProducto productos[], int tam)
{
    BubbleSortByPrice(productos, tam);
    ShowAllValuesList(productos, tam);
}
void ListProductsByDescription(eProducto productos[], int tam)
{
    BubbleSortByDescription(productos, tam);
    ShowAllValuesList(productos, tam);
}
/* retorna la posición de primer producto válido o -1 si el array está vacío */
int FirstProduct(eProducto productos[], int tam)
{
    int i = 0;
    while(i < tam && productos[i].idProducto < 0)
    {
        i++;
    }
    if(i == tam)
    {
        i = -1;
    }
    return i;
}
void ShowMostExpensive(eProducto productos[], int tam)
{
    float maxPrecio;
    maxPrecio = MostExpensive(productos, tam);

    if(maxPrecio < 0)
    {
        printf("No hay productos\n");
    }
    else
    {
        PriceList(productos, tam, maxPrecio);
    }
}
void ReportResults (int resultado)
{
	switch (resultado)
	{
	case EXITO:
		printf ("\n<< Operacion exitosa>>\n\n");
		break;
	case CANCELADO:
		printf ("Operacion cancelada\n");
		break;
	case	DUPLICADO:
        printf ("Codigo duplicado\n");
		break;
	case SIN_ESPACIO:
        printf ("No hay espacio disponible\n");
		break;
	case INEXISTENTE:
        printf ("Producto inexistente\n");
		break;
	default:
        printf ("Resultado desconocido\n");
		break;
	}
}
