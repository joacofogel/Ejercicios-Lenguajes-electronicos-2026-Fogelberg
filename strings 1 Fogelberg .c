//basado en el ejercicio 3 se vectores
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int dato [5];
int indice;
char opcion [5];   

int main()
{
    for ( int i=0;i<5;i++)
    {
        printf("Imprima los valores en los 5 espacios de los vectores: ") ;
        scanf("%d",&dato[i]);
    }

    for (int x=0;x<5;x++)
    {
        printf( "\n Los datos de tu vector son:%d", dato[x]) ;
    }

    do
    {
        printf("\n\n¿A que posicion del vector desea acceder? (0 a 4): ");
         scanf("%d",&indice);

        if(indice>=0 && indice<5) {
            printf(" El dato en la posicion %d es: %d\n", indice, dato[indice]) ;
        }
         else
        {
            printf(" Posicion invalida, ingrese un numero entre 0 y 4\n");  }

    
         printf( "\nIngrese si para consultar otro dato y no para finalizar el programa ");
        scanf("%s",opcion );
        if(strcmp(opcion, "si") != 0){
            printf("\nusted finalizo el programa") ;
        }else {
            printf ("\nUsted escribió: %s", opcion);
        }  }while(strcmp(opcion, "si") == 0);  

    return 0;
}
