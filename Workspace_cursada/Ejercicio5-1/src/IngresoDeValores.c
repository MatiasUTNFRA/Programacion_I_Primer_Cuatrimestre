#include <stdio.h>
#include <stdlib.h>
#include "IngresoDeValores.h"
#include "OperacionesMatematicas.h"

/**
 * @fn void CargarNumeros(int[], int, char[])
 * @brief Recibe un array de enteros para almacenar sus valores en su dirección de memoria.
 *
 * @param numeros: array que recibirá los valores.
 * @param cantidad: cantidad de posiciones del array.
 * @param mensaje: cadena de texto que recibe del main.
 */
void CargarNumeros(int numeros[], int cantidad, char mensaje [])
{
    int i;

  	for(i=0; i<cantidad; i++)
   {
       printf("%s", mensaje);
       scanf("%d", &numeros[i]);
   }
}
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
