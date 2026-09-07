#include <stdio.h>

int dato[5];
int indice;
char opcion;

int main()
{
    for(int i=0;i<5;i++)
    {
        printf("Imprima los valores en los 5 espacios de los vectores: ");
        scanf("%d",&dato[i]);
    }

    for(int x=0;x<5;x++)
    {
        printf("\n Los datos de tu vector son:%d", dato[x]);
    }

    do
    {
        printf("\n\n¿A que posicion del vector desea acceder? (0 a 4): ");
        scanf("%d",&indice);

        if(indice>=0 && indice<5)
        {
            printf("El dato en la posicion %d es: %d\n", indice, dato[indice]);
        }
        else
        {
            printf("Posicion invalida, ingrese un numero entre 0 y 4\n");
        }

        printf("¿Desea consultar otro dato? (s/n): ");
        scanf(" %c",&opcion);

    }while(opcion=='s' || opcion=='S');

    printf("\nEl usuario ha indicado que termino el programa.\n");

    return 0;
}
