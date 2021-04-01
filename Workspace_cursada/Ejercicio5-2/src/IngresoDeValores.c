#include <stdio.h>
#include <stdlib.h>
#include "IngresoDeValores.h"
#include "OperacionesMatematicas.h"
#include "Validaciones.h"
#define MIN -1000
#define MAX 1000

/**
 * @fn void MostrarNumeros(int[], int)
 * @brief Recibe un array de enteros para mostrar sus valores.
 *
 * @param numeros: array que se mostrará.
 * @param cantidad: cantidad de posiciones del array.
 */
void MostrarNumeros(int numeros[], int cantidad)
{
    int i;

     for(i=0; i<cantidad; i++)
   {
        printf("%d\n", numeros[i]);
   }
}

/**
 * @fn void CargarRangoNumeros(int[], int, char[])
 * @brief Recibe un array de enteros, verifica que respete un rango de valores y los almacena.
 *
 * @param numeros: array que se almacenara en la direccion de memoria.
 * @param cantidad: cantidad de posiciones del array.
 * @param mensaje: cadena de texto que recibe del main.
 */
void CargarRangoNumeros (int numeros [], int cantidad, char mensaje [])
{
	int i;

	for (i = 0 ; i < cantidad ; i++)
	{
		printf("%s", mensaje);
	    scanf("%d", &numeros[i]);

	    while (!ValidarIntRango(numeros[i], MIN, MAX))
	    {
	    	printf ("Dato invalido. Reingresar: ");
	    	scanf ("%d", &numeros[i]);
	    }
	}
}
/**
 * @fn void MostrarNumerosPares(int[], int)
 * @brief Muestra un listado de valores enteros que posee un array.
 *
 * @param numeros: array a utilizar.
 * @param cantidad: cantidad de posiciones del array.
 */
void MostrarNumerosPares (int numeros [], int cantidad)
{
	int i;

	for(i=0; i<cantidad; i++)
	{

	     if (VerificarParidad(numeros [i]) == 1)
	     {
	    	 printf ("Listado de los numeros pares: %d\n", numeros [i]);
	     }
	}
}
/**
 * @fn void MostrarNumerosImpares(int[], int)
 * @brief Muestra un listado de aquellos valores enteros que se encuentran en posiciones impares.
 *
 * @param numeros
 * @param cantidad
 */
void MostrarNumerosImpares (int numeros [], int cantidad)
{
	int i;

	for(i=0; i<cantidad; i++)
	{

		 if (i % 2 != 0)
		 {
			 printf ("Posicion de los numeros impares: %d\n", numeros [i]);
		 }
	 }
}
