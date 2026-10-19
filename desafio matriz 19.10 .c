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

    // Imprimir la matriz en formato de tabla
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d \t", matriz[i][j]); // Imprime el elemento y una tabulación
        }
        printf("\n"); // Salto de línea al terminar cada fila
    }

    return 0;
}
