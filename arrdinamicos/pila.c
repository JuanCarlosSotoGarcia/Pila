#include "pila.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    Dato *datos; 
    int cima;    
    int len;    
} Pila;

Pila vacia(int tam) {
    Pila p;
p.len=len;
    p.datos = (Dato *)malloc(sizeof(Dato)*p.len);
    p.cima = -1;
    p.len = tam; 
    return p;
}

bool es_vacia(Pila p) {
    return p.cima == -1; 
}

void apilar(Pila *p, Dato d) {
    if(p->cima < p->len - 1) {
        p->cima++;
        p->datos[p->cima] = d;
        return;
       }
        printf("La pila está llena\n");
    
}

void desapilar(Pila *p) {
    if(p->cima != -1) {
        p->cima--; 
    } else{
        printf("La pila está vacía\n");
    }
}

Dato cima(Pila p) {
    if(!es_vacia(p)) {
        return p.datos[p.cima]; 
    }
    
    printf("La pila está vacía\n");
    return (Dato){0};
}

void print_pila(Pila p) {
    if(es_vacia(p)) {
        printf("La pila está vacía\n");
        return;
    }
    
    printf("[ ");
    for(int i = 0; i <= p.cima; i++) {
        print_dato(p.datos[i]);
        if(i < p.cima) {
            printf(", "); 
        }
    }
    printf("]\n");
}

void liberar_pila(Pila *p) {
    free(p->datos); 
    p->cima = -1;   
    p->len = 0;     
}
