#include <stdio.h>
#include <stdlib.h>
#include "InputOutput.h"

//Entrada de datos:
/**
 * @fn int GetInt(char mensaje [])
 * @brief Recibe una cadena de texto, pide el ingreso de un valor tipo Int y lo almacena en memoria
 *
 * @return Retorna el valor entero ingresado
 */
int GetInt(char mensaje [])
{
	int valor;

	printf ("%s", mensaje);
	scanf ("%d", &valor);

	return valor;
}
/**
 * @fn float GetFloat(char mensaje [])
 * @brief Recibe una cadena de texto, pide el ingreso de un valor tipo float y lo almacena en memoria
 *
 * @return Retorna el valor flotante ingresado
 */
float GetFloat(char mensaje [])
{
	float valor;

	printf ("%s", mensaje);
	scanf ("%f", &valor);

	return valor;
}
//--Arrays--
/**
 * @fn void InitNumbersZero(int[], int)
 * @brief Inicializa todos los valores del array en cero.
 * 
 * @param numeros: array a inicializar.
 * @param cantidad: cantidad de elementos a inicializar.
 */
void InitNumbersZero (int numeros [], int cantidad)
{
	int i;
	
	for(i=0 ; i<cantidad ; i++)
	{
		numeros[i]=0;
	}
}
/**
 * @fn void GetIntsRandom(int[], int)
 * @brief Almacena en el array los enteros y la posicion que ingrese el usuario.
 * 
 * @param numeros: array donde se almacenaran los datos.
 * @param cantidad: cantidad total de elementos del array.
 */
void GetIntsRandom (int numeros [], int cantidad)
{
	char seguir;

	do
	{
	printf("Ingrese posicion: ");
	scanf("%d",&cantidad);
	printf("Ingrese valor a cargar en el vector: ");
	scanf("%d",&numeros[cantidad-1]);
	printf("Desea ingresar otro dato s/n?: ");
	fflush (stdin);
	scanf("%c",&seguir);
	}while(seguir=='s');
}

/**
 * @fn void GetIntsSecuence(int[], int, char[])
 * @brief Recibe un array de enteros para almacenar valores secuenciales en su dirección de memoria.
 * 
 * @param numeros: array que recibirá los valores.
 * @param cantidad: cantidad de posiciones del array.
 * @param mensaje: cadena de texto que recibe del main.
 */
void GetIntsSecuence(int numeros[], int cantidad, char mensaje [])
{
    int i;

  	for(i=0; i<cantidad; i++)
   {
       printf("%s", mensaje);
       scanf("%d", &numeros[i]);
   }
}

// Salida de datos:
/**
 * @fn void ShowInts(int[], int)
 * @brief Recibe un array de enteros para mostrar sus valores.
 * 
 * @param numeros: array que se mostrará.
 * @param cantidad: cantidad de posiciones del array.
 */

void ShowInts(int numeros[], int cantidad)
{
    int i;

     for(i=0; i<cantidad; i++)
   {
        printf("Posicion %d: %d\n", i, numeros[i]);
   }
}
/**
 * @fn void FindIntVectors([],,)
 * @brief Busca si el entero solicitado se encuentra en el array.
 * 
 * @param numeros: array donde se buscara el numero coincidente.
 * @param cantidad: cantidad de posiciones del array.
 * @param valor: Entero solicitado para buscar en el array.
 */
void FindIntVectors (int numeros [], int cantidad, int valor)
{
	int flag;
	int i;
	
	flag = 0;
	
	printf("Ingrese numero a buscar: ");
	scanf("%d",&valor);
	
	for(i = 0 ; i < cantidad ; i++)
	{
		if(valor == numeros[i])
		{
			printf("Se encontro el numero");
	
			flag = 1;
		}
	}
	if(flag == 0)
	{
		printf("El numero no se encontro");
	}
}

/**
 * @fn void ShowIntsPosUneven(int[], int)
 * @brief Muestra un listado de aquellos valores enteros que se encuentran en posiciones impares.
 *
 * @param numeros
 * @param cantidad
 */
void ShowIntsPosUneven(int numeros [], int cantidad)
{
	int i;

	for(i=0; i<cantidad; i++)
	{

		 if (i % 2 != 0)
		 {
			 printf ("Valor de la posicion impar %d: %d\n", i, numeros [i]);
		 }
	 }
}
