/*
Ejercicio 5-1:
Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 */

#include <stdlib.h>
#include <stdio.h>
#include "IngresoDeValores.h"
#include "OperacionesMatematicas.h"

#define N 5

int main()
{
	setbuf (stdout, NULL);

   int listaNumeros[N];
   int acumulador;

   CargarNumeros(listaNumeros, N, "Ingresar un numero: ");

   acumulador = AcumularNumeros(listaNumeros, N);
   printf("La suma es: %d\n", acumulador);

   MostrarNumeros(listaNumeros, N);

    return 0;
}
