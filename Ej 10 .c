#include <stdio.h>

int main()
{
    int tabla[4][4] = {
        {0, 0, 0, 0},
        {0, 1, 0, 1},
        {1, 0, 0, 1},
        {1, 1, 1, 1}
    };

    printf("Tabla de verdad AND y OR\n\n");

    printf("A\tB\tAND\tOR\n");

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d\t", tabla[i][j]);
        }

        printf("\n");
    }
    return 0;
}
