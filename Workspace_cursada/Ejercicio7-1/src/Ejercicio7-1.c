/*
Ejercicio 7-1:
Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:
idProducto (numerico)
descripcion (alfanumérico)
nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
tipo (numérico, por el momento utilizaremos un define:  MAC - IPHONE - IPAD - ACCESORIOS)
precio (numérico decimal)
Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:
ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array.
BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo.
LISTADO Productos.
LISTADO ordenado por precio.
LISTADO ordenado por descripción.

 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUMNOS 3
#define MAX_CADENA 30

void InitNumbers (int numeros [], int cantidad);

int FindFreeSpace (int numeros [], int cantidad);

void ShowStudents (int legajo, float nota1, float nota2, float promedio, char nombre[]);

void ShowAllStudents (int legajos[], float notas1[], float notas2[], float promedios[], char nombres[][MAX_CADENA], int tam);

int GetOneStudent (int legajos[], float notas1[], float notas2[], float promedios[], char nombres[][MAX_CADENA], int tam);

void BubbleSortStudents (int legajos [], int tam, float notas1 [], float notas2 [], float promedios [], char nombres[] [MAX_CADENA]);


int main()
{
	setbuf (stdout, NULL);

    int legajos[MAX_ALUMNOS];
	float notas1[MAX_ALUMNOS];
	float notas2[MAX_ALUMNOS];
	float promedio[MAX_ALUMNOS];

	//char nombres[FILAS][COLUMNAS];
	char nombres[MAX_ALUMNOS][MAX_CADENA];
    int opcion;
    int index;
    /*int i;
    int j;

    int auxInt;
    float auxFloat;
    float auxFloat2;
    float auxPromedio;
    char auxString[MAX_CADENA];*/


    InitNumbers (legajos, MAX_ALUMNOS);

    do
    {
        printf("1. ALTA\n");
        printf("2. BAJA\n");
        printf("3. MODIFICACION\n");
        printf("4. ORDENAR y MOSTRAR\n");
        printf("10. Salir\n");
        printf("Elija una opcion:");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:

            	index = GetOneStudent (legajos, notas1, notas2, promedio, nombres, MAX_ALUMNOS);
	            if(index==-1)
	            {
	                printf("No hay espacio disponible en la lista...");
	            }
	            else
	            {
	                printf("Alumno cargado con exito!!!");
	            }

            break;
            case 2:

            case 3:

            break;
            case 4:

            	               /* for(i=0; i<MAX_ALUMNOS-1; i++)
            	                {
            	                    for(j=i+1; j<MAX_ALUMNOS; j++)
            	                    {
            	                        if(strcmp(nombres[i], nombres[j])>0)
            	                        {
            	                            auxInt = legajos[i];
            	                            legajos[i] = legajos[j];
            	                            legajos[j] = auxInt;

            	                            strcpy(auxString, nombres[i]);
            	                            strcpy(nombres[i], nombres[j]);
            	                            strcpy(nombres[j],auxString);

            	                            auxFloat = notas1[i];
            	                            notas1[i] = notas1[j];
            	                            notas1[j] = auxFloat;

            	                            auxFloat2 = notas2 [i];
            	                            notas2 [i] = notas2 [j];
            	                            notas2 [j] = auxFloat2;

            	                            auxPromedio = promedio [i];
            	                            promedio [i] = promedio [j];
            	                            promedio [j] = auxPromedio;
            	                        }
            	                    }
            	                }*/
            	BubbleSortStudents (legajos, MAX_ALUMNOS, notas1, notas2, promedio, nombres);

            	ShowAllStudents (legajos, notas1, notas2, promedio, nombres, MAX_ALUMNOS);
            break;
        }
    }while(opcion!=10);

    return 0;
}

/*void InicializarAlumnos(int numeros [], int tam)
{
     int i;

    for(i=0; i<tam; i++)
    {
        numeros [i] = -1;
    }
}*/
/**
 * @fn void InitNumbersZero(int[], int)
 * @brief Inicializa todos los valores del array en -1.
 *
 * @param numeros: array a inicializar.
 * @param cantidad: cantidad de elementos a inicializar.
 */
void InitNumbers (int numeros [], int cantidad)
{
	int i;

	for(i = 0 ; i < cantidad ; i++)
	{
		numeros[i] = -1;
	}
}

/*int BuscarLibre(int legajos[], int tam)
{
    int i;
    int index;

    index = -1;

    for(i=0; i<tam; i++)
    {
        if(legajos[i]==-1)//encontre espacio libre
        {
            index = i;
            break;
        }
    }
    return index;
}*/
/**
 * @fn int FindFreeSpace(int[], int)
 * @brief Busca espacios libres en arrays inicializadas en -1.
 *
 * @param numeros: Array donde se buscara el espacio libre.
 * @param cantidad: Cantidad de elementos del array.
 * @return Retorna el indice encontrado y si no lo encuentra retorna: -1
 */
  int FindFreeSpace (int numeros [], int cantidad)
  {
  int i;
  int index;

  index = -1;

  	  for (i = 0 ; i < cantidad ; i++)
  	  {
  		  if (numeros [i] == -1)
  		  {
  			   index = i;
  			   break;
  		  }
  	  }
  return index;
  }
