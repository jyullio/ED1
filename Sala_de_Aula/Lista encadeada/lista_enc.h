#ifndef LISTA_ENC_H
#define LISTA_ENC_H

#include <stdbool.h>

struct node{

    int data;
    struct node *prox;

};

void inicializar_lista(struct node **lista);

bool lista_esta_vazia(struct node *lista);

int lista_insere_elemento(struct node **lista , int new_data);

void lista_print(struct node *lista);

#endif