#include <stdio.h>
#include <stdlib.h>
#include "IngresoDeValores.h"
#include "OperacionesMatematicas.h"
#include "Validaciones.h"
#define MIN -1000
#define MAX 1000


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
/**
 * @fn int SumatoriaPares(int[], int)
 * @brief Recibe un array de enteros y suma aquellos que sean pares.
 *
 * @param numeros: array a calcular.
 * @param cantidad: cantidad de posiciones del array.
 * @return Retorna la sumatoria de todos los numeros pares.
 */
int SumatoriaPares(int numeros[], int cantidad)
{
    int i;
    int acumulador;
    int valor;

    acumulador = 0;

    for(i=0; i< cantidad; i++)
    {
        valor = VerificarParidad(numeros[i]);

        if(valor==1)
        {
            acumulador += numeros[i];
        }
    }
    return acumulador;
}
