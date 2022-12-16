#ifndef FILA_H
#define FILA_H

#define MAX 5

#include <stdbool.h>
#include <stdio.h>

struct fila{

    int vetor[MAX];
    int inicio;
    int fim;

};

typedef struct fila FILA;

void inicializar_fila(FILA *fila);

bool fila_esta_vazia(FILA *fila);

bool fila_esta_cheia(FILA *fila);

int fila_inserir_elemento(FILA *fila , int elem);

int fila_remover_elemento(FILA *fila);

void imprimir_fila(FILA *fila);

#endif