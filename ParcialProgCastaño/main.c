#include <stdio.h>
#include <stdlib.h>

int invertirCadena();

int main()
{
    invertirCadena();
}

int invertirCadena()
{


    char cadena[200];
    int i = 0;
    int j;
    printf("Escribe una cadena de texto: \n");
    gets(cadena);

    printf("\nLa cadena introducida es: %s\n\n", cadena);
    while(cadena[i]!='\0')
    {
        i++;
    }

    printf("Al invertir la cadena queda asi:\n");
    for (j=i-1; j>=0; j--)
    {
        printf("%c", cadena[j]);
    }
    puts("");
    return 0;
}

