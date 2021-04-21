#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "InputOutput.h"
#include "Validations.h"

// Enteros:
/**
 * @fn int SetIntRange(int, int)
 * @brief Recibe un numero entero y un rango el cual tendra que validar si lo cumple o no.
 *
 * @param min: rango minimo a cumplir.
 * @param max: rango maximo a cumplir.
 * @return Retorna 1: Si cumple la condicion. Retorna 0: Si no cumple la condicion.
 */
int SetIntRange(int num, int min, int max)
{
    if(num >= min && num <= max)
    {
        return 1;
    }
    return 0;
}
/**
 * @fn int FindFreeSpaceInt (int[], int)
 * @brief Busca espacios libres en arrays int inicializadas en -1.
 * 
 * @param numeros: Array donde se buscara el espacio libre.
 * @param cantidad: Cantidad de elementos del array.
 * @return Retorna el indice encontrado y si no lo encuentra retorna: -1
 */
  int FindFreeSpaceInt (int numeros [], int cantidad)
  {
  int i;
  int index;

  index = -1;

  	  for (i = 0 ; i < cantidad ; i++)
  	  {
  		  if 	(numeros [i] == -1)
  		  {
  			  	  index = i;
  			  	  break;
  		  }
  	  }
  return index;
  }
// Flotantes:
/**
 * @fn int FindFreeSpaceFloat (float[], int)
 * @brief Busca espacios libres en arrays float inicializadas en -1.
 * 
 * @param numeros: Array donde se buscara el espacio libre.
 * @param cantidad: Cantidad de elementos del array.
 * @return Retorna el indice encontrado y si no lo encuentra retorna: -1
 */
  int FindFreeSpaceFloat (float numeros [], int cantidad)
  {
  int i;
  int index;

  index = -1;

  	  for (i = 0 ; i < cantidad ; i++)
  	  {
  		  if 	(numeros [i] == -1)
  		  {
  			  	  index = i;
  			  	  break;
  		  }
  	  }
  return index;
  }
/**
 * @fn int GoThroughDigits(char[], int)
 * @brief Avanza siempre y cuando exista un digito.
 *
 * @param str: variable a analizar.
 * @param i: cantidad de posiciones del array.
 * @return Retorna la posicion final donde no queden mas digitos por delante.
 */
int GoThroughDigits(char str[], int i)
{
    while(isdigit(str[i]))
    {
        i++;
    }
    return i;
}
/**
 * @fn int GoThroughSpaces(char[], int)
 * @brief Avanza siempre y cuando exista un espacio.
 *
 * @param str: variable a analizar.
 * @param i: cantidad de posiciones del array.
 * @return Retorna la posicion final donde no queden mas espacios por delante.
 */
int GoThroughSpaces(char str[], int i)
{
    while(isspace(str[i]))
    {
        i++;
    }
    return i;
}
/**
 * @fn int IsReal(char[])
 * @brief Recibe una cadena de caracteres y verifica que cumpla los requisitos para ser de tipo decimal o entero.
 *
 * @param str: array a analizar.
 * @return Retorna 1: Si cumple los requisitos. Retorna 0: Si no los cumple.
 */
int IsReal(char str[])
{
    int resultado;

    resultado = 0; // supone inicialmente que el resultado no será exitoso
    // avanza descartando espacios iniciales
    int i = GoThroughSpaces(str , 0);

	if(str[i] == '-' || str[i] == '+')
	{    // si se detiene en un signo
        i++;    // avanza al caracter siguiente
	}
    if(isdigit(str[i]))
    {                   // si se detiene en un dígito
        i++;    // avanza al caracter siguiente
        i = GoThroughDigits(str, i);

        if(isspace(str[i]))
        {   // si se detiene en un espacio busca llegar al final
            // avanza descartando espacios finales
            i = GoThroughSpaces(str, i);
        }
        // el resultado es exitoso si llegó al final sin otros caracteres
        resultado = str[i] == '\0';
    }
    if(str[i] == '.')
    {                 // si se detiene en un punto
        i++;
        // avanza al carácter siguiente
        if(isdigit(str[i]))
        {   // el caracter siguiente debe ser un dígito
            i = GoThroughDigits(str, i);
            // avanza descartando espacios finales
            i = GoThroughSpaces(str, i);
            // el resultado es exitoso si llegó al final sin otros caracteres
            resultado = str[i] == '\0';
        }
    }
    return resultado;
}
/**
 * @fn int IsInt(char[])
 * @brief Recibe una cadena de caracteres y verifica que cumpla los requisitos para ser de tipo entero.
 *
 * @param str: array a analizar.
 * @return Retorna 1: Si cumple los requisitos. Retorna 0: Si no los cumple.
 */
int IsInt(char str[])
{
    int resultado;
    int i;

    resultado = 0; // supone inicialmente que el resultado no será exitoso
    // avanza descartando los espacios iniciales
    i = GoThroughSpaces(str , 0);

    if(str[i] == '-' || str[i] == '+')
    {    // si se detiene en un signo
        i++;    // avanza al carácter siguiente
    }
	if(isdigit(str[i]))
	{   // el caracter siguiente debe ser un dígito
		i = GoThroughDigits(str, i);
		// avanza descartando espacios finales
		i = GoThroughSpaces(str, i);
		// el resultado es exitoso si llegó al final sin otros caracteres
		resultado = str[i] == '\0';
	}
    return resultado;
}
