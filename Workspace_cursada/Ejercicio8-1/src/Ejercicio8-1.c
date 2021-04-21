/*
Ejercicio 8-1:
Crear la estructura Jugador (nombre, goles metidos, partidos jugados, promedio de goles).
Crear una función que permita cargar los datos de un jugador y otra que los muestre.
Una tercer función calculará el promedio de goles.

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nombre [30];
	int golesMetidos;
	int partidosJugados;
	float promedioDeGoles;

}eJugador;

int GetInt (char mensaje []);
void GetStrings (char cadena [], int cantidad, char mensaje []);
float DoAverage(int acumulador, int contador);
eJugador GetData ();
//float PromedioGoles (int goles, int partidos);
void ShowPlayer (eJugador onePlayer);

int main(void)
{
	setbuf (stdout, NULL);

	eJugador miJugador;

	miJugador = GetData();

	ShowPlayer(miJugador);

	return EXIT_SUCCESS;
}
/*int GetNumber (char mensaje [])
{
	char auxiliar [250];
	int numero;

	printf ("%s", mensaje);
	fflush (stdin);
	scanf ("%s", auxiliar);

	while (!IsNumber(auxiliar))
	{
		printf ("Error, eso no es un numero. Reingresar: \n");
		fflush (stdin);
		scanf ("%s", auxiliar);
	}
	numero = atoi (auxiliar);

	return numero;
}
int IsString (char cadena [])
{
	int i;

	i = 0;

	while (cadena [i] != '\0')
	{
		if ((cadena [i] != ' ') && (cadena [i] < 'a' || cadena [i] > 'z') && (cadena [i] < 'A' || cadena [i] > 'Z'))
		{
			return 0;
		}
		i ++;
	}
	return 1;
}
int IsNumber (char cadena [])
{
	int i;
	int retorno;

	i = 0;
	retorno = 1;

	if (cadena [0] == '-')
	{
		i = 1;
	}
	for ( ; cadena [i] != '\0' ; i++)
	{
		if (cadena [i] < '0' || cadena [i] > '9')
		{
			retorno = 0;
			break;
		}
	}
	return retorno;
}*/
eJugador GetData ()
{
	eJugador jugadorIngresado;

	/*printf ("Ingresar el nombre del jugador: \n");
	fflush (stdin);
	scanf ("%[^\n]", jugadorIngresado.nombre);*/

	GetStrings (jugadorIngresado.nombre, 30, "Ingresar el nombre del jugador: \n");

	/*printf ("Ingresar los goles metidos: \n");
	scanf ("%d", &jugadorIngresado.golesMetidos);*/

	jugadorIngresado.golesMetidos = GetInt("Ingresar los goles metidos: \n");

	jugadorIngresado.partidosJugados = GetInt("Ingresar la cantidad de partidos jugados: \n");

	jugadorIngresado.promedioDeGoles = DoAverage(jugadorIngresado.golesMetidos, jugadorIngresado.partidosJugados);

	return jugadorIngresado;
}
/*float PromedioGoles (int goles, int partidos)
{
	float promedio;

	promedio = (float)goles / partidos;

	return promedio;
}*/
void ShowPlayer (eJugador onePlayer)
{
	 printf("%s %d %d %.2f\n", onePlayer.nombre,
			 	 	 	 	   onePlayer.golesMetidos,
							   onePlayer.partidosJugados,
							   onePlayer.promedioDeGoles);
}
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
int GetInt (char mensaje [])
{
	int valor;

	printf ("%s", mensaje);
	scanf ("%d", &valor);

	return valor;
}
float DoAverage(int acumulador, int contador)
{
	float promedio;

	promedio = (float)acumulador / contador;

	return promedio;
}
