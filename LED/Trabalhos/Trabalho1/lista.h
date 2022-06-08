//TAD: matriz real m x n

#define MAX 100 // Estimativa do tamanho maximo da Lista
#define TRUE 1  // Define um tipo booleano
#define FALSE 0
#define boolean int

//-----------------------------
// Estruturas
// Tipo chave
typedef int Chave;

// Tipo registro
typedef struct
{
    char nome[30];
    char arma[20];
    int qtdDano;
} Dado;

// Tipo elemento (registro + chave)
typedef struct
{
    Chave chave;
    Dado info;
} Elemento;

// Tipo Lista (sequencial)
typedef struct
{
    int numElem; // Numero de elementos
    Elemento A[MAX + 1];
} Lista;


//-----------------------------
// Funcoes
void definir(Lista *lista);
boolean vazia(Lista *lista);
boolean cheia(Lista *lista);
void apagar(Lista *lista);
int tamanho(Lista *lista);
boolean inserirOrd(Elemento x, Lista *lista);
boolean inserirPosic(Elemento x, int p, Lista *lista);
void imprimir(Lista *lista);
void imprimirElem(Elemento x);
boolean buscar(Chave x, Lista *lista, int *p);
boolean buscarOrd(Chave x, Lista *lista, int *p);
boolean buscaBin(Chave x, Lista *lista, int *p);
boolean removerCh(Chave x, Lista *lista);
void removerPosic(int *p, Lista *lista);