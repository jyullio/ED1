#include "lista.h"
#include <string.h>
#include <stdio.h>

//inicializa comprimento da lista como 0(zero)
void lista_inicializar(struct lista_cfg *lista){
	
	lista -> cur_len_data = 0;
	
}

//retorna verdadeiro se a lista estiver cheia, caso contrário retornar falso
int lista_esta_cheia(struct lista_cfg *lista){
	
	if(lista -> cur_len_data == MAX){
		return 1; //verdadeiro
	}
	
	return 0; //falso
	
}

//retorna verdadeiro se a lista estiver vazia, caso contrário retornar falso
int lista_esta_vazia(struct lista_cfg *lista){
	
	int len_lista = lista -> cur_len_data;
	
	if(len_lista == 0){
		return 1; //verdadeiro
	}
	
	return 0; //falso
	
}




//insere elemento na lista, retornar verdadeiro se conseguiu inserir, caso contrário retorna falso
int lista_insere_elemento(struct lista_cfg *lista , int elem_to_add){
	
	
	if(lista_esta_cheia(lista) == 1){
		return 0; //falso
	}
		
	lista -> data[lista -> cur_len_data] = elem_to_add;
	lista -> cur_len_data += 1;
	
	return 1; //verdadeiro
		
}

//remove elemento na lista, retornar verdadeiro se conseguiu remover, caso contrário retorna falso
int lista_remover_elemento(struct lista_cfg *lista , int elem_to_remove){
	
	if(lista_esta_vazia(lista)){
		printf("Nao posso remover elementos de uma lista vazia");
		return 0; //falso
	
	}
	
	
	int i;
	int qtd_elem_to_move;
	for(i = 0 ; i < lista -> cur_len_data ; i++){
		if (lista -> data[i] == elem_to_remove){
		
			qtd_elem_to_move = sizeof(int) * (lista -> cur_len_data - i - 1);
			memmove(lista -> data + i , lista -> data + i + 1 , qtd_elem_to_move); //movendo elementos que estão na frente daquele elemento que vai ser removido, "1 casa" para trás
			lista -> cur_len_data -= 1;
            break;
		}
	}
	
	
	return 1; //verdadeiro
}

//imprime lista no terminal
void lista_print(struct lista_cfg lista){
	
	int i;
	printf("\n*****************************\n");
	printf("Lista:");
	for(i = 0 ; i < lista.cur_len_data ; i++){
		printf("\nlista[%d] = %d\n" , i , lista.data[i]);
	}
	printf("\n*****************************\n");
	
}
