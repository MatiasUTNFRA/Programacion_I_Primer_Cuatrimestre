#include <stdio.h>
#include <stdlib.h>
#include "IngresoDeValores.h"
#include "OperacionesMatematicas.h"

/**
 * @fn int AcumularNumeros(int[], int)
 * @brief Recibe un array de enteros y calcula la suma de todos sus elementos.
 *
 * @param numeros: array a calcular.
 * @param cantidad: cantidad de posiciones del array.
 * @return Retorna la suma total.
 */
int AcumularNumeros(int numeros[], int cantidad)
{
    int i;
    int acumulador;

    acumulador = 0;

     for(i=0; i<cantidad; i++)
   {
        acumulador+=numeros[i];
   }
   return acumulador;
}
