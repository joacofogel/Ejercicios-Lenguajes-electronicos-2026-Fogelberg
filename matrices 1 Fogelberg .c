//matriz realizada de 4x3 en lugar de 3x2
#include <stdio.h>

int main()
{
    int matriz[4][3];
    int i,j;
    
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
                printf("\nEscriba el valor en [%d][%d]: ",i,j);
                scanf("%d",&matriz[i][j]);
        }
    }
    return 0;
}
