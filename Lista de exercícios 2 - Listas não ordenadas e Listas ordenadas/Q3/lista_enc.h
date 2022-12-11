#ifndef LISTA_ENC_H
#define LISTA_ENC_H

#include <stdbool.h>

struct node{

    int data;
    struct node *prox;

};



void lista_inicializar(struct node **lista);

bool lista_esta_vazia(struct node *lista);

int lista_insere_elemento(struct node **lista , int new_data);

int lista_remove_elemento(struct node **lista , int data_to_remove);

int lista_len(struct node *lista);

int lista_remove_posicao(struct node **lista , int pos_to_remove);

void lista_print(struct node *lista);

#endif