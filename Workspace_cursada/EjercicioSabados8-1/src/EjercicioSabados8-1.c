/*
Ejercicio 3-5 (VECTORES PARALELOS O ESTRUCTURAS):
Crear la estructura Jugador (nombre, goles metidos, partidos jugados,
promedio de goles).
Crear una función que permita cargar los datos de un jugador y otra que los
muestre.
Una tercera función calculará el promedio de goles.
Cargar los datos de 5 jugadores. Y mostrarlos por pantalla.
 */

#include <stdio.h>
#include <stdlib.h>
#include "InputOutput.h"
#include "MathOperations.h"
typedef struct
{
	char nombre [30];
	int golesMetidos;
	int partidosJugados;
	float promedioGoles;

}eDatoCompuesto;

int main(void)
{
	setbuf (stdout, NULL);

	eDatoCompuesto miJugador;

	miJugador = GetStructure();


	return EXIT_SUCCESS;
}
