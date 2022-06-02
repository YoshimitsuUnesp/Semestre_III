#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define boolean int
#define MAX 101

// Tipo registro
typedef struct
{
    char nome[30];
    // ... (preencher outros atributos)
} tipo_dado;

// Tipo elemento (unidade dinamica)
typedef struct elem
{
    tipo_dado info;
    struct elem *lig;
} tipo_elem;

// Tipo pilha
typedef struct
{
    tipo_elem *topo;

} pilha;

// Cria pilha vazia
void Define(pilha *p)
{
    p->topo = NULL;
}

// Insere x no topo da pilha p (empilha): Push(x, p)
boolean Push(tipo_dado x, pilha *p)
{
    tipo_elem *q = malloc(sizeof(tipo_elem));

    if (q == NULL) // Nao possui memoria disponivel
        return FALSE;

    // Insere x e faz as licacoes necessarias
    q->info = x;
    q->lig = p->topo;
    p->topo = q;

    return TRUE;
}

// Testa se a pilha p esta vazia
boolean Vazia(pilha *p)
{
    return (p->topo == NULL);
}

// Acessa o elemento do topo da pilha (mas sem remove-lo)

tipo_elem *Topo(pilha *p)
{
    return p->topo;
}

// Remove o elemento no tipo de p sem retornar valor
//(desempilhar v.1)
void Pop_up(pilha *p)
{
    tipo_elem *q = p->topo;
    p->topo = p->topo->lig;
    free(q);
}

// Remove o elemento do tipo de p mas devolve o elemento
//(desempilha v.2)
tipo_elem *Pop(pilha *p)
{
    tipo_elem *q = p->topo;
    p->topo = p->topo->lig;

    return q;
}