
#ifndef INPUTOUTPUT_H_
#define INPUTOUTPUT_H_
#include "product.h"

/* códigos de resultados de operaciones */
#define EXITO 0
#define CANCELADO 1
#define DUPLICADO 2
#define SIN_ESPACIO 3
#define INEXISTENTE 4

void InitNumbers (eProducto productos [], int cantidad);
void GetStrings (char cadena [], int cantidad, char mensaje []);
int GetInt();
double GetReal();
int GetNumber(int min, int max);
int FindFreeSpaceInt (eProducto productos[], int tam);
int FindValue(eProducto productos[], int tam, int id);
void ShowValueList(eProducto p);
int AddValue(eProducto productos[], int tam);
int RemoveValue(eProducto productos[], int tam);
int ModifyValue(eProducto productos[], int tam);
void ShowAllValuesList(eProducto productos[], int tam);
void PriceList(eProducto productos[], int tam, float precio);
void BubbleSortByPrice(eProducto productos[], int tam);
void BubbleSortByDescription(eProducto productos[], int tam);
void ListProductsByPrice(eProducto productos[], int tam);
void ListProductsByDescription(eProducto productos[], int tam);
int FirstProduct(eProducto productos[], int tam);
float MostExpensive(eProducto productos[], int tam);
void ShowMostExpensive(eProducto productos[], int tam);
void AverageByType(eProducto productos[], int tam);
void ReportResults (int resultado);




#endif
