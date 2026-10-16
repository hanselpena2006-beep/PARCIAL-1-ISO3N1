#include "ordenamiento.h"
#include <stdio.h>
#include <string.h>

// Función auxiliar para intercambiar dos contenedores
void intercambiar(Contenedor *a, Contenedor *b) {
    Contenedor temp = *a;
    *a = *b;
    *b = temp;
}

// ===== MÉTODO 1: BURBUJA =====
void bubbleSort(Contenedor *arreglo, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j].peso > arreglo[j + 1].peso) {
                intercambiar(&arreglo[j], &arreglo[j + 1]);
            }
        }
    }
    printf("✅ Ordenado con BURBUJA (de menor a mayor peso)\n");
}

// ===== MÉTODO 2: SELECCIÓN =====
void selectionSort(Contenedor *arreglo, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minimo = i;
        for (int j = i + 1; j < n; j++) {
            if (arreglo[j].peso < arreglo[minimo].peso) {
                minimo = j;
            }
        }
        intercambiar(&arreglo[i], &arreglo[minimo]);
    }
    printf("✅ Ordenado con SELECCIÓN (de menor a mayor peso)\n");
}

// ===== MÉTODO 3: INSERCIÓN =====
void insertionSort(Contenedor *arreglo, int n) {
    for (int i = 1; i < n; i++) {
        Contenedor clave = arreglo[i];
        int j = i - 1;
        while (j >= 0 && arreglo[j].peso > clave.peso) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        arreglo[j + 1] = clave;
    }
    printf("✅ Ordenado con INSERCIÓN (de menor a mayor peso)\n");
}
