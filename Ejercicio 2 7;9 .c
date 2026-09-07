#include <stdio.h>

int dato[5];
int suma;
float promedio;
int main()
{
    
    for(int i=0;i<5;i++)
    {
        printf("Imprima los valores en los 4 espacios de los vectores: ");
        scanf("%d",&dato[i]);
     suma=suma + dato[i];   
     printf("%d\n",suma);
    }
    for(int x=0;x<5;x++)
    {
        printf("\n Los datos de tu vector son:%d", dato[x]);
    }
    
    
    printf("\n suma de vectores=%d", suma);
   suma = suma/5;
    printf("\n promedio de vectores=%d", suma);
    return 0;
}
