#include <stdio.h>
#include <stdlib.h>

int invertirCadena();

int main()
{

    char palabra[50];
    char letra1;
    char letra2;
    int contador;

    int invertirCadena();

    setbuf(stdout,NULL);

    printf("Ingrese una palabra \n");
    fflush(stdin);
    scanf("%[^\n]", palabra);

    printf("Ingrese una letra que desea cambiar \n");
    fflush(stdin);
    scanf("%c", &letra1);

    printf("Ingrese una letra \n");
    fflush(stdin);
    scanf("%c", &letra2);


    contador=invertirCadena(palabra, letra1,letra2);
    printf("la cantidad de veces q se cambio una letra es: %d",contador);
    return 0;
}


int invertirCadena(char cadena[], char letraA, char letraB)
{
    int contar;
    int largo;
    int i;

    contar=0;
    largo=strlen(cadena);

    for(i=0;i<largo;i++)
    {
    	if(cadena[i]==letraA)
    	{
    		cadena[i]=letraB;
    		contar++;
    	}
     }

return contar;
}
