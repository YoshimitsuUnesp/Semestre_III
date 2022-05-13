#include <stdlib.h> //Para usar malloc, free, exit, ...
#include <stdio.h> //Para usar printf, ...
#include "matriz.h"

//Implementacao da struct matriz
struct matriz{
    int lin;
    int col;
    float *v;
};

//Implementacao das funcoes do TAD matriz
//------------------------------------------------------
void libera(Matriz *mat){
    free(mat->v);
    free(mat);
}

Matriz *cria(int m, int n){
    Matriz *mat = (Matriz*) malloc(sizeof(Matriz));

    if (!mat)
    {
        printf("Memoria insuficiente!\n");
        exit(1);
    }

    mat->lin = m;
    mat->col = n;
    mat->v = (float*) malloc(m*n*sizeof(float));
    return mat;
}

float acessa(Matriz *mat, int i, int j){
    int k;
    if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col)
    {
        printf("Acesso invalido\n");
        exit(1);
    }
    k = i*mat->col + j; //Conversao indice duplo p/ simplificar
    return mat->v[k];
}
void atribui(Matriz *mat, int i, int j, float v){
    int k;
    if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col)
    {
        printf("Acesso invalido\n");
        exit(1);
    }
    k = i*mat->col + j;
    mat->v[k] = v;
}

int linhas(Matriz *mat){
    return mat->lin;
}

int colunas(Matriz *mat){
    return mat->col;
}
