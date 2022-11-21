#include "lista.h"
#include <stdio.h>


#define QTD_ELEM_INSERT 7
#define QTD_ELEM_REMOVE 2

int main(){
	
	struct lista_cfg lista;
	
	inicializar_lista(&lista);
	
	int num_to_insert;
	int i;
	for(i = 0 ; i < QTD_ELEM_INSERT ; i++){
		
		printf("Digite um numero para inserir na lista: ");
		scanf("%d", &num_to_insert);
		insere_elemento(&lista , num_to_insert);
		print_lista(lista);
	
	}
	
	
	
	for(i = 0 ; i < QTD_ELEM_REMOVE ; i++){
		
		printf("Digite um numero para remover da lista: ");
		scanf("%d", &num_to_insert);
		remover_elemento(&lista , num_to_insert);
		print_lista(lista);
	
	}
	
	
	return 0;
}
