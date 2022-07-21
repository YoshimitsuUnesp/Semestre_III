#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define boolean int  // tipo boleano
#define tam_fila 100 // tamanho max. fila

// Fila circular

// Estruturas
//----------------------------------
// Tipo registro
typedef struct
{
   char nome[30];
   int idade;
} tipo_dado;

// Tipo fila (sequencial)
typedef struct
{
   tipo_dado A[tam_fila];
   int inicio, fim;
} fila;
//----------------------------------

// Opera��es
//----------------------------------
// Cria uma fila vazia
void Definir(fila *q)
{
   q->fim = 0;
   q->inicio = 0;
}

// Checa se uma fila est� vazia
boolean Vazia(fila *q)
{
   return (q->inicio == q->fim);
}

// Checa se uma fila est� cheia
boolean Cheia(fila *q)
{
   return (q->inicio == ((q->fim + 1) % tam_fila));
   // Obs: Crit�rio adotado p/ fila cheia: os dois ponteiros ir�o diferir em uma posi��o
}

// Adiciona um elemento no fim da fila q
boolean Inserir(fila *q, tipo_dado elem)
{
   if (Cheia(q))
      return FALSE;

   q->fim = (q->fim + 1) % tam_fila;
   q->A[q->fim] = elem;
   return TRUE;
}

// Remove o elemento do in�cio da fila, retornando uma c�pia do mesmo
// ITEM A)
boolean Remover(fila *q, tipo_dado *elem)
{
   int t = Tamanho(q);
   tipo_dado aux;

   if (!Vazia(q))
   {
      for (int i = q->inicio; i < t; i++)
      {
         aux = q->A[i];
         q->A[i - 1] = q->A[i];
      }
      t--;
      return TRUE;
   }
   return FALSE;
}

// Retorna o tamanho da fila
// ITEM B) - DICA: Usar q->inicio, q->fim e tam_fila
int Tamanho(fila *q)
{
   if (!Vazia(q))
      return (q->fim - q->inicio) % tam_fila;
}

// Imprime os campos de um elemento do 'tipo_dado'
void Imprimir_elem(tipo_dado x)
{
   printf("Nome: %s - ", x.nome);
   printf("Idade: %d \n", x.idade);
   return;
}

// Imprime os elementos de uma fila
// ITEM C)
void Imprimir(fila *q)
{
   // Dica: Lembre-se que nesta implementacao de fila, o ponteiro
   // do in�cio est� posicionado UMA unidade ANTES do in�cio da fila!
   // Logo, o primeiro elemento da fila � dado por q->inicio+1
   int i;
   tipo_dado a;
   a.idade = q->A->idade;
   strcpy(a.nome, q->A->nome);
   if (!Vazia(q))
      for (i = q->inicio + 1; i <= q->fim; i++)
         Imprimir_elem(a);
}
//----------------------------------

// Programa teste (para validar as implementa��es)
int main(void)
{
   // Vari�veis
   fila DBZ, Disney;
   tipo_dado a1, a2, b1, b2, removido;

   // Cria dois conjuntos vazios (para testar o c�digo)
   Definir(&DBZ);
   Definir(&Disney);

   strcpy(a1.nome, "Gohan");
   strcpy(a2.nome, "Goku");
   a1.idade = 23;
   a2.idade = 42;
   strcpy(b1.nome, "Mickey");
   strcpy(b2.nome, "Pato Donald");
   b1.idade = 90;
   b2.idade = 80;

   Inserir(&DBZ, a1);
   Inserir(&DBZ, a2);
   Inserir(&Disney, b1);
   Inserir(&Disney, b2);

   Imprimir(&DBZ);
   Imprimir(&Disney);

   Remover(&DBZ, &removido);
   Imprimir(&DBZ);

   return 0;
}