/**
 * @fn void ShowStudents(int, float, float, float, char[])
 * @brief Muestra la informacion de un alumno en particular.
 *
 * @param legajo: numero de legajo del alumno.
 * @param nota1: su nota nunmero 1.
 * @param nota2: su nota numero 2.
 * @param promedio: el promedio de las mismas.
 * @param nombre: nombre del alumno.
 */
void ShowStudents (int legajo, float nota1, float nota2, float promedio, char nombre[])
{
     printf("%d -- %f -- %f -- %f -- %s\n", legajo, nota1, nota2, promedio, nombre);
}
/**
 * @fn void ShowAllStudents(int[], float[], float[], float[], char[][], int)
 * @brief Muestra la informacion de todos los alumnos que se hayan cargado.
 *
 * @param legajos: numero de legajo del alumno.
 * @param notas1: su nota nunmero 1.
 * @param notas2: su nota nunmero 2.
 * @param promedios: el promedio de las mismas.
 * @param nombres: nombre del alumno.
 * @param tam: cantidad de elementos del array.
 */
void ShowAllStudents(int legajos[], float notas1[], float notas2[], float promedios[], char nombres[][MAX_CADENA], int tam)
{
    int i;
    for(i=0; i<MAX_ALUMNOS; i++)
    {
        if(legajos[i]!=-1)
        {
        	ShowStudents (int legajos [i], float notas1 [i], float notas2 [i], float promedios [i], char nombres [i]);
        }
    }
}
/**
 * @fn int GetOneStudent(int[], float[], float[], float[], char[][], int)
 * @brief Verifica que haya espacio, almacena la informacion del alumno y calcula el promedio de sus notas.
 *
 * @param legajos: numero de legajo del alumno.
 * @param notas1: nota numero 1.
 * @param notas2: nota numero 2.
 * @param promedios: promedio de las mismas.
 * @param nombres: nombre del alumno.
 * @param tam: cantidad de elementos del array.
 * @return Retorna 0: Si el alumno pudo ser cargado. Retorna -1: Si no se pudo cargar.
 */
int GetOneStudent(int legajos[], float notas1[], float notas2[], float promedios[], char nombres[][MAX_CADENA], int tam)
{
    int index;

    index = FindFreeSpace (legajos, tam);

    if (index != -1)//encontro espacio
    {
        printf("Ingrese legajo: ");
		scanf("%d", &legajos[index]);

		printf("Ingrese nota 1: ");
		scanf("%f", &notas1[index]);

		printf("Ingrese nota 2: ");
		scanf("%f", &notas2[index]);

		printf("Ingrese nombre: ");
		fflush (stdin);
		scanf("%[^\n]",nombres[index]);

		//calcular el promedio
		promedios [index] = (notas1 [index]+ notas2 [index]) / 2;
		index = 0;
    }

    return index;
}
/*retorno:

si el legajo existe y se Elimino
si el dato existe y el usuario cancelo la Baja
si el dato no existe*/
/*void EliminarAlumno(int legajos[], float notas1[], float notas2[], float promedios[], char nombres[][MAX_CADENA_], int tam)
{//Baja logica
    int legajoIngresado;
    int i;
    printf("Ingrese el legajo a eliminar: ");
    scanf("%d", &legajoIngresado);
    for(i=0; i<tam; i++)
    {
        if(legajoIngresado == legajos[i])//lo encontre
        {
            //legajos[i] = -1;

            //Para la modificacion, en otra funcion parecida a EliminarAlumno:

            //Pido que quiere modificar.. pido el dato y modifico


            break;
        }
    }
}*/
/**
 * @fn void BubbleSortStudents(int[], int, float[], float[], float[], char[][])
 * @brief Ordena de menor a mayor y de la 'a' a la 'z' la informacion del alumno registrado.
 *
 * @param legajos: numero de legajo.
 * @param tam: cantidad de elementos del array.
 * @param notas1: primer nota del alumno.
 * @param notas2: segunda nota.
 * @param promedios: promedio de ambas notas.
 * @param nombres: nombre del alumno.
 */
void BubbleSortStudents (int legajos [], int tam, float notas1 [], float notas2 [], float promedios [], char nombres[] [MAX_CADENA])
{
	int i;
	int j;
	int auxInt;
	char auxString [tam];
	float auxFloat;
	float auxFloat2;
	float auxPromedio;


	for(i = 0 ; i < tam - 1 ; i++)
	{
		for(j = i + 1 ; j < tam ; j++)
		{
			if (strcmp (nombres[i], nombres[j]) > 0)
			{
				auxInt = legajos [i];
				legajos [i] = legajos [j];
				legajos [j] = auxInt;

				strcpy(auxString, nombres [i]);
				strcpy(nombres [i], nombres [j]);
				strcpy(nombres [j],auxString);

				auxFloat = notas1 [i];
				notas1 [i] = notas1 [j];
				notas1 [j] = auxFloat;

				auxFloat2 = notas2 [i];
				notas2 [i] = notas2 [j];
				notas2 [j] = auxFloat2;

				auxPromedio = promedios [i];
				promedios [i] = promedios [j];
				promedios [j] = auxPromedio;
			}
		}
	}
}
