

#ifndef PRODUCT_H_
#define PRODUCT_H_

#define EEUU 1
#define CHINA 2
#define OTRO 3

#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4
#define MAX_TIPOS 4

#define MAX_PRODUCTO 10 // cantidad arbitraria

typedef struct
{
    int idProducto;
    char descripcion [30];
    int nacionalidad;
    int tipo;
    float precio;
}eProducto;

#endif
