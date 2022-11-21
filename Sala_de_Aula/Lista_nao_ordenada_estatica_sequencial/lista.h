#ifndef LISTA_H_
#define LISTA_H_

#define MAX 10

struct lista_cfg{
	
	int data[MAX];
	int cur_len_data;
	
};


void inicializar_lista(struct lista_cfg *lista);

int lista_esta_vazia(struct lista_cfg *lista);

int lista_esta_cheia(struct lista_cfg *lista);

void insere_elemento(struct lista_cfg *lista , int elem_to_add);

void remover_elemento(struct lista_cfg *lista , int elem_to_remove);

void print_lista(struct lista_cfg lista);

#endif
