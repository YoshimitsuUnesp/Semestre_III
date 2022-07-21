#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 100
#define TRUE 1
#define FALSE 0
#define boolean int

// Implementa��o: lista sequ�ncial (n�o-ordenada)

// Estruturas e tipos empregados
//-------------------------------------------
// Tipo elemento (chave + nome)
typedef struct
{
   int chave;
   char nome[30];
} tipo_elem;

// Tipo lista de elementos
typedef struct
{
   int nelem; // n�mero de elementos
   tipo_elem A[MAX + 1];
} lista;
//-------------------------------------------

// Opera��es
//-------------------------------------------
// Checa se a lista est� vazia
boolean Vazia(lista *L)
{
   return (L->nelem == 0);
}

// Checa se a lista est� cheia
boolean Cheia(lista *L)
{
   return (L->nelem == MAX);
}

// Cria lista vazia
void Definir(lista *L)
{
   L->nelem = 0;
   L->A[0].chave = 0;
}

// Insere x, que � um novo elemento na posi��o p da lista
// Se L=a_1,a_2,...a_n ent�o a_1,a_2,...a_{p-1},x,a_{p+1},...an
boolean Inserir_posic(tipo_elem x, int p, lista *L)
{
   int q;
   if (Cheia(L) || p > L->nelem + 1 || p < 1)
      return FALSE;
   else
   {
      for (q = L->nelem; q >= p; q--) // Copia vizinho p/ direita
         L->A[q + 1] = L->A[q];
      L->A[p] = x;
      L->nelem++;
      return TRUE;
   }
}

// Busca um elemento cuja chave � ch. Se a chave se repete
// mais de uma vez, retorna a posi��o da primeira ocorr�ncia.
// Se a chave n�o ocorre, retorna false.
boolean Buscar(int ch, lista *L, int *p)
{
   if (!Vazia(L))
   {
      int i = 1; // Lembre-se: neste implementa��o, n�o utilizamos a posi��o 0 do array
      while (i <= L->nelem)
         if (L->A[i].chave == ch)
         {
            *p = i;
            return TRUE;
         }
         else
            i++;
   }
   return FALSE; // Retorna false se n�o encontrou
}

// Remove um elemento dada uma posi��o. S� � ativada ap�s a
// busca ter retornado a posi��o p do elemento a ser removido
void Remover_posic(int *p, lista *L)
{
   int i;
   for (i = *p + 1; i <= L->nelem; i++)
      L->A[i - 1] = L->A[i];
   L->nelem--;
}

// Imprime uma unidade do tipo_elem
void Impr_elem(tipo_elem t)
{
   printf("chave: %d\n", t.chave);
   printf("nome: %s\n", t.nome);
}

// Imprime os elementos na sua ordem de preced�ncia
void Imprimir(lista *L)
{
   int i;
   if (!Vazia(L))
      for (i = 1; i <= L->nelem; i++)
         Impr_elem(L->A[i]);
}

// Retorna o tamanho da lista. Se L � vazia retorna 0
int Tamanho(lista *L)
{
   return L->nelem;
}
//-------------------------------------------

// Programa principal
int main()
{
   // Vari�veis e estruturas
   lista L;
   tipo_elem x;
   int maior_ch, i;

   Definir(&L);

   // ITEM A) Crie uma lista com 5 elementos quaisquer
   //......
   tipo_elem a, b, c, d, e;
   a.chave = 1;
   strcpy(a.nome, "Abacate");
   Inserir_posic(a, a.chave, &L);

   b.chave = 2;
   strcpy(b.nome, "Banana");
   Inserir_posic(b, b.chave, &L);

   c.chave = 3;
   strcpy(c.nome, "Uva");
   Inserir_posic(c, c.chave, &L);

   d.chave = 4;
   strcpy(d.nome, "Abacaxi");
   Inserir_posic(d, d.chave, &L);

   // ITEM B) Salve em um tipo_dado o elemento de maior chave da lista.
   // Caso o valor da maior chave se repita, retornar a �ltima ocorr�ncia
   //......
   int t = Tamanho(&L);
   if (!Vazia(&L))
      for (int i = 1; i < t; i++)
         if (L.A->chave == d.chave)
            x = d;

   // Nao utilizei a funcao Buscar, pois ela retorna a primeira ocorrencia
   if (!Vazia(&L))
      for (int i = t; i != 0; i--)
      {
         if (x.chave == L.A->chave)
         {
            printf(x.nome);
            return i;
         }
         else
            return FALSE;
      }
   return 0;
}
