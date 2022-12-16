#ifndef PILHA_H
#define PILHA_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_LEN_PILHA 3

struct pilha_cfg{
    int data[MAX_LEN_PILHA];
    int top;
    
};


void pilha_inicializar(struct pilha_cfg *pilha);

bool pilha_esta_vazia(struct pilha_cfg *pilha);

bool pilha_esta_cheia(struct pilha_cfg *pilha);

int pilha_push(struct pilha_cfg *pilha , int elem_to_add);

int pilha_pop(struct pilha_cfg *pilha , int *elem);

void pilha_print(struct pilha_cfg *pilha);

int pilha_ler_topo(struct pilha_cfg *pilha , int *elem_no_topo);


#endif