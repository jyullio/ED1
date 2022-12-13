#include "pilha.h"

//inicializa a pilha como vazia
void pilha_inicializar(struct pilha_cfg *pilha){
    pilha -> topo = NULL;
    pilha -> cur_len_pilha = 0;
}

//retorna verdadeiro se a pilha estiver vazia, caso contrário retornar falso
bool pilha_esta_vazia(struct pilha_cfg *pilha){
    
    if(pilha -> cur_len_pilha == 0)
        return true;
    
    return false;
}

//retorna verdadeiro se a pilha estiver cheia, caso contrário retornar falso
bool pilha_esta_cheia(struct pilha_cfg *pilha){

    if(pilha -> cur_len_pilha == MAX_LEN_PILHA)
        return true;

    return false;
}


//insere elemento na pilha, se conseguir inserir retorna 1, caso contrário retorna 0.
int pilha_push(struct pilha_cfg *pilha , int elem_to_add){

    if(pilha_esta_cheia(pilha))
        return 0;
    
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("OVERFLOW , Erro ao alocar mem. para novo node!!!");
        return 0;
    }
    
    new_node -> data = elem_to_add;
    new_node -> next = pilha -> topo;
    pilha -> topo = new_node;
    pilha -> cur_len_pilha++;

    return 1;
}

//remove elemento da pilha, se conseguir remover retorna 1, caso contrário retorna 0
int pilha_pop(struct pilha_cfg *pilha){

    if(pilha_esta_vazia(pilha))
        return 0;

    struct node *node_aux = pilha -> topo;
    pilha -> topo = pilha -> topo -> next;
    free(node_aux);
    pilha -> cur_len_pilha--;

    return 1;
}

//print pilha no terminal
void pilha_print(struct pilha_cfg *pilha){

    struct node *node_aux = pilha -> topo;
    printf("\n**********************\n");
    printf("Pilha");
    while(node_aux != NULL){
        printf(" -> %d" , node_aux -> data);
        node_aux = node_aux -> next;
    }
     printf("\n**********************\n");

}

/*
	armazena através do ponteiro(int *elem_no_topo) o elemento presente no topo da pilha,
	se a lista estiver vazia retorna 0, caso contrário retorna 1
*/
int pilha_ler_topo(struct pilha_cfg *pilha , int *elem_no_topo){

    if(pilha_esta_vazia(pilha))
        return 0;

    *elem_no_topo = pilha -> topo -> data;

    return 1;

}

//liberar mem. utilizada para armazenar a pilha
void pilha_free(struct pilha_cfg *pilha){

    struct node *aux_node = pilha -> topo;
    struct node *node_to_delete;
    while(aux_node != NULL){
        
        node_to_delete = aux_node;
        aux_node = aux_node -> next;
        free(node_to_delete);
    }

}

