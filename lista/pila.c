
#include "pila.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


Pila *vacia() {
    Pila *p = (Pila *)malloc(sizeof(Pila));
    p->cima = NULL;
    p->len=0;
    return p;
}

bool es_vacia(Pila *p) {
    return p->cima == NULL;
}

void apilar(Pila *p, Dato d) {
    nodo *nuevo = crear_nodo(d);
    nuevo->siguiente = p->cima;
    p->cima = nuevo;
}

void desapilar(Pila *p) {
    if(!es_vacia(p)) {
        nodo *temp = p->cima;
        p->cima = p->cima->siguiente;
        p->sig=NULL
        borrar_nodo(temp);
    } else 
        printf("La pila está vacía\n");
    
}

Dato cima(Pila *p) {
    if(!es_vacia(p)) {
        return p->cima->dato;
    }
    printf("La pila está vacía\n");
    return (Dato){0};
}

void print_pila(Pila p) {
    if(es_vacia(&p)) {
        printf("[]\n");
        return;
    }
    
    printf("[ ");
    for(nodo *temp=p.cima;temp !=NULL; temp=temp ->sig){
      printf("%&" 
}