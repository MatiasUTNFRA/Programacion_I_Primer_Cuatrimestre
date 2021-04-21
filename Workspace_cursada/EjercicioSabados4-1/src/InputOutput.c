#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Validations.h"
#include "Empleados.h"

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

    valor = GetInt();

    while(!SetIntRange(valor, min, max))
    {
        printf("Opcion invalida. Debe ser entre %d y %d", min, max);
        valor = GetInt();
    }
    return valor;
}
/**
 * @fn void InitNumbers (int[], int)
 * @brief Inicializa todos los valores del array en -1.
 *
 * @param numeros: array a inicializar.
 * @param cantidad: cantidad de elementos a inicializar.
 */
void InitNumbers (int numeros [], int cantidad)
{
	int i;

	for(i = 0 ; i < cantidad ; i++)
	{
		numeros[i] = -1;
	}
}
/**
 * @fn void GetIntsSecuence(int[], int, char[])
 * @brief Recibe un array de enteros para almacenar valores secuenciales en su dirección de memoria.
 *
 * @param numeros: array que recibirá los valores.
 * @param cantidad: cantidad de posiciones del array.
 * @param mensaje: cadena de texto que recibe del main.
 */
void GetIntsSecuence (int numeros[], int cantidad, char mensaje [])
{
    int i;

  	for(i=0; i<cantidad; i++)
   {
       printf("%s", mensaje);
       scanf("%d", numeros[i]);
   }
}
eEmpleado GetEmployee(int last)
{

	eEmpleado empleadoIngresado;

	empleadoIngresado.idEmpleado = ++last;

	GetStrings(empleadoIngresado.nombre, 30, "Ingresar el nombre");

	printf ("Ingresar el sueldo: ");
	empleadoIngresado.sueldo = GetReal();

	printf ("Ingresar el puesto: ");
	empleadoIngresado.puesto = GetNumber(1, MAX_PUESTO);

	return empleadoIngresado;
}
int GetEmployees (eEmpleado empleados[], int last)
{
	int seguir;

	printf ("Desea ingresar un empleado?\n");
	seguir = MenuConfirm();

	while (seguir == 1 && last < MAX_EMPLEADOS)
	{
		empleados [last] = GetEmployee(last);
		last ++;
		printf ("Desea ingresar otro empleado?\n");

		seguir = MenuConfirm();
	}
	return last;
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
