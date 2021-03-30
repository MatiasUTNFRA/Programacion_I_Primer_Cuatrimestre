/*
Ejercicio 2:
Ingresar 5 números. Determinar cuál es el máximo y el mínimo e indicar en
qué orden fue ingresado.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{	setbuf (stdout, NULL);

	int i;
	int numeroIngresado;
	int maximo;
	int minimo;
	int ordenIngresoMaximo;
	int ordenIngresoMinimo;

	for (i = 0 ; i < 5 ; i++)
	{
		printf ("Ingresar un numero: ");
		scanf ("%d", &numeroIngresado);

		if (i == 0)
		{
			maximo = numeroIngresado;
			minimo = numeroIngresado;
			ordenIngresoMinimo = i;
			ordenIngresoMaximo = i;
		}
		else
		{
			if (numeroIngresado < minimo)
			{
				minimo = numeroIngresado;
				ordenIngresoMinimo = i;
			}
			else
			{
				if (numeroIngresado > maximo)
				{
					maximo = numeroIngresado;
					ordenIngresoMaximo = i;
				}
			}
		}
	}
	printf ("El minimo numero ingresado es: %d. Orden: %d\n", minimo, ordenIngresoMinimo);
	printf ("El maximo numero ingresado es: %d. Orden: %d", maximo, ordenIngresoMaximo);
	return EXIT_SUCCESS;
}
