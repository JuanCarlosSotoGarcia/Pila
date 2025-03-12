#include "pila.h"
#include <stdio.h>
#include <stdbool.h>

#define TAM 100 // Define el tamaño máximo de la pila

typedef struct {
    Dato datos[TAM];
    int cima;
} Pila;

Pila vacia() {
    Pila p;
    p.cima = -1; // Inicializa la cima en -1 para indicar que la pila está vacía
    return p;
}

bool es_vacia(Pila p) {
    return p.cima == -1; // Retorna verdadero si la pila está vacía
}

void apilar(Pila *p, Dato d) {
    if(p->cima < TAM - 1) {
        p->cima++;
        p->datos[p->cima] = d; // Apila el dato en la posición superior
    } else {
        printf("La pila está llena\n");
    }
}

void desapilar(Pila *p) {
    if(p->cima != -1) {
        p->cima--; // Desapila el dato, moviendo la cima hacia abajo
    } else {
        printf("La pila está vacía\n");
    }
}

Dato cima(Pila p) {
    if(!es_vacia(p)) {
        return p.datos[p.cima]; // Retorna el dato en la cima de la pila
    }
    // Manejo de error, si la pila está vacía
    printf("La pila está vacía\n");
    return (Dato){0}; // Retorna un dato por defecto, asumiendo que Dato es una estructura
}

void print_pila(p) {
        printf("[]\n");
        return;
    }
    
    printf("[ ");
    for(int i = p.cima; i >-1; i++) {
        print("%i ", p.datos[i]);
     
    }
    printf("]\n");
}
