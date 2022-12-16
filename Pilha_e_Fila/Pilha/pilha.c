#include "pilha.h"

//inicializa a pilha como vazia
void pilha_inicializar(struct pilha_cfg *pilha){
    pilha -> top = -1;
}

//retorna verdadeiro se a pilha estiver vazia, caso contrário retornar falso
bool pilha_esta_vazia(struct pilha_cfg *pilha){
    
    if(pilha -> top == -1)
        return true;
    
    return false;
}

//retorna verdadeiro se a pilha estiver cheia, caso contrário retornar falso
bool pilha_esta_cheia(struct pilha_cfg *pilha){

    if(pilha -> top == MAX_LEN_PILHA - 1)
        return true;

    return false;
}


//insere elemento na pilha, se conseguir inserir retorna 1, caso contrário retorna 0.
int pilha_push(struct pilha_cfg *pilha , int elem_to_add){

    if(pilha_esta_cheia(pilha))
        return 0;
    
    pilha -> top++;
    pilha -> data[pilha -> top] = elem_to_add;
    
    
    return 1;
}

//remove elemento da pilha, se conseguir remover retorna 1, caso contrário retorna 0
int pilha_pop(struct pilha_cfg *pilha , int *elem){

    if(pilha_esta_vazia(pilha))
        return 0;

    *elem = pilha -> data[pilha -> top];
    pilha -> top--;

    return 1;
}

//print pilha no terminal
void pilha_print(struct pilha_cfg *pilha){

    int i;
    printf("\n*****************\n");
    printf("Pilha: ");
    for(i = 0 ; i <= pilha -> top ; i++){
        
        printf(" %d " , pilha -> data[i]);
    }
    printf("\n*****************\n");

}

/*
	armazena através do ponteiro(int *elem_no_topo) o elemento presente no topo da pilha,
	se a lista estiver vazia retorna 0, caso contrário retorna 1
*/
int pilha_ler_topo(struct pilha_cfg *pilha , int *elem){

    if(pilha_esta_vazia(pilha))
        return 0;

    *elem = pilha -> data[pilha -> top];

    return 1;

}

