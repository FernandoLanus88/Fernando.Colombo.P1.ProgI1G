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


//1. Crear una funci�n llamada aplicarAumento que reciba como par�metro el precio de un producto y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main. *

