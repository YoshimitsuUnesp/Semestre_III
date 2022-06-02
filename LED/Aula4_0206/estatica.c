#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define boolean int
#define MAX 101

char pilha[100];
int topo;

// Funcoes simples para manusear pilha
// -----------------------------------------------
void Define(void)
{
    topo = -1;
}

void Push(char x)
{
    topo++;
    pilha[topo] = x;
}

char Pop(void)
{
    char c = pilha[topo];
    topo--;
    return c;
}

boolean Vazia(void)
{
    return (topo == -1);
}
// -----------------------------------------------
/* Retorna TRUE se a string contem uma seq. valida
(parenteses + colchetes) e FALSE caso contrario */
boolean SequenciaValida(char s[])
{
    int i;
    char c;
    Define();
    for (i = 0; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
        case ')':
            if (Vazia())
                return FALSE;
            c = Pop(); // Desempilha se encontrar parenteses a esquerda
            if (c != '(')
                return FALSE;
            break; // Novo parenteses entrando, nao faz nada
        case ']':
            if (Vazia())
                return FALSE;
            c = Pop(); // Desempilha colchetes a esquerda
            if (c != '[')
                return FALSE;
            break; // Novo colchetes entrando
        default: Push(s[i]);
        }
    }
    return Vazia();
}

int main(){
    char sequencia[MAX];

    printf("Digite uma sequencia de parentes e colchetes:");
    scanf("%s", sequencia);

    if(SequenciaValida(sequencia))
        printf("Sequencia valida\n");
    else
        printf("Sequencia invalida\n");
}