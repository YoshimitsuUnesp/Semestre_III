//TAD: matriz real m x n

typedef struct matriz Matriz;

//Funcoes exportadas
//-----------------------------
//Funcao cria: aloca e retorna matriz m x n
Matriz *cria(int m, int n);

//Funcao libera: libera a memoria de uma matriz
void libera(Matriz *mat);

//Funcao acessa: retorna o valor do elemento [i][j]
float acessa(Matriz *mat, int i, int j);

//Funcao atribui: atribui valor ao elemento [i][j]
void atribui(Matriz *mat, int i, int j, float v);

//Funcao linhas: retorna numero de linhas da matriz
int linhas(Matriz *mat);

//Funcao coluna: retorna numero de colunas da matriz
int colunas(Matriz *mat);
