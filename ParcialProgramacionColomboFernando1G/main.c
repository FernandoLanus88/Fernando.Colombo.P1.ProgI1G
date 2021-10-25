#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int aplicarAumento(int* a);



int main()
{


int precio;



printf("Ingrese el Precio");
scanf("%d", &precio);

aplicarAumento(&precio);



    printf("%d", precio);


    return 0;
}


int aplicarAumento(int* precio)
{
int aumento;
aumento= (float)(*precio *5)/100 ;

*precio = *precio + aumento;



return *precio;
}


//1. Crear una función llamada aplicarAumento que reciba como parámetro el precio de un producto y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main. *

