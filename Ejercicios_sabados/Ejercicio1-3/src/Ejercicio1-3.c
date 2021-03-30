/*
 Ejercicio 3:
Realizar el algoritmo que permita ingresar los datos de los alumnos de una
división de la UTN FRA, los datos solicitados son:
Legajo
Tipo cursada(L: &quot;libre&quot; - P: &quot;presencial&quot; – R: &quot;remota&quot;)
Cantidad de materias( mas de cero y menos de 8)
Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
Nota promedio (entre 0 y 10)
Edad (validar)
Se debe informar de existir, o informar que no existe , en el caso que
corresponda.
a) El Legajo del mejor promedio que femenino.
b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
c) El promedio de nota por sexo.
d) La edad y legajo del que cursa más materias. (Sin importar su género)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{	setbuf (stdout, NULL);

	char seguir;
	int legajo;
	char tipoCursada;
	int cantidadMaterias;
	char sexo;
	int notaPromedio;
	int edad;
	int mejorNotaPromedio;
	int legajoMejorNota;
	int masJovenLibre;
	int legajoMasJoven;
	int contadorMasJoven;
	int contadorMasculino;
	int contadorFemenino;
	int contadorNoBinario;
	int acumuladorMasculino;
	int acumuladorFemenino;
	int acumuladorNoBinario;
	float promedioMasculino;
	float promedioFemenino;
	float promedioNoBinario;
	int flagMaterias;
	int mayorMaterias;
	int legajoMayorMaterias;
	int edadMayorMaterias;

	contadorMasJoven = 0;
	contadorMasculino = 0;
	contadorFemenino = 0;
	contadorNoBinario = 0;
	acumuladorMasculino = 0;
	acumuladorFemenino = 0;
	acumuladorNoBinario = 0;
	flagMaterias = 0;

	do
	{
		printf ("Ingresar el numero de legajo: ");
		scanf ("%d", &legajo);

		while (legajo <= 0)
		{
			printf ("Legajo incorrecto. Reingresar: ");
			scanf ("%d", &legajo);
		}
		printf ("Ingresar el tipo de cursada (\"l\": libre - \"p\": presencial - \"r\": remota): ");
		fflush (stdin);
		scanf ("%c", &tipoCursada);

		while (tipoCursada != 'l' && tipoCursada != 'p' && tipoCursada != 'r')
		{
			printf ("Tipo de cursada invalido. Reingresar (\"l\": libre - \"p\": presencial - \"r\": remota): ");
			fflush (stdin);
			scanf ("%c", &tipoCursada);
		}
		printf ("Ingresar la cantidad de materias (Entre 1 y 7): ");
		scanf ("%d", &cantidadMaterias);

		while (cantidadMaterias < 1 || cantidadMaterias > 7)
		{
			printf ("Cantidad de materias invalida. Reingresar (Entre 1 y 7): ");
			scanf ("%d", &cantidadMaterias);
		}
		printf ("Ingresar el sexo (\"f\": femenino - \"m\": masculino - \"o\": no binario): ");
		fflush (stdin);
		scanf ("%c", &sexo);

		while (sexo != 'f' && sexo != 'm' && sexo != 'o')
		{
			printf ("Sexo invalido. Reingresar (\"f\": femenino - \"m\": masculino - \"o\": no binario): ");
			fflush (stdin);
			scanf ("%c", &sexo);
		}
		printf ("Ingresar la nota promedio (entre 0 y 10): ");
		scanf ("%d", &notaPromedio);

		while (notaPromedio < 0 || notaPromedio > 10)
		{
			printf ("Nota promedio invalido. Reingresar (entre 0 y 10): ");
			scanf ("%d", &notaPromedio);
		}
		printf ("Ingresar la edad: ");
		scanf ("%d", &edad);

		while (edad < 18 || edad > 120)
		{
			printf ("Edad invalida. Reingresar: ");
			scanf ("%d", &edad);
		}


		printf ("¿Seguir ingresando? (Ingresar \"n\" para terminar, sino ingresar cualquier otra tecla): ");
		fflush (stdin);
		scanf ("%c", &seguir);

		switch (sexo)
		{
			case 'f':
				if (contadorFemenino == 0 || notaPromedio > mejorNotaPromedio)
				{
					mejorNotaPromedio = notaPromedio;
					legajoMejorNota = legajo;
				}
				contadorFemenino ++;
				acumuladorFemenino += notaPromedio;
			break;

			case 'm':
				if (tipoCursada == 'l')
				{
					if (contadorMasJoven == 0 || edad < masJovenLibre)
					{
						masJovenLibre = edad;
						legajoMasJoven = legajo;
						contadorMasJoven = 1;
					}
				}
				contadorMasculino ++;
				acumuladorMasculino += notaPromedio;
			break;

			case 'o':
				contadorNoBinario ++;
				acumuladorNoBinario += notaPromedio;
			break;
		}
		if (flagMaterias == 0 || cantidadMaterias > mayorMaterias)
		{
			mayorMaterias = cantidadMaterias;
			legajoMayorMaterias = legajo;
			edadMayorMaterias = edad;
			flagMaterias = 1;
		}

	}while (seguir != 'n');

	if (contadorFemenino == 0)
	{
		printf ("a) No hay mujeres ingresadas\n");
	}
	else
	{
		printf ("a) El legajo de la mujer con mejor nota promedio es: %d\n", legajoMejorNota);
	}
	if (contadorMasJoven == 0)
	{
		printf ("b) No hay hombres que cursen libre\n");
	}
	else
	{
		printf ("b) El legajo del hombre que cursa libre mas joven es: %d\n", legajoMasJoven);
	}
	if (contadorFemenino == 0)
	{
		printf ("c) No hay mujeres ingresadas\n");
	}
	else
	{
		promedioFemenino = (float)acumuladorFemenino / contadorFemenino;
		printf ("c) El promedio de mujeres es de: %.2f\n", promedioFemenino);
	}
	if (contadorMasculino == 0)
	{
		printf ("c) No hay hombres ingresados\n");
	}
	else
	{
		promedioMasculino = (float)acumuladorMasculino / contadorMasculino;
		printf ("c) El promedio de hombres es de: %.2f\n", promedioMasculino);
	}
	if (contadorNoBinario == 0)
	{
		printf ("c) No hay no binarios ingresados\n");
	}
	else
	{
		promedioNoBinario = (float)acumuladorNoBinario / contadorNoBinario;
		printf ("c) El promedio de no binarios es de: %.2f\n", promedioNoBinario);
	}
	printf ("d).Legajo del alumno con mayor materias cursadas es: %d\n", legajoMayorMaterias);
	printf (".Edad del alumno con mayor materias cursadas es: %d", edadMayorMaterias);

	return EXIT_SUCCESS;
}
