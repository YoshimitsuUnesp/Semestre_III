// fila_din.c
#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Estimativa do tamanho maximo da Lista
#define TRUE 1  // Define um tipo booleano
#define FALSE 0
#define boolean int

// Estruturas e tipos
// Tipo registro
typedef struct
{
    char nome[30];
    // ...
} tipo_dado;

// Tipo elemento (unidade de elemnto p/ impl. dinamica)
typedef struct elem
{
    tipo_dado info;
    struct elem *lig;
} tipo_elem;

// Tipo fila
typedef struct
{
    tipo_elem *inicio;
    tipo_elem *fim;
} fila;

// Operacoes
// ----------------------------------------------------
// Cria uma fila vazia
void Definir(fila *q)
{
    q->inicio = NULL;
    q->fim = NULL;
}

boolean Vazia(fila *q)
{
    return (q->inicio == NULL);
}

/* Reinicializa uma fila existente q como uma fila vazia
removendo todos os seus elementos */
void Tornar_vazia(fila *q)
{
    tipo_elem *nodel, *nextno;

    if (!Vazia(q))
    {
        nextno = q->inicio;
        while (nextno != NULL)
        {
            nodel = nextno;
            nextno = nextno->lig;
            free(nodel);
        }
    }
    Definir(q);
}

// adicionar um elemento no fim da fila q
boolean Inserir(fila *q, tipo_dado info)
{
    tipo_elem *p;

    p = malloc(sizeof(tipo_elem));
    if (p == NULL)
        return FALSE;

    p->info = info;
    p->lig = NULL;

    if (Vazia(q))
        q->inicio = p;
    else
        q->fim->lig = p;

    q->fim = p;
    return TRUE;
}

// Remover um elemento do inicio da fila q
boolean Remover(fila *q, tipo_dado *info)
{
    tipo_elem *p;

    if (Vazia(q))
        return FALSE;

    p = q->inicio;
    *info = p->info;
    q->inicio = p->lig;

    if (q->inicio == NULL)
        q->fim = NULL;

    free(p);
    return TRUE;
}

// Retorna o tamanho d afila
int Tamanho(fila *q)
{
    tipo_elem *p;
    int count = 0;

    p = q->inicio;
    while (p != NULL)
    {
        count++;
        p = p->lig;
    }

    return count;
}

// Mostra o comeco d afila sem remover o elemento
boolean Inicio_fila(fila *q, tipo_dado *elem)
{
    if (Vazia(q))
        return FALSE;

    *elem = q->inicio->info;
    return TRUE;
}