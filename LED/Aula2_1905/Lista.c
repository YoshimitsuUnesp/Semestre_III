#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

#define MAX 100 // Estimativa do tamanho maximo da lista
#define TRUE 1  // Define um tipo booleano
#define FALSE 0
#define boolean int

// Implementacao: lista sequencial

// Estruturas e tipos
// ------------------------------------------------------
// Tipo chave
typedef int tipo_chave;

// Tipo registro
typedef struct
{
    char nome[30];
} tipo_dado;

// Tipo elemento (registro + chave)
typedef struct
{
    tipo_chave chave;
    tipo_dado info;
} tipo_elem;

// Tipo lista (sequencial)
typedef struct
{
    int nelem; // Numero de elementos
    tipo_elem A[MAX + 1];
} lista;

boolean Vazia(lista *L){
    // Retorna true (1): se vazio, false(0), caso contrario
    return (L->nelem == 0)}

boolean Cheia(lista *L)
{
    // Retorna true, se cheia, false, c.c.
    return (L->nelem == MAX);
}

void Definir(lista *L)
{
    /* Cria uma lista vazia. Este procedimento deve ser
    chamado para cada nova lista antes de qualquer outra
    operacao */
    L->nelem = 0;
    L->A[0].chave = 0;
}

void Apagar(lista *L)
{
    // Apaga "logicamente" uma lista
    L->nelem = 0;
}

boolean Inserir_posic(tipo_elem x, int p, lista *L)
{
    /* Insere x, que e um novo elemento na posicao p da
    lista. Se L = a_1, a_2, ..., a_n, entao temos a_1,
    a_2, ..., a_{p - 1}, x, a_{p + 1}, ..., an
    Devolve true se sucesso, false c.c. (isto e: L nao
    tem nenhuma posicao p ou lista cheia)
    OBS: Operacao para lista NAO-ORDENADA*/
    int q;

    if (Cheia(L) || p > L->nelem + 1 || p < 1)
        // Lista cheia ou posicao inexistente
        return FALSE;
    else
    {
        for (q = L->nelem; q >= p; q--)
            L->A[q + 1] = L->A[q];

        L->A[p] = x;
        L->nelem++;
        return TRUE; // Insercao realizada com sucesso
    }
}

boolean Buscar(tipo_chave x, Lista *L, int *p)
{
    /* Retorna true, se x ocorre na posicao p. Se x ocorre
    mais de uma vez, retorna a posicao da primeira ocorrencia
    Se x nao ocorre, retorna false
    OBS: lista NAO-ORDENADA */

    if (!Vazia(L))
    {
        int i = 1;
        while (i <= L->nelem)
            if (L->A[i].chave == x)
            {
                *p = i;
                return TRUE;
            }
            else
                i++;
    }
    return FALSE; // Retorna falso, se nao encontrou
}

void Remover_posic(int *p, lista *L)
{
    /* So e ativada apos a busca ter retornado a posicao
    p do elemento a ser removido */
    int i;
    for (i = *p + 1; i < L->nelem; i++)
        L->A[i - 1] = L->A[i];

    L->nelem--;
}

void Impr_elem(tipo_elem x)
{
    printf("Chave: %d", x.chave);
    printf("Nome: %s", x.info.nome);
}

void Imprimir(lista *L)
{
    // Imprime os elementos na sua ordem de precedencia
    it i;
    if (!Vazia(L))
        for (i = 1; i <= L->nelem; i++)
            Impr_elem(L->A[i]);
}

int Tamanho(lista *L)
{
    // Retorna o tamanho da lista. Se L e vazia, retorna
    return L->nelem;
}

boolean Inserir_ord(tipo_elem x, lista *L)
{
    /* Insere novo elemento de forma a manter a lista
    ordenada (crescente). Devolve treu (se sucesso),
    false c.c */

    int i = 1;

    if (Vazia(L))
        return Inserir_posic(x, i, L);
    else
    {
        while (i <= L->nelem) // Encontra a posicao de insercao
        {
            if (x.chave < L->A[i].chave)
                return Inserir_posic(x, i, L);
            else
                i++;
        }
        return Inserir_posic(x, i, L); // i = nelem
    }
}