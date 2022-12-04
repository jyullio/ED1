#include <stdio.h>
#include "lista_enc.h"

int main(){

    struct node *lista;

    inicializar_lista(&lista);

    lista_insere_elemento(&lista , 11);
    lista_insere_elemento(&lista , 20);
    lista_insere_elemento(&lista , 5);
    lista_insere_elemento(&lista , 100);


    lista_print(lista);

    return 0;
}