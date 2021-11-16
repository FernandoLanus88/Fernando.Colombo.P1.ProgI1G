#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;


void actualizarRecuperados(ePais* lista, int recuperados);
int invertirCadena(char cadena[]);
int ordenarCaracteres(char cadena2[]);


int main()
{



   ePais lista;
   int cantidad;
   printf("Ingrese nombre del pais: ");
   gets(lista.nombre);
   actualizarRecuperados(&lista, 500);
   printf("%s\n", lista.nombre);
   printf("%d\n", lista.recuperados);
   for(int i =0; i <3; i++)
   {
   printf("Ingrese cantidad de recuperados del dia: ");
   scanf("%d", &cantidad);
   actualizarRecuperados(&lista, cantidad);
   printf("%s\n", lista.nombre);
   printf("%d\n", lista.recuperados);
   }




   char cadena[20] = "UTN-FRA";
   puts(cadena);
   invertirCadena(cadena);
   puts(cadena);



   char cadena2[20] = "algoritmo";
   puts(cadena2);
   ordenarCaracteres(cadena2);
   puts(cadena2);







    return 0;
}


void actualizarRecuperados(ePais* lista, int recuperados)
{
    int acumulador=0;
    acumulador = recuperados;

    if(lista != NULL)
    {
        lista->recuperados = lista->recuperados + acumulador;
    }
}


int invertirCadena(char cadena[])
{
    int todoOk = 0;
    char auxCadena[20];

    if(cadena != NULL )
    {
        for(int i = 0; i < strlen(cadena) -1; i++)
        {
            for(int j = i+1; j < strlen(cadena) ; j++)
            {
                    auxCadena[i] = cadena[i];
                    cadena[i] = cadena[j];
                    cadena[j] = auxCadena[i];
            }
        }
        todoOk = 1;
    }
    return todoOk;
}



int ordenarCaracteres(char cadena2[])
{
    int todoOk = 0;
    char auxCadena[20];

    if(cadena2 != NULL )
    {
        for(int i = 0; i < strlen(cadena2) -1; i++)
        {
            for(int j = i+1; j < strlen(cadena2) ; j++)
            {
                if(cadena2[i] > cadena2[j])
                {
                    auxCadena[i] = cadena2[i];
                    cadena2[i] = cadena2[j];
                    cadena2[j] = auxCadena[i];
                }
            }
        }
        todoOk = 1;
    }
    return todoOk;
}
