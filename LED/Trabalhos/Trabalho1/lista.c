#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

#define MAX 100 // Estimativa do tamanho maximo da Lista
#define TRUE 1  // Define um tipo booleano
#define FALSE 0
#define boolean int

// Implementacao: Lista sequencial

boolean vazia(Lista *lista){
    // Retorna true (1): se vazio, false(0), caso contrario
    return (lista->numElem == 0);
    }

boolean cheia(Lista *lista)
{
    // Retorna true, se cheia, false, c.c.
    return (lista->numElem == MAX);
}

void definir(Lista *lista)
{
    /* Cria uma Lista vazia. Este procedimento deve ser
    chamado para cada nova Lista antes de qualquer outra
    operacao */
    lista->numElem = 0;
    lista->A[0].chave = 0;
}

void apagar(Lista *lista)
{
    // Apaga "logicamente" uma Lista
    lista->numElem = 0;
}

boolean inserirPosic(Elemento x, int p, Lista *lista)
{
    /* Insere x, que e um novo elemento na posicao p da
    Lista. Se lista = a_1, a_2, ..., a_n, entao temos a_1,
    a_2, ..., a_{p - 1}, x, a_{p + 1}, ..., an
    Devolve true se sucesso, false c.c. (isto e: lista nao
    tem nenhuma posicao p ou Lista cheia)
    OBS: Operacao para Lista NAO-ORDENADA*/
    int q;

    if (cheia(lista) || p > lista->numElem + 1 || p < 1)
        // Lista cheia ou posicao inexistente
        return FALSE;
    else
    {
        for (q = lista->numElem; q >= p; q--)
            lista->A[q + 1] = lista->A[q];

        lista->A[p] = x;
        lista->numElem++;
        return TRUE; // Insercao realizada com sucesso
    }
}

boolean buscar(Chave x, Lista *lista, int *p)
{
    /* Retorna true, se x ocorre na posicao p. Se x ocorre
    mais de uma vez, retorna a posicao da primeira ocorrencia
    Se x nao ocorre, retorna false
    OBS: Lista NAO-ORDENADA */

    if (!vazia(lista))
    {
        int i = 1;
        while (i <= lista->numElem)
            if (lista->A[i].chave == x)
            {
                *p = i;
                return TRUE;
            }
            else
                i++;
    }
    return FALSE; // Retorna falso, se nao encontrou
}

void removerPosic(int *p, Lista *lista)
{
    /* So e ativada apos a busca ter retornado a posicao
    p do elemento a ser removido */
    int i;
    for (i = *p + 1; i < lista->numElem; i++)
        lista->A[i - 1] = lista->A[i];

    lista->numElem--;
}

void imprimirElem(Elemento x)
{
    printf("Chave: %d", x.chave);
    printf("Nome: %s", x.info.nome);
}

void imprimir(Lista *lista)
{
    // Imprime os elementos na sua ordem de precedencia
    int i;
    if (!vazia(lista))
        for (i = 1; i <= lista->numElem; i++)
            imprimirElem(lista->A[i]);
}

int tamanho(Lista *lista)
{
    // Retorna o tamanho da Lista. Se lista e vazia, retorna
    return lista->numElem;
}

boolean inserirOrd(Elemento x, Lista *lista)
{
    /* Insere novo elemento de forma a manter a Lista
    ordenada (crescente). Devolve true (se sucesso),
    false c.c */

    int i = 1;

    if (vazia(lista))
        return inserirPosic(x, i, lista);
    else
    {
        while (i <= lista->numElem) // Encontra a posicao de insercao
        {
            if (x.chave < lista->A[i].chave)
                return inserirPosic(x, i, lista);
            else
                i++;
        }
        return inserirPosic(x, i, lista); // i = numElem
    }
}

boolean buscarOrd(Chave x, Lista *lista, int *p)
{
    /* Retorna true se x ocorre na posicao p. Se x ocorre
    mais de uma vez, retorna a posicao da primeira
    ocorrencia. Se x nao ocorre, retorna false
    OBS: Para Listas ORDENADAS */

    // Implementacao de busca linear simples
    if (!vazia(lista))
    {
        int i = 1;
        while (i <= lista->numElem)
            if (lista->A[i].chave >= x)
                if (lista->A[i].chave == x)
                {
                    *p = i;
                    return TRUE;
                }
                else
                    return FALSE; // Encontrou maior, entao
            else
                i++;
    }
    return FALSE; // Nao encontrou
}

boolean buscaBin(Chave x, Lista *lista, int *p)
{
    /* Retorna em p a posicao de x na Lista ORDENADA e true
    Se x nao ocorre, retorna false */

    // Implementacao da busca binaria
    int inf = 1;
    int sup = lista->numElem;
    int meio;

    while (sup >= inf)
    {
        meio = (inf + sup) / 2;
        if (lista->A[meio].chave == x)
        {
            *p = meio;
            return TRUE; // Sai da busca
        }
        else
        {
            if (lista->A[meio].chave < x)
                inf = meio++;
            else
                sup = meio--;
        }
    }
    return FALSE;
}

boolean removerCh(Chave x, Lista *lista)
{
    /* Remocao dada a chave. Retorna true, se removeu,
    ou false, caso contrario */

    int *p;
    boolean removeu = FALSE;

    if (buscaBin(x, lista, p)) // Procura via busca binaria
    {
        removerPosic(p, lista);
        removeu = TRUE;
    }
    return removeu;
}