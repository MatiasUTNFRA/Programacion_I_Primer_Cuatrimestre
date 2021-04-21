#include "product.h"
#include "InputOutput.h"
#include <stdio.h>

float MostExpensive(eProducto productos[], int tam)
{
    float maxPrecio;
    int pos;

    pos = FirstProduct(productos, tam);

    if(pos < 0 )
    {
        maxPrecio = -1; /* valor indicativo de error */
    }
    else
    {
        maxPrecio = productos[pos].precio;

        while(pos < tam)
        {
            /* si el producto existe y su precio es mayor */
            if(productos[pos].idProducto >= 0 && productos[pos].precio > maxPrecio)
            {
                maxPrecio = productos[pos].precio;
            }
            pos++;
        }
    }
    return maxPrecio;
}
void AverageByType(eProducto productos[], int tam)
{
    float precio[MAX_TIPOS] = { 0 };    /* acumuladores de precios para cada tipo */
    int cant[MAX_TIPOS] = { 0 };        /* contadores para cada tipo */
    int i;
    int tipo;

    for(i = 0; i < tam; i++)
    {
        if(productos[i].idProducto >= 0)
        {
            tipo = productos[i].tipo - 1;
            precio[tipo] += productos[i].precio;
            cant[tipo]++;
        }
    }
    for(i = 0; i < MAX_TIPOS; i++)
    {
        if(cant[i] > 0)
        {
            printf("Producto: %d\tprecio promedio: %.2f\n", i+1, precio[i]/cant[i]);
        }
        else
        {
            printf("No hay existencias del producto %d\n", i+1);
        }
    }
}
