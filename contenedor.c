#include "contenedor.h"
#include <stdio.h>
#include <string.h>

// Registrar un nuevo contenedor usando apuntador
void registrarContenedor(Contenedor *c) {
    printf("Código único: ");
    scanf("%s", c->codigo);
    
    printf("Peso en toneladas: ");
    scanf("%f", &c->peso);
    
    printf("Tipo de mercancía: ");
    scanf(" %[^\n]", c->tipo);
    
    printf("Bahía de asignación: ");
    scanf("%d", &c->bahia);
}

// Mostrar un solo contenedor
void mostrarContenedor(Contenedor c) {
    printf("Código: %s | Peso: %.2f ton | Tipo: %s | Bahía: %d\n",
           c.codigo, c.peso, c.tipo, c.bahia);
}

// Listar todos los contenedores
void listarContenedores(Contenedor *lista, int cantidad) {
    printf("\n=== LISTA DE CONTENEDORES ===\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%d. ", i + 1);
        mostrarContenedor(lista[i]);
    }
}
