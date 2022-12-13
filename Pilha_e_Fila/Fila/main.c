#include <stdio.h>
#include "fila.h"

int main(int argc, char *argv[]) {
    struct fila_cfg fila;
    int choice,n;
    while(1){

        printf("\n \t Vc deseja: \t \n");
        printf("1)  Inicializar a pilha. \n");
        printf("2)  Verificar se pilha eh vazia. \n");
        printf("3)  Verificar se pilha eh cheia. \n");
        printf("4)  Inserir elemento. \n");
        printf("5)  Remover elemento. \n");
        printf("6)  Imprimir a pilha. \n");
        printf("7)  Sair \n\n");
        printf("\nDigite a opcao desejada: ");
        
        scanf("%d",&choice);

        switch(choice){
            case 1:
            
                fila_inicializar(&fila);
                printf("\n Pilha inicializada!\n");
                break;
            
            case 2:
            
                if(fila_esta_vazia(&fila))
                    printf("\n A pilha eh vazia!\n");
                else
                    printf("\n A pilha nao eh vazia.\n");
                break;
            
            case 3:
            
                if(fila_esta_cheia(&fila))
                    printf("\n A pilha eh cheia!\n");
                else
                    printf("\n A pilha nao eh cheia.\n");
                break;
            
            case 4:
            
                printf("\n Digite o numero que voce deseja inserir na pilha: ");
                scanf("%d",&n);

                if (fila_inserir_elemento(&fila , n))
                    printf("\n Elemento inserido com sucesso!\n");
                else
                    printf("\n Nao foi possivel inserir o elemento.\n");
                break;
            
            case 5:
            
                if (fila_remover_elemento(&fila))
                    printf("\n Elemento removido com sucesso!\n");
                else
                    printf("\n Nao foi possivel remover o elemento.\n");
                break;
            
            case 6:
            
                fila_print(&fila);
                break;
            
            case 7:
            
                printf("\n \t TCHAU! \n \n ");
                fila_free(&fila);
                return 1;
                
            
            default: printf("\n Opcao inexistente\n");
        }
    }
}