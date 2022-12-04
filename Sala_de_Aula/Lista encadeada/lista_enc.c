#include <stdlib.h>
#include <stdio.h>
#include "lista_enc.h"

void inicializar_lista(struct node **lista){

    *lista = NULL;

}

bool lista_esta_vazia(struct node *lista){

    if(lista == NULL)
        return true;

    return false;


}

int lista_insere_elemento(struct node **lista , int new_data){

    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)
        return 0;

    new_node -> data = new_data;
    new_node -> prox = *lista;
    *lista = new_node;
    
    return 1;
}

void lista_print(struct node *lista){

    printf("\n**********************\n");
    printf("Lista: ");
    while(lista != NULL){
        
        printf("\n%d\n" , lista -> data);

        lista = lista -> prox;
    }
    printf("\n**********************\n");
}

