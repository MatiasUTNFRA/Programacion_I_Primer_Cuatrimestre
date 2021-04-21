
#ifndef INGRESODEVALORES_H_
#define INGRESODEVALORES_H_

int GetInt(char mensaje []);
float GetFloat(char mensaje []);
void InitNumbersZero (int numeros [], int cantidad);
void GetIntsRandom (int numeros [], int cantidad);
void GetIntsSecuence(int numeros[], int cantidad, char mensaje []);
void GetIntsSecuenceInRange(int numeros [], int cantidad, char mensaje []);
void ShowInts(int numeros[], int cantidad);
void FindIntVectors (int numeros [], int cantidad, int valor);
void ShowIntsEven(int numeros [], int cantidad);
void ShowIntsPosUneven(int numeros [], int cantidad);

#endif
