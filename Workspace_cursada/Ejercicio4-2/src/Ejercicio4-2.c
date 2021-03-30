/*
Ejercicio 4-2:
Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit ,
validando que las temperaturas ingresadas estén entre el punto de congelación y
ebullición del agua para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit
se hacen en otra biblioteca.
*/

#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"
#include "Conversion.h"

int main(void)
{
	setbuf (stdout, NULL);

	int opcion;
	float temperatura;
	float conversion;

	do
	{
		printf ("\n<<Conversor de temperaturas>>\n");
		printf("\nMENU PRINCIPAL\n");
		printf("0. Salir\n");
		printf("1. Celsius a Fahrenheit\n");
		printf("2. Fahrenheit a Celsius\n");
		printf("Su opcion: ");
		scanf("%d", &opcion);

		while (!ValidarEntero(opcion, 0, 2))
		{
			printf ("Opcion invalida. Reingresar: ");
			scanf ("%d", &opcion);
		}
		switch (opcion)
		{
			case 1:
				printf ("Ingrese la temperatura en Celsius (0 a 100): ");
				scanf ("%f", &temperatura);
				while (!ValidarFlotante(temperatura, 0, 100))
				{
					printf ("Temperatura invalida. Reingresar: ");
					scanf ("%f", &temperatura);
				}
				conversion = ConvertirAFahrenheit(temperatura);

				printf ("%.2f Celsius = %.2f Fahrenheit\n", temperatura, conversion);
			break;

			case 2:
				printf ("Ingrese la temperatura en Fahrenheit (32 a 212): ");
				scanf ("%f", &temperatura);
				while (!ValidarFlotante(temperatura, 32, 212))
				{
					printf ("Temperatura invalida. Reingresar: ");
					scanf ("%f", &temperatura);
				}
				conversion = ConvertirACelsius(temperatura);

				printf ("%.2f Fahrenheit = %.2f Celsius\n", temperatura, conversion);
			break;
		}

	}while (opcion != 0);

	printf ("FIN DEL PROGRAMA\n");
	system ("pause");
	return EXIT_SUCCESS;
}
