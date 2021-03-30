#include <stdio.h>
#include <stdlib.h>
#include "Validaciones.h"
#include "Conversion.h"

/**
 * @fn float ConvertirAFahrenheit(float)
 * @brief Recibe un número flotante en grados Celsius y lo convierte a Fahrenheit.
 *
 * @param temperatura: número flotante en grados Celsius a convertir.
 * @return Retorna la conversión en grados Fahrenheit de tipo float.
 */
float ConvertirAFahrenheit (float temperatura)
{
	float resultado;

	resultado = temperatura * 1.8 + 32;

	return resultado;
}
/**
 * @fn float ConvertirACelsius(float)
 * @brief Recibe un número flotante en grados Fahrenheit y lo convierte a Celsius.
 *
 * @param temperatura: número flotante en grados Fahrenheit a convertir.
 * @return Retorna la conversión en grados Celsius de tipo float.
 */
float ConvertirACelsius (float temperatura)
{
	float resultado;

	resultado = (temperatura - 32) / 1.8;

	return resultado;
}


