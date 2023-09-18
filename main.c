//Funcion que recibe por parametro la cabecera de una lista y devuelve una nueva lista invertida

#include <stdio.h>
#include "listas.h"
int main() {
   Lista * listanueva = newLista();

    insertar(listanueva, newNodo(1));
    insertar(listanueva, newNodo(2));
    insertar(listanueva, newNodo(3));

    imprimir(listanueva);

   printf("\n");

    imprimir(invertir(listanueva));

    return 0;
}
