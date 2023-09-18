//
// Created by Usuario on 18/9/2023.
//

#ifndef INVERTIRLISTAS_LISTAS_H
#define INVERTIRLISTAS_LISTAS_H

typedef struct nodo{

    int dato;
    struct nodo * sig;
    struct nodo * ant;

}Nodo;

typedef struct lista{

    Nodo * cabecera;

}Lista;

Nodo * newNodo (int dato);
Lista * newLista ();

void insertar (Lista * lista, Nodo * nodo);//funcion que recibe un nodo para insertar en una lista
void imprimir (Lista * lista);//funcion que recibe una lista para imprimirla
Lista * invertir (Lista * lista);//funcion que recibe una lista y devuelve la misma invertida

#endif //INVERTIRLISTAS_LISTAS_H
