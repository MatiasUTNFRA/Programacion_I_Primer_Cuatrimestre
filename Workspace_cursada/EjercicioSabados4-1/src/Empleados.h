

#ifndef EMPLEADOS_H_
#define EMPLEADOS_H_

#define PROGRAMADOR 1
#define ANALISTA 2
#define TESTER 3
#define MAX_PUESTO 3

#define MAX_EMPLEADOS 5

typedef struct
{
    int idEmpleado;
    char nombre[30];
    float sueldo;
    int puesto;

}eEmpleado;

#endif
