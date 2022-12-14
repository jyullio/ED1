#include <stdio.h>
#include "lista_enc.h"

int main()
{
    struct node *lista;
    int choice, n;
    
    while (1)
    {
        printf("\n \t Vc deseja: \t \n");
        printf("1)  Inicializar a lista. \n");
        printf("2)  Verificar se lista eh vazia. \n");
        printf("3)  Inserir elemento. \n");
        printf("4)  Remover elemento. \n");
        printf("5)  Tamanho da lista\n");
        printf("6)  Remover posicao \n");
        printf("7)  Imprimir a lista. \n");
        printf("8) Sair \n\n");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &choice);
        switch (choice){

            case 1:
            
                lista_inicializar(&lista);
                printf("\n Lista inicializada!\n");
                break;
            
            case 2:
            
                if (lista_esta_vazia(&lista))
                    printf("\n A lista eh vazia!\n");
                else
                    printf("\n A lista nao eh vazia.\n");
                break;
            
            case 3:
            
                printf("\n Digite o numero que voce deseja inserir na lista: ");
                scanf("%d", &n);
                if (lista_insere_elemento(&lista, n))
                    printf("\n Elemento inserido com sucesso!\n");
                else
                    printf("\n Nao foi possivel inserir o elemento.\n");
                break;
            
            case 4:
            
                printf("\n Digite o numero que voce deseja remover da lista: "),
                scanf("%d", &n);
                if (lista_remove_elemento(&lista, n))
                    printf("\n Elemento removido com sucesso!\n");
                else
                    printf("\n Nao foi possivel remover o elemento.\n");
                break;
            

            case 5:
                printf("\nComprimento da lista : %d\n" , lista_len(lista));
                break;

            case 6:
                printf("\n Digite a posicao que voce deseja remover da lista: "),
                scanf("%d", &n);
                if (lista_remove_posicao(&lista, n))
                    printf("\n Elemento removido com sucesso!\n");
                else
                    printf("\n Nao foi possivel remover o elemento.\n");
                break;

            case 7:
            
                lista_print(lista);
                break;
            
            case 8:
            
                printf("\n \t TCHAU! \n \n ");
                lista_free(lista);
                return 1;
            
            default:
                printf("\n Opcao inexistente\n");
        }
    }
}