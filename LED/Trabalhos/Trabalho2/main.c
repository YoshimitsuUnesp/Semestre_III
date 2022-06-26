//Grupo:
//Caio Sobrinho da Silva
//Matheus Yoshimitsu Tamashiro Pires Lanzo
//Gabriel Inagaki Marcelino
//Lucas Xavier de Britto Pereira
//Love ya

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    // Criando variaveis
    fila *filaPreferencial, *filaComum;
    filaPreferencial = (fila *)malloc(sizeof(fila));
    filaComum = (fila *)malloc(sizeof(fila));

    // Inicializando os dois tipos de fila
    Definir(filaPreferencial);
    Definir(filaComum);

    // Inserindo na fila preferencial
    Inserir(filaPreferencial, 69);
    Inserir(filaPreferencial, 96);
    Inserir(filaPreferencial, 82);

    // Inserindo na fila comum
    Inserir(filaComum, 14);
    Inserir(filaComum, 18);
    Inserir(filaComum, 19);
    Inserir(filaComum, 54);

    // Imprimindo as duas filas separadamente antes de chamar a senha
    printf("\n------ FILA PREFERENCIAL -------\n");
    Imprimir(filaPreferencial);
    printf("\n---------- FILA COMUM ----------\n");
    Imprimir(filaComum);

    // Chamando as senhas de cada fila
    Chamar(filaPreferencial, filaComum);
    printf("😊");
    return 0;
}