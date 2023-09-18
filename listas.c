//
// Created by Usuario on 18/9/2023.
//

#include "listas.h"
#include "stdio.h"
#include "malloc.h"

Nodo * newNodo (int dato){

    Nodo * aux = NULL;
    aux = malloc(sizeof(Nodo));

    if (aux == NULL){
        printf ("No hay espacio de memoria suficiente");
        exit(-1);
    }
    else {
        aux->dato = dato;
        aux->sig  = NULL;
        aux->ant  = NULL;
    }
    return aux;
}
Lista * newLista () {
    Lista * aux = NULL;
    aux = malloc(sizeof(Lista));

    if (aux == NULL){
        printf ("No hay espacio de memoria suficiente");
        exit(-1);
    }
    else {
        aux->cabecera = NULL;
    }
    return aux;
}

void insertar (Lista * lista, Nodo * nodo) {

      Nodo * aux = lista->cabecera;

      if (aux == NULL){//la lista esta vacia
          lista->cabecera = nodo;//persisto el nodo como cabecera
      }
      else{
          while (aux->sig != NULL){//mientras el siguiente no es nulo
              aux = aux->sig;//recorro la lista
          }
          aux->sig = nodo;//persisto el nodo en el ultimo elemento
      }
}

void imprimir (Lista * lista) {

    Nodo * aux = lista->cabecera;

    for(;aux!=NULL;aux = aux-> sig){
        printf("\t%d\t",aux->dato);
    }
}

Lista * invertir (Lista *lista) {

    Nodo *actual = lista->cabecera;
    Lista *listaInvertida = newLista( );
    Nodo *aux = NULL;

    // Avanzar hasta el último nodo de la lista original
    while (actual->sig != NULL) {
        actual = actual->sig;
    }

    aux = actual;
    listaInvertida->cabecera = aux; // Actualizar la cabecera de la lista invertida
    Nodo *nuevoNodo = newNodo(actual->dato); // Crear un nuevo nodo con el dato de actual
    insertar(listaInvertida, nuevoNodo); // Insertar el nuevo nodo al final de la nueva lista

    while (actual->ant != NULL) {
        actual = actual->ant;
        nuevoNodo = newNodo(actual->dato);
        insertar(listaInvertida, nuevoNodo);
    }

    return listaInvertida;
}