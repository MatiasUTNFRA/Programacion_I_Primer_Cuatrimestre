#include <string.h>
#include "product.h"

void BubbleSortByPrice(eProducto productos[], int tam)
{
    int i, j;
    for(i = 0; i < tam-1; i++)
    {
        if(productos[i].idProducto >= 0)
        {
            for(j = i+1; j < tam; j++)
            {
                if(productos[j].idProducto >= 0)
                {
                    if(productos[j].precio < productos[i].precio)
                    {
                        eProducto aux = productos[i];
                        productos[i] = productos[j];
                        productos[j] = aux;
                    }
                }
            }
        }
    }
}
void BubbleSortByDescription(eProducto productos[], int tam)
{
    int i, j;
    for(i = 0; i < tam-1; i++)
    {
        if(productos[i].idProducto >= 0)
        {
            for(j = i+1; j < tam; j++)
            {
                if(productos[j].idProducto >= 0)
                {
                    /*
                    si la descripción del elemento en [j]
                    es alfabéticamente anterior
                    a la descripción del elemento anterior en [i]
                    entonces están fuera de orden y es necesario intercambiarlos
                    */
                    if(strcmp(productos[j].descripcion, productos[i].descripcion) < 0)
                    {
                        eProducto aux = productos[i];
                        productos[i] = productos[j];
                        productos[j] = aux;
                    }
                }
            }
        }
    }
}

