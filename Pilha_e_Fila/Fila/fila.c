#include "fila.h"

void inicializar_fila(FILA *fila){
    
    fila -> inicio = MAX - 1;
    fila -> fim = MAX - 1;
}

bool fila_esta_vazia(FILA *fila){

    if(fila -> inicio ==  fila -> fim)
        return true;
    
    return false;

}

bool fila_esta_cheia(FILA *fila){

    int fim_atual = fila -> fim;

    fim_atual++;
    if(fim_atual == MAX)
        fim_atual = 0;

    if(fim_atual == fila -> inicio)
        return true;

    return false;
}

int fila_inserir_elemento(FILA *fila , int elem){

    if(fila_esta_cheia(fila))
        return 0;
    
    fila -> fim ++;
    if(fila -> fim == MAX)
        fila -> fim = 0;

    fila -> vetor[fila -> fim] = elem;

    return 1;
}

int fila_remover_elemento(FILA *fila){

    if(fila_esta_vazia(fila))
        return 0;
    
    fila -> inicio ++;
    if(fila -> inicio == MAX)
        fila -> inicio = 0;

    return 1;

}

void imprimir_fila(FILA *fila){

    int inicio_atual = fila -> inicio;
    
    printf("\n************************\n");
    printf("Fila: ");
    while(inicio_atual != fila -> fim){
        
        inicio_atual ++;
        if(inicio_atual == MAX)
            inicio_atual = 0;
        
        printf(" %d " , fila -> vetor[inicio_atual]);
        
    }
    printf("\n************************\n");
    

}


