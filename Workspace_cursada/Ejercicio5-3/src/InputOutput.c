#include <stdio.h>
#include <stdlib.h>
#include "InputOutput.h"
#include "MathOperations.h"
#include "Validations.h"
#define N 10

//Entrada de datos:

//--Arrays--
/**
 * @fn void InitNumbersZero(int[], int)
 * @brief Inicializa todos los valores del array en cero.
 * 
 * @param numeros: array a inicializar.
 * @param cantidad: cantidad de elementos a inicializar.
 */
void InitNumbersZero (int numeros [], int cantidad)
{
	int i;
	
	for(i=0 ; i<cantidad ; i++)
	{
		numeros[i]=0;
	}
	GetIntsRandom(numeros, N);
}
/**
 * @fn void GetIntsRandom(int[], int)
 * @brief Almacena en el array los enteros y la posicion que ingrese el usuario.
 * 
 * @param numeros: array donde se almacenaran los datos.
 * @param cantidad: cantidad total de elementos del array.
 */
void GetIntsRandom (int numeros [], int cantidad)
{
	char seguir;

	do
	{
	printf("Ingresar la posicion del vector: ");
	scanf("%d",&cantidad);
	printf("Ingresar el valor en esa posicion (No puede ser 0): ");
	scanf("%d",&numeros[cantidad-1]);

	while (numeros [cantidad-1] == 0)
	{
		printf ("Dato invalido. Debe ser distinto a 0. Reingresar: ");
		scanf ("%d", &numeros [cantidad-1]);
	}
	printf("Desea ingresar otro dato s/n?: ");
	fflush (stdin);
	scanf("%c",&seguir);
	}while(seguir=='s');
}

// Salida de datos:
/**
 * @fn void ShowInts(int[], int)
 * @brief Recibe un array de enteros para mostrar sus valores.
 * 
 * @param numeros: array que se mostrará.
 * @param cantidad: cantidad de posiciones del array.
 */

void ShowInts(int numeros[], int cantidad)
{
    int i;

     for(i=0; i<cantidad; i++)
   {
        printf("Posicion %d: %d\n", i, numeros[i]);
   }
}
