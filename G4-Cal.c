#include <stdio.h>
#include <stdlib.h>

void suma();
void resta();
void multiplicacion();
void Division();

int main() {
    int opcion;
    do {
        printf("\nCalculadora Basica\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: suma(); break;
            case 2: resta(); break;
            case 3: multiplicacion(); break;
            case 4: division(); break;
            case 5: printf("Saliendo...\n"); break;
            default: printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while(opcion != 5);

    return 0;
}

int suma() {
    int a,b,resultado;
    printf("Introduce a");
    scanf("%d",&a);
    printf("Introduce b");
    scanf("%d",&b);
    resultado = a + b;
    printf("El resultado es %d\n", resultado);
    return 1;
}


