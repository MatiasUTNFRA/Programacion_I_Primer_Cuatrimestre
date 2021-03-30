/*
Ejercicio 1:
Ingresar n�meros enteros, hasta que el usuario lo decida. Calcular y mostrar:
a) El promedio de los n�meros positivos.
b) El promedio de los n�meros negativos.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{	setbuf (stdout, NULL);
	char seguir;
	int numeroIngresado;
	int contadorNegativos;
	int acumuladorNegativos;
	int contadorPositivos;
	int acumuladorPositivos;
	float promedioPositivos;
	float promedioNegativos;


	contadorNegativos = 0;
	acumuladorNegativos = 0;
	contadorPositivos = 0;
	acumuladorPositivos = 0;

	do
	{
		printf ("Ingresar un n�mero: ");
		scanf ("%d", &numeroIngresado);

		if (numeroIngresado > 0)
		{
			contadorPositivos ++;
			acumuladorPositivos += numeroIngresado;
		}
		else
		{
			contadorNegativos ++;
			acumuladorNegativos += numeroIngresado;
		}
		printf ("�Continuar ingresando? (Ingresar \"n\" para terminar, sino presionar cualquier tecla): ");
		fflush (stdin);
		scanf ("%c", &seguir);

	}while (seguir != 'n');

	if (contadorPositivos == 0)
	{
		printf ("a) No se ingresaron n�meros positivos\n");
	}
	else
	{
		promedioPositivos = (float)acumuladorPositivos / contadorPositivos;
		printf ("a) El promedio de los positivos es de: %.2f\n", promedioPositivos);
	}
	if (contadorNegativos == 0)
	{
		printf ("b) No se ingresaron n�meros negativos\n");
	}
	else
	{
		promedioNegativos = (float)acumuladorNegativos / contadorNegativos;
		printf ("b) El promedio de los negativos es de: %.2f", promedioNegativos);
	}
	return EXIT_SUCCESS;
}
