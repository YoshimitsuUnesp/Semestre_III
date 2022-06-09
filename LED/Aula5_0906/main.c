#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// Tamanho da matriz de conexoes e vetor de distancias
#define N 5

// Programa principal
// Matriz A: representa as ligacoes entre as cidade 0, ..., n
// Vetor dist: dis[i] e a distancia da cidade 'c' ate 'i'
int main()
{
    // Inicializacao da matriz das cidades
    int A[N][N] = {{0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 1}, {0, 0, 1, 0, 1}, {0, 1, 0, 0, 0}};
    int dist[N];
    int i, j, c = 1;
    fila F;

    for (i = 0; i < N; i++)
        dist[i] = N; // Seta dist[i]

    dist[c] = 0;
    Definir(&F);    // Cria fila vazia
    Inserir(&F, c); // Insere a cidade 'c' na fila

    // Roda ate que todos os nos tenham sido checados
    // Tira da fila uma cidade i, e coloca na fila as cidades vizinhas j com distancia nao computadas
    while (!Vazia(&F))
    {
        Remover(&F, &i);
        for (j = 0; j < N; j++)
        {
            if (A[i][j] == 1 && dist[j >= N])
            {
                dist[j] = dist[i] + 1;
                Inserir(&F, j);
            }
        }
    }

    //Imprime o vetor distancia de 'c' para as cidades 'i'
    for(i = 0; i < N; i++)
        printf("dist[%d]: %d\n", i, dist[i]);

    return 0;
}
