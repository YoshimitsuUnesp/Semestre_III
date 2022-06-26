#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// Operacoes da fila
// ------------------------------------
// Cria fila vazia
void Definir(fila *q)
{
    q->inicio = 0;
    q->fim = 0;
}

// Checa se fila esta vazia
boolean Vazia(fila *q)
{
    return (q->inicio == q->fim);
}

// Checa se a fila esta cheia
boolean Cheia(fila *q)
{
    return (q->inicio == ((q->fim + 1) % tam_fila));
    // Obs: Os dois ponteiros diferem de uma posicao
}

// Adiciona um elemento no fim da fila
boolean Inserir(fila *q, int elem)
{
    if (Cheia(q))
        return FALSE;

    q->A[q->fim] = elem;
    q->fim = (q->fim + 1) % tam_fila;

    return TRUE;
}

// Remove o elemento do inicio da fila
boolean Remover(fila *q, int *elem)
{
    if (Vazia(q))
        return FALSE;

    *elem = q->A[q->inicio];
    q->inicio = (q->inicio + 1) % tam_fila;

    return TRUE;
}

// Retorna o tamanho da fila
int Tamanho(fila *q)
{
    if (q->inicio <= q->fim)
        return (q->fim - q->inicio);

    return (tam_fila - (q->inicio - q->fim));
}

// Mostra o comeco da fila sem remover o elemento
boolean Inicio_fila(fila *q, int elem)
{
    if (Vazia(q))
        return FALSE;
    elem = q->A[(q->inicio + 1) % tam_fila];

    return TRUE;
}

// Imprimir fila
void Imprimir(fila *q)
{
    if (!Vazia(q))
    {
        int aux = q->inicio;
        while (aux != q->fim + 1)
        {
            ImprimirElem(q->A[aux]); // A e o vetor com os elementos
            aux = (aux + 1) % tam_fila;
        }
    }
}

// Imprimir elemento(idade)
void ImprimirElem(int elem)
{
    printf("\t%d", elem);
}

// Chamar as senhas
void Chamar(fila *comum, fila *preferencial)
{
    int elem, i;
    while (!Vazia(preferencial) || !Vazia(comum))
    {
        Remover(comum, &elem);
        printf("\nSenha preferencial %d chamada", elem);

        for (i = 0; i < 2; i++)
        {
            if (!Vazia(preferencial))
            {
                Remover(preferencial, &elem);
                printf("\nSenha comum %d chamada", elem);
            }
        }
    }
    printf("\n");
    printf("\nAs filas estao vazias!");
}