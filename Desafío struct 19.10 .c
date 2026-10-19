#include <stdio.h>

typedef struct niño{
    int edad;
    char curso;
    float nota;
}alumno;

int main()
{
  alumno estudiante1;
 
    printf("Ingrese la edad: ");
    scanf("%d", &estudiante1.edad);

    printf("Ingrese el curso: ");
    scanf(" %c", &estudiante1.curso);

    printf("Ingrese la nota: ");
    scanf("%f", &estudiante1.nota);



    return 0;
}
