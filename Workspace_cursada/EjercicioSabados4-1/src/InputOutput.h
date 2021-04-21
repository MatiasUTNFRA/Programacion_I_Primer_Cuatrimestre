
#ifndef INPUTOUTPUT_H_
#define INPUTOUTPUT_H_

#define MAX_EMPLEADOS 5

int GetInt();
double GetReal();
int GetNumber(int min, int max);
void InitNumbers (int numeros [], int cantidad);
void GetIntsSecuence (int numeros[], int cantidad, char mensaje []);
eEmpleado GetEmployee(int last);
int GetEmployees (eEmpleado empleados[], int last);
void GetStrings (char cadena [], int cantidad, char mensaje []);

#endif
