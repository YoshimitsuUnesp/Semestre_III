#include "pilha.h"

// Operacoes
// ----------------------------------
// Define (P): cria uma pilha P vazia
void Define(pilha *P)
{
    P->topo = 0;
}

// Insere x no topo P (empilhar): Push (x, P)
boolean Push(tipo_dado x, pilha *P)
{
    if (P->topo == MAX)
        return FALSE;

    P->topo++;
    P->A[P->topo].info = x;

    return TRUE;
}

// Testa se P e vazia
boolean Vazia(pilha *P)
{
    return (P->topo == 0);
}

/* Acessa o elemento do tipo da pilha (sem remover)
OBS: Testar antes de a pilha nao esta vazia */
tipo_elem Top(pilha *P)
{
    return P->A[P->topo];
}

/* Remove o elemento no tipo de P sem retornar valor
(desempilha, v. 1)
OBS: Testar antes se a pilha nao esta vazia */
void Pop_up(pilha *P)
{
    P->topo--;
}

/* Remove e retorna o elemento (todo o registro) eliminado
(desempilha, v. 2)
OBS: Testar antes de a pilha nao esta vazia */
tipo_elem Pop(pilha *P)
{
    tipo_elem x = P->A[P->topo];
    P->topo--;
    return x;
}