#include "fila.h"

//inicializa a fila como vazia
void fila_inicializar(struct fila_cfg *fila){
    fila -> cur_len_fila = 0;
    fila -> primeiro_node = NULL;
    fila -> ultimo_node = NULL;
}

//retorna verdadeiro se a fila estiver vazia, caso contrário retornar falso
bool fila_esta_vazia(struct fila_cfg *fila){

    if(fila -> cur_len_fila == 0)
        return true;

    return false;

}

//retorna verdadeiro se a fila estiver cheia, caso contrário retornar falso
bool fila_esta_cheia(struct fila_cfg *fila){

    if(fila -> cur_len_fila == MAX_LEN_FILA)
        return true;

    return false;

}

//insere elemento na fila, se conseguir inserir retorna 1, caso contrário retorna 0.
int fila_inserir_elemento(struct fila_cfg *fila , int elem_to_add){

    if(fila_esta_cheia(fila))
        return 0;
    
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("OVERFLOW , Erro ao alocar mem. para novo node!!!");
        return 0;
    }
    new_node -> data = elem_to_add;
    new_node -> next = NULL;

    if(fila -> cur_len_fila == 0){//lista está vazia, não tenho o primeiro e nem o último node

        //quando a lista apresenta apenas um elemento, o inicio e o fim "apontam" para o mesmo node
        fila -> primeiro_node = new_node;
        fila -> ultimo_node = new_node;

    }else{

        fila -> ultimo_node -> next = new_node;
        fila -> ultimo_node = new_node;
    
    }

    fila -> cur_len_fila++;

    return 1;
}

//remove elemento da fila, se conseguir remover retorna 1, caso contrário retorna 0
int fila_remover_elemento(struct fila_cfg *fila){

    if(fila_esta_vazia(fila))
        return 0;

    struct node *node_to_delete = fila -> primeiro_node;

    if(fila -> cur_len_fila == 1){//lista contém um elemento, o início e o fim apontam para o mesmo node
    
        free(node_to_delete);
        fila -> primeiro_node = NULL;
        fila -> ultimo_node = NULL;

    }else{

        fila -> primeiro_node = fila -> primeiro_node -> next;
        free(node_to_delete);

    }

    fila -> cur_len_fila--;
    return 1;


}

//print fila no terminal
void fila_print(struct fila_cfg *fila){

    struct node *node_aux = fila -> primeiro_node;
    printf("\n**********************\n");
    printf("Fila");
    while(node_aux != NULL){
        printf(" -> %d" , node_aux -> data);
        node_aux = node_aux -> next;
    }
     printf("\n**********************\n");

}

//liberar mem. utilizada para armazenar a fila
void fila_free(struct fila_cfg *fila){

    struct node *node_aux = fila -> primeiro_node;
    struct node *node_to_delete;
    while(node_aux != NULL){

        node_to_delete = node_aux;
        node_aux = node_aux -> next;
        free(node_to_delete);

    }

}