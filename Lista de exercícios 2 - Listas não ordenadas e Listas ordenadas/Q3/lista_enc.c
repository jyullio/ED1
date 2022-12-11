#include <stdlib.h>
#include <stdio.h>
#include "lista_enc.h"


//inicializa a lista como vazia
void lista_inicializar(struct node **lista){

    *lista = NULL;

}

//retorna verdadeiro se a lista estiver vazia, caso contrário retornar falso
bool lista_esta_vazia(struct node *lista){

    if(lista == NULL)
        return true;

    return false;


}

//insere elemento no início da lista, se conseguir inserir retornar verdadeiro, caso contrário retornar falso
int lista_insere_elemento(struct node **lista , int data_to_add){

    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)//falha ao reservar mem.
        return 0;

    new_node -> data = data_to_add;
    new_node -> prox = *lista;
    *lista = new_node;
    
    return 1;
    
}

//remove elemento da lista, se conseguir remover retornar verdadeiro, caso contrário retornar falso
int lista_remove_elemento(struct node **lista , int data_to_remove){

    struct node *cur_node = *lista;
    struct node *last_node = NULL;
    while(cur_node != NULL){

        if(cur_node -> data == data_to_remove){

            if(last_node == NULL){//se o elemento que vai ser removido for o primeiro da lista

                (*lista) = (*lista) -> prox;

            }else{//se o elemento que vai ser removido estiver no restante da lista

                last_node -> prox = cur_node -> prox;

            }

            free(cur_node);
            return 1;
        }

        last_node = cur_node;
        cur_node = cur_node -> prox;
    }

    return 0;

}

//retornar o número de elementos na lista
int lista_len(struct node *lista){

    int len = 0;
    while(lista != NULL){
        len++;
        lista = lista -> prox;
    }
    return len;

}

//remove elemento da lista pela posição, se conseguir remover retornar verdadeiro, caso contrário retornar falso
int lista_remove_posicao(struct node **lista , int pos_to_remove){

    int cur_pos = 0;
    struct node *cur_node = *lista;
    struct node *last_node = NULL;
    while(cur_node != NULL){

        if(cur_pos == pos_to_remove){
            printf("\ngrande dia\n");
            if(last_node == NULL){//se o elemento que vai ser removido for o primeiro da lista

                (*lista) = (*lista) -> prox;

            }else{//se o elemento que vai ser removido estiver no restante da lista

                last_node -> prox = cur_node -> prox;

            }

            free(cur_node);
            return 1;
        }

        cur_pos++;
        last_node = cur_node;
        cur_node = cur_node -> prox;
    }

    return 0;

}



//print lista no terminal
void lista_print(struct node *lista){

    printf("\n**********************\n");
    printf("Lista: ");
    while(lista != NULL){
        
        printf("\n%d\n" , lista -> data);

        lista = lista -> prox;
    }
    printf("\n**********************\n");
}

