#include <stdio.h>

typedef struct {
    int edad;
    char iniciales[4];     
    char tipoSangre[4];     
    float altura;           
} Paciente;

int main() {
    Paciente p;
    int opcion;

    
    printf("Ingrese la edad: ");
    scanf("%d", &p.edad);

    printf("Ingrese las iniciales (hasta 3 letras): ");
    scanf("%3s", p.iniciales);

    printf("Ingrese el tipo de sangre (ej: A+, O-, AB+): ");
    scanf("%3s", p.tipoSangre);

    printf("Ingrese la altura en metros (ej: 1.75): ");
    scanf("%f", &p.altura);


    do {
        printf("\n--- MENU ---\n");
        printf("1. Imprimir edad\n");
        printf("2. Imprimir iniciales\n");
        printf("3. Imprimir tipo de sangre\n");
        printf("4. Imprimir altura\n");
        printf("5. Imprimir todos los datos\n");
        printf("0. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Edad: %d anios\n", p.edad);
                break;
            case 2:
                printf("Iniciales: %s\n", p.iniciales);
                break;
            case 3:
                printf("Tipo de sangre: %s\n", p.tipoSangre);
                break;
            case 4:
                printf("Altura: %.2f m\n", p.altura);
                break;
            case 5:
                printf("Edad: %d anios\n", p.edad);
                printf("Iniciales: %s\n", p.iniciales);
                printf("Tipo de sangre: %s\n", p.tipoSangre);
                printf("Altura: %.2f m\n", p.altura);
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
    } while (opcion != 0);

    return 0;
}
