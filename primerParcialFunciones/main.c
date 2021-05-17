#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void actualizarRecuperados(int id, int recuperados);
void invertirCadena(char cadena[]);
void ordenarCaracteres(char cadena[]);

int main()
{
    char cadena1[50]="Hola";
    char cadena2[50]="algoritmo";
    printf("%s\n", cadena1);
    invertirCadena(cadena1);
    printf("%s\n", cadena1);


       printf("%s\n", cadena2);
    ordenarCaracteres(cadena2);
    printf("%s\n", cadena2);
    return 0;
}

void invertirCadena(char cadena[])
{
    char aux;
    int largoCadena=strlen(cadena);
    for(int i=0; i<largoCadena; i++)
        {
            for(int j = i + 1; j < largoCadena; j++)
            {
                aux=cadena[i];
            cadena[i]=cadena[j];
            cadena[j]=aux;
            }

        }
}

void ordenarCaracteres(char cadena[])
{
    char aux;
    int largoCadena=strlen(cadena);
    for(int i=0; i<largoCadena; i++)
        {
            for(int j = i + 1; j < largoCadena; j++)
            {
                if(strcasecmp(cadena[i], cadena[j])<0)
                {
                    aux=cadena[i];
                   cadena[i]=cadena[j];
                   cadena[j]=aux;
                }
            }
        }
}



