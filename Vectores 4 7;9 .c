#include <stdio.h>

int vector1[5];
int vector2[5];
int mayor;
char origen[3]; // "V1" o "V2"

void comparar()
{
    for(int i=0;i<5;i++)
    {
        if(vector1[i] > vector2[i])
        {
            mayor = vector1[i];
            printf("El mayor es %d y pertenece al Vector 1 (posicion %d)\n", mayor, i);
        }
        else if(vector2[i] > vector1[i])
        {
            mayor = vector2[i];
            printf("El mayor es %d y pertenece al Vector 2 (posicion %d)\n", mayor, i);
        }
        else
        {
            printf("Los valores en la posicion %d son iguales: %d\n", i, vector1[i]);
        }
    }
}

int main()
{
    printf("Cargar Vector 1:\n");
    for(int i=0;i<5;i++)
    {
        printf("Ingrese el dato %d: ", i);
        scanf("%d",&vector1[i]);
    }

    printf("\nCargar Vector 2:\n");
    for(int i=0;i<5;i++)
    {
        printf("Ingrese el dato %d: ", i);
        scanf("%d",&vector2[i]);
    }

    printf("\nComparando los vectores:\n");
    comparar();

    return 0;
}
