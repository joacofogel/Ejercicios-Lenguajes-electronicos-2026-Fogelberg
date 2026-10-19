#include <stdio.h>
int valor;
int main()
{
    int i;
    int vector[5]= {0};
    do {
    printf("ingrese el vector de desea modificar(del 0 al 4) e ingrese cualquier otro valor para no editar ninguno\n");
    scanf("%d",&i);
    if(i>=0 && i<5){
        printf("que valor desea asignarle al vector?\n");
        scanf("%d",& valor);
        vector[i]=valor;}
        printf("vector1:%d\n vector2:%d\n vector3:%d\n vector4:%d\n vector5:%d\n", vector[0],vector[1],vector[2],vector[3],vector[4]);
    } while(i>=0 && i<5);
    return 0;
}
