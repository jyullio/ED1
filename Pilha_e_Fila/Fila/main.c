#include "fila.h"

int main(){

    FILA fila;
    int escolha;
    int num;

    while(1){

        

        printf("\n**** MENU ****\n");
        printf("1) Inicializar fila\n");
        printf("2) Verificar se fila esta vazia\n");
        printf("3) Verificar se fila esta cheia\n");
        printf("4) Inserir elemento\n");
        printf("5) Remover elemento\n");
        printf("6) Imprimir fila\n");
        printf("7) Sair\n");

        printf("\nDigite sua escolha: ");
        scanf("%d" , &escolha);

        switch (escolha){
            
            case 1:
                inicializar_fila(&fila);
                printf("\nFila inicializada com sucesso!!!\n");
                break;
            
            case 2:
                
                if(fila_esta_vazia(&fila))
                    printf("\nFila esta vazia\n");
                else
                    printf("\nFila N esta vazia\n");
                break;

            case 3:
                 if(fila_esta_cheia(&fila))
                    printf("\nFila esta cheia\n");
                else
                    printf("\nFila N esta cheia\n");
                break;

            case 4:

                printf("\nDigite um numero para inserir na fila: ");
                scanf("%d" , &num);

                if(fila_inserir_elemento(&fila , num))
                    printf("\nElemento inserido com sucesso\n");
                else
                    printf("\nErro ao inserir elemento\n");

                break;

            case 5:
                if(fila_remover_elemento(&fila))
                    printf("\nElemento removido com sucesso\n");
                else
                    printf("\nErro ao remover elemento\n");

                break;

            case 6:
                imprimir_fila(&fila);
                break;

            case 7:
                printf("\nBYE!!!\n\n");
                return 1;
                break;

            default:
                printf("\nEscolha invalido!!!\n");
                break;
        }

    }

    return 0;
}