#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char *argv[])
{
    int op, aux;
    tipo_elem personagem;
    lista *lista;
    Definir(lista);

    putchar('\n');
    do
    {
        printf("--------------------------\n"
               "|     MENU PRINCIPAL     |\n"
               "--------------------------\n"
               "| 1 - Inserir ordenado   |\n"
               "| 2 - Imprimir lista     |\n"
               "| 3 - Busca binaria      |\n"
               "| 4 - Remover pela chave |\n"
               "| 5 - Apagar lista       |\n"
               "| 6 - Encerrar programa  |\n"
               "--------------------------\n");
        printf("Escolha uma opcao:\n");
        scanf(" %d", &op);

        switch (op)
        {
        case 1:
            printf("\nCRIAR PERSONAGEM\n");
            printf("Nome:\n");
            scanf(" %[^\n]%*c", personagem.info.nome);
            fflush(stdin);
            printf("Arma:\n");
            scanf(" %[^\n]%*c", personagem.info.arma);
            fflush(stdin);
            printf("Quantidade de dano:\n");
            scanf(" %d", &personagem.info.qtd_dano);
            printf("Chave identificadora:\n");
            scanf(" %d", &personagem.chave);
            if (Inserir_ord(personagem, lista))
                printf("\nPERSONAGEM CRIADO COM SUCESSO!\n\n");
            else
                printf("\nERRO: NAO FOI POSSIVEL CRIAR O PERSONAGEM!\n\n");
            break;

        case 2:
            printf("\nIMPRIMIR LISTA\n");
            if (!Vazia(lista))
            {
                Imprimir(lista);
                putchar('\n');
            }
            else
                printf("\nERRO: LISTA VAZIA!\n\n");
            break;
        case 3:
            printf("\nBUSCA BINÁRIA\n");
            printf("Digite a chave do personagem a ser encontrado:\n");
            scanf(" %d", &personagem.chave);
            if (Busca_bin(personagem.chave, lista, &aux))
            {
                printf("\nPERSONAGEM ENCONTRADO!\nPOSICAO: %d\n\n", aux);
                break;
            }
            else
                printf("\nERRO: PERSONAGEM INEXISTENTE!\n\n");
            break;
        case 4:
            if (!Vazia(lista))
            {
                printf("REMOVER PERSONAGEM PELA CHAVE\n");
                printf("\nDigite a chave do personagem a ser removido: ");
                scanf(" %d", &personagem.chave);
                if (Remover_ch(personagem.chave, lista))
                    printf("\nPERSONAGEM REMOVIDO COM SUCESSO!\n\n");
                else
                    printf("\nERRO: CHAVE INEXISTENTE!\n\n");
                break;
            }
            else
                printf("\nERRO: LISTA VAZIA!\n\n");
            break;
        case 5:
            if (!Vazia(lista))
            {
                printf("\nAPAGAR LISTA\n");
                printf("Apagando lista...\n");
                Apagar(lista);
                printf("\nLISTA APAGADA COM SUCESSO!\n\n");
            }
            else
                printf("\nERRO: LISTA VAZIA!\n\n");
            break;
        default:
            break;
        }
    } while (op != 6);

    return 0;
}
