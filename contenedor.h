#ifndef CONTENEDOR_H
#define CONTENEDOR_H

// Definimos la estructura del contenedor
typedef struct {
    char codigo[20];      // Código único alfanumérico
    float peso;           // Peso en toneladas
    char tipo[50];        // Tipo de mercancía
    int bahia;            // Bahía de asignación
} Contenedor;

// Prototipos de funciones
void registrarContenedor(Contenedor *c);
void mostrarContenedor(Contenedor c);
void listarContenedores(Contenedor *lista, int cantidad);

#endif
