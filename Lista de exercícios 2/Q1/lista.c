#include "lista.h"
#include <string.h>
#include <stdio.h>

//inicializa comprimento da lista como 0(zero)
void lista_inicializar(struct lista_cfg *lista){
	
	lista -> cur_len_data = 0;
	
}

//retorna verdadeiro se a lista estiver cheia, caso contrário retornar falso
bool lista_esta_cheia(struct lista_cfg *lista){
	
	if(lista -> cur_len_data == MAX)
		return true;
	
	return false;
	
}

//retorna verdadeiro se a lista estiver vazia, caso contrário retornar falso
bool lista_esta_vazia(struct lista_cfg *lista){
	
	int len_lista = lista -> cur_len_data;
	
	if(len_lista == 0)
		return true;
	
	return false;
	
}


//insere elemento na lista, retornar 1 se conseguiu inserir elemento, caso contrário retorna 0
int lista_insere_elemento(struct lista_cfg *lista , int elem_to_add){
	
	
	if(lista_esta_cheia(lista))
		return 0;
		
	lista -> data[lista -> cur_len_data] = elem_to_add;
	lista -> cur_len_data += 1;
	
	return 1;
		
}

//remove elemento na lista, retornar 1 se conseguiu remover, caso contrário retorna 0
int lista_remover_elemento(struct lista_cfg *lista , int elem_to_remove){
	
	if(lista_esta_vazia(lista))
		return 0;
	
	
	int i;
	int qtd_elem_to_move;
	for(i = 0 ; i < lista -> cur_len_data ; i++){

		if (lista -> data[i] == elem_to_remove){
		
			qtd_elem_to_move = sizeof(int) * (lista -> cur_len_data - i - 1);
			memmove(lista -> data + i , lista -> data + i + 1 , qtd_elem_to_move); //mover elementos que estão na FRENTE do elemento que vai ser REMOVIDO, "1 casa" para trás
			lista -> cur_len_data -= 1;
            break;
		}
	}
	
	
	return 1;
}

//retornar a quantidade de elementos presentes da lista
int lista_tamanho(struct lista_cfg *lista){
	return lista -> cur_len_data;
}


/*
	armazena através do ponteiro(int *maior_valor_na_lista) o maior elemento da lista,
	se a lista estiver vazia retorna 0, caso contrário retorna 1
*/
int lista_encontrar_maior_elemento(struct  lista_cfg *lista , int *maior_valor_na_lista){
	
	if(lista_esta_vazia(lista)){
		return 0;
	}

	int i;
	*maior_valor_na_lista = lista -> data[0]; //maior elemento inicial sempre vai ser o primeiro presente na lista
	for(i = 1 ; i < lista -> cur_len_data ; i++){

		if(lista -> data[i] > *maior_valor_na_lista)
			*maior_valor_na_lista = lista -> data[i];
			
	}


	return 1;
}

/*
	remove o elemento específicado presente na posição especifica,
	retornar 0 se a posição estiver fora dos limites da lista, caso contrário retorna 1
*/
int lista_remover_elemento_por_indice(struct lista_cfg *lista , int posicao){

	if(posicao < 0 || posicao > lista -> cur_len_data - 1) //verifica se o usuário digitou uma posição válida para remover o elemento
		return 0;

	int qtd_elem_to_move = sizeof(int) * (lista -> cur_len_data - posicao);
	memmove(lista -> data + posicao , lista -> data + posicao + 1 , qtd_elem_to_move);
	lista -> cur_len_data -= 1;


	return 1;
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
