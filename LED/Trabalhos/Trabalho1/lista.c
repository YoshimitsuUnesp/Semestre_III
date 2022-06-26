#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

#define MAX 100 // Estimativa do tamanho maximo da Lista
#define TRUE 1  // Define um tipo booleano
#define FALSE 0
#define boolean int

// Implementacao: Lista sequencial

boolean Vazia(lista *L)
{
   // Retorna true (1): se vazio, false(0), caso contrario
   return (L->nelem == 0);
}

boolean Cheia(lista *L)
{
   // Retorna true, se cheia, false, c.c.
   return (L->nelem == MAX);
}

void Definir(lista *L)
{
   /* Cria uma Lista vazia. Este procedimento deve ser
   chamado para cada nova Lista antes de qualquer outra
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
   Lista. Se lista = a_1, a_2, ..., a_n, entao temos a_1,
   a_2, ..., a_{p - 1}, x, a_{p + 1}, ..., an
   Devolve true se sucesso, false c.c. (isto e: lista nao
   tem nenhuma posicao p ou Lista cheia)
   OBS: Operacao para Lista NAO-ORDENADA*/

   int q;

   if (Cheia(L) || p > L->nelem + 1 || p < 1)
   {
      // Lista cheia ou posicao inexistente
      return FALSE;
   }
   else
   {
      for (q = L->nelem; q >= p; q--) // Copia vizinho p/ direita
         L->A[q + 1] = L->A[q];

      L->A[p] = x;
      L->nelem++;

      return TRUE; // Insercao realizada com sucesso
   }
}

boolean Buscar(tipo_chave x, lista *L, int *p)
{
   /* Retorna true, se x ocorre na posicao p. Se x ocorre
   mais de uma vez, retorna a posicao da primeira ocorrencia
   Se x nao ocorre, retorna false
   OBS: Lista NAO-ORDENADA */

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

   for (i = *p + 1; i <= L->nelem; i++)
      L->A[i - 1] = L->A[i];

   L->nelem--;
}

void Impr_elem(tipo_elem t)
{
   printf("Chave: %d\n", t.chave);
   printf("Nome: %s\n", t.info.nome);
   printf("Arma: %s\n", t.info.arma);
   printf("Quantidade dano: %d\n", t.info.qtd_dano);
}

void Imprimir(lista *L)
{
   // Imprime os elementos na sua ordem de precedencia

   int i;

   if (!Vazia(L))
      for (i = 1; i <= L->nelem; i++)
         Impr_elem(L->A[i]);
}

int Tamanho(lista *L)
{
   // Retorna o tamanho da Lista. Se lista e vazia, retorna 0

   return L->nelem;
}

boolean Inserir_ord(tipo_elem x, lista *L)
{
   /* Insere novo elemento de forma a manter a Lista
   ordenada (crescente). Devolve true (se sucesso),
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
      return Inserir_posic(x, i, L); // i = numElem
   }
}

boolean Buscar_ord(tipo_chave x, lista *L, int *p)
{
   /* Retorna true se x ocorre na posicao p. Se x ocorre
   mais de uma vez, retorna a posicao da primeira
   ocorrencia. Se x nao ocorre, retorna false
   OBS: Para Listas ORDENADAS */

   // Implementacao de busca linear simples
   if (!Vazia(L))
   {
      int i = 1;
      while (i <= L->nelem)
         if (L->A[i].chave >= x)
            if (L->A[i].chave == x)
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

boolean Busca_bin(tipo_chave x, lista *L, int *p)
{
   /* Retorna em p a posicao de x na Lista ORDENADA e true
   Se x nao ocorre, retorna false */

   // Implementacao da busca binaria
   int inf = 1;
   int sup = L->nelem;
   int meio;

   while (!(sup < inf))
   {
      meio = (inf + sup) / 2;
      if (L->A[meio].chave == x)
      {
         *p = meio; // Sai da busca
         return TRUE;
      }
      else
      {
         if (L->A[meio].chave < x)
            inf = meio + 1;
         else
            sup = meio - 1;
      }
   }
   return FALSE;
}

boolean Remover_ch(tipo_chave x, lista *L)
{
   /* Remocao dada a chave. Retorna true, se removeu,
   ou false, caso contrario */

   int *p;
   boolean removeu = FALSE;

   if (Busca_bin(x, L, p)) // Procura via busca binaria
   {
      Remover_posic(p, L);
      removeu = TRUE;
   }

   return removeu;
}