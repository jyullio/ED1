#include "lista.h"
#include <string.h>
#include <stdio.h>

void inicializar_lista(struct lista_cfg *lista){
	
	lista -> cur_len_data = 0;
	
}

int lista_esta_cheia(struct lista_cfg *lista){
	
	int len_lista = lista -> cur_len_data;
	
	if(len_lista == MAX){
		return 1;
	}
	
	return 0;
	
}

int lista_esta_vazia(struct lista_cfg *lista){
	
	int len_lista = lista -> cur_len_data;
	
	if(len_lista == 0){
		return 1;
	}
	
	return 0;
	
}





void insere_elemento(struct lista_cfg *lista , int elem_to_add){
	
	int len_lista = lista -> cur_len_data;
	
	if(lista_esta_cheia(lista) == 1){
		printf("\nLista esta cheia, nao posso inserir elem.\n");
		return;
	}
		
	lista -> data[len_lista] = elem_to_add;
	lista -> cur_len_data += 1;
	
	
		
}


void remover_elemento(struct lista_cfg *lista , int elem_to_remove){
	
	if(lista_esta_vazia(lista)){
		printf("Nao posso remover elementos de uma lista vazia");
		return;
	
	}
	
	
	int i;
	int qtd_elem_to_move;
	for(i = 0 ; i < lista -> cur_len_data ; i++){
		if (lista -> data[i] == elem_to_remove){
		
			qtd_elem_to_move = sizeof(int) * (lista -> cur_len_data - i - 1);
			memmove(lista -> data + i , lista -> data + i + 1 , qtd_elem_to_move);
			lista -> cur_len_data -= 1;
		}
	}
	
	
	
}


void print_lista(struct lista_cfg lista){
	
	int i;
	printf("\n*****************************\n");
	printf("Lista:");
	for(i = 0 ; i < lista.cur_len_data ; i++){
		printf("\nlista[%d] = %d\n" , i , lista.data[i]);
	}
	printf("\n*****************************\n");
	
}




