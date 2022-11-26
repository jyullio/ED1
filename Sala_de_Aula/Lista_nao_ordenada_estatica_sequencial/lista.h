#ifndef LISTA_H_
#define LISTA_H_

#define MAX 10

struct lista_cfg{
	
	int data[MAX];
	int cur_len_data;
	
};


void lista_inicializar(struct lista_cfg *lista);

int lista_esta_vazia(struct lista_cfg *lista);

int lista_esta_cheia(struct lista_cfg *lista);

int lista_insere_elemento(struct lista_cfg *lista , int elem_to_add);

int lista_remover_elemento(struct lista_cfg *lista , int elem_to_remove);

void lista_print(struct lista_cfg lista);

#endif