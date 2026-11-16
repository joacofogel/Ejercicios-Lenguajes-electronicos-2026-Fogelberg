#include <stdio.h>
int matriz[4][5]={
    {0,0,0,0,0},
    {0,1,0,1,1},
    {1,0,0,1,1},
    {1,1,1,1,0},
};

int main()
{
    int filas = 4;
    int columnas = 5;

    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d \t", matriz[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
