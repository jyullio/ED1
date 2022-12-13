#ifndef FILA_H
#define FILA_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_LEN_FILA 3

struct node{
    int data;
    struct node *next;
};

struct fila_cfg{

    int cur_len_fila;
    struct node *primeiro_node;
    struct node *ultimo_node;
};

void fila_inicializar(struct fila_cfg *fila);

bool fila_esta_vazia(struct fila_cfg *fila);

bool fila_esta_cheia(struct fila_cfg *fila);

int fila_inserir_elemento(struct fila_cfg *fila , int elem_to_add);

int fila_remover_elemento(struct fila_cfg *fila);

void fila_print(struct fila_cfg *fila);

void fila_free(struct fila_cfg *fila);



#endif