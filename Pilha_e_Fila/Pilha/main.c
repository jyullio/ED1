#include <stdio.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
    struct pilha_cfg pilha;
    int choice,n;
    int elem_no_topo;
    while(1){

        printf("\n \t Vc deseja: \t \n");
        printf("1)  Inicializar a pilha. \n");
        printf("2)  Verificar se pilha eh vazia. \n");
        printf("3)  Verificar se pilha eh cheia. \n");
        printf("4)  Inserir elemento. \n");
        printf("5)  Remover elemento. \n");
        printf("6)  Imprimir a pilha. \n");
        printf("7)  Ler topo. \n");
        printf("8)  Sair \n\n");
        printf("\nDigite a opcao desejada: ");
        
        scanf("%d",&choice);

        switch(choice){
            case 1:
            
                pilha_inicializar(&pilha);
                printf("\n Pilha inicializada!\n");
                break;
            
            case 2:
            
                if(pilha_esta_vazia(&pilha))
                    printf("\n A pilha eh vazia!\n");
                else
                    printf("\n A pilha nao eh vazia.\n");
                break;
            
            case 3:
            
                if(pilha_esta_cheia(&pilha))
                    printf("\n A pilha eh cheia!\n");
                else
                    printf("\n A pilha nao eh cheia.\n");
                break;
            
            case 4:
            
                printf("\n Digite o numero que voce deseja inserir na pilha: ");
                scanf("%d",&n);

                if (pilha_push(&pilha , n))
                    printf("\n Elemento inserido com sucesso!\n");
                else
                    printf("\n Nao foi possivel inserir o elemento.\n");
                break;
            
            case 5:
            
                if (pilha_pop(&pilha))
                    printf("\n Elemento removido com sucesso!\n");
                else
                    printf("\n Nao foi possivel remover o elemento.\n");
                break;
            
            case 6:
            
                pilha_print(&pilha);
                break;
            
            case 7:

                if(pilha_ler_topo(&pilha , &elem_no_topo))
                    printf("\nTopo: %d\n" , elem_no_topo);
                else
                    printf("\nFalha ao ler topo da pilha\n");
                

                break;

            case 8:
            
                printf("\n \t TCHAU! \n \n ");
                pilha_free(&pilha);
                return 1;
                
            
            default: printf("\n Opcao inexistente\n");
        }
    }
}