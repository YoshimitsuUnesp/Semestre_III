#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c;
	Matriz *M;
	
	//Criar uma matriz 5x5
	M = cria(5,5);
	
	//Insere valores na matriz
	atribui(M, 1, 2, 10);
	atribui(M, 2, 3, 20);
	atribui(M, 3, 0, 11);
	
	//Verifica se a insercao foi feita corretamente
	a = acessa(M, 1, 2);
	b = acessa(M, 2, 3);
	c = acessa(M, 3, 0);
	
	printf("M[1][2]: %f", a);
	printf("M[2][3]: %f", b);
	printf("M[3][0]: %f", c);
	
	return 0;
}