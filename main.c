#include <stdio.h>
#include "contenedor.h"
#include "ordenamiento.h"

#define MAX 100  // Máximo de contenedores

int main() {
    Contenedor patio[MAX];
    int cantidad = 0;
    int opcion;

    printf("========================================\n");
    printf("   SISTEMA DE GESTIÓN - PUERTO BUENAVENTURA\n");
    printf("========================================\n\n");

    do {
        printf("\n=========== MENÚ PRINCIPAL ============\n");
        printf("1. Registrar contenedores\n");
        printf("2. Mostrar lista sin ordenar\n");
        printf("3. Ordenar con BURBUJA\n");
        printf("4. Ordenar con SELECCIÓN\n");
        printf("5. Ordenar con INSERCIÓN\n");
        printf("6. Salir\n");
        printf("========================================\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\n¿Cuántos contenedores desea registrar? ");
                scanf("%d", &cantidad);
                for (int i = 0; i < cantidad; i++) {
                    printf("\n--- Contenedor %d ---\n", i + 1);
                    registrarContenedor(&patio[i]);
                }
                printf("\n✅ Registro completado.\n");
                break;

            case 2:
                if (cantidad == 0)
                    printf("\n⚠️ Primero registre contenedores.\n");
                else
                    listarContenedores(patio, cantidad);
                break;

            case 3:
                if (cantidad == 0)
                    printf("\n⚠️ Primero registre contenedores.\n");
                else {
                    bubbleSort(patio, cantidad);
                    listarContenedores(patio, cantidad);
                }
                break;

            case 4:
                if (cantidad == 0)
                    printf("\n⚠️ Primero registre contenedores.\n");
                else {
                    selectionSort(patio, cantidad);
                    listarContenedores(patio, cantidad);
                }
                break;

            case 5:
                if (cantidad == 0)
                    printf("\n⚠️ Primero registre contenedores.\n");
                else {
                    insertionSort(patio, cantidad);
                    listarContenedores(patio, cantidad);
                }
                break;

            case 6:
                printf("\n👋 Saliendo del sistema...\n");
                break;

            default:
                printf("\n❌ Opción inválida, intente nuevamente.\n");
        }
    } while (opcion != 6);

    return 0;
}
