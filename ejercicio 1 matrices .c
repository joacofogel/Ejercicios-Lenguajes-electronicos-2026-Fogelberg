#include <stdio.h>

int main() {
    int matriz[3][2][2];
    int i, j, k;

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("Ingrese el valor para [%d][%d][%d]: ", i, j, k);
                scanf("%d", &matriz[i][j][k]);
            }
        }
    }

    
    printf("\nContenido de la matriz:\n");
    for (i = 0; i < 3; i++) {
        printf("Fila %d:\n", i);
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d\t", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
