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
	int valor;

	for (i = 0 ; i < cantidad ; i++)
	{
		printf("%s", mensaje);
	    scanf("%d", &valor);

	    while (!ValidarIntRango(valor, MIN, MAX))
	    {
	    	printf ("Dato invalido. Reingresar: ");
	    	scanf ("%d", &valor);
	    }
	    numeros [i] = valor;
	}
}
