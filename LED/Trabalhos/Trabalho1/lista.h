//TAD: lista seq.

#define MAX 100 // Estimativa do tamanho maximo da Lista
#define TRUE 1  // Define um tipo booleano
#define FALSE 0
#define boolean int

//-----------------------------
// Estruturas
// Tipo chave
typedef int tipo_chave; 

//Tipo registro
typedef struct
{
   char nome[30];
   char arma[15];
   int qtd_dano;
} tipo_dado;

//Tipo elemento (registro + chave)
typedef struct
{
   tipo_chave chave;
   tipo_dado info;
} tipo_elem;

//Tipo lista (sequencial)
typedef struct
{
   int nelem; // Numero de elementos
   tipo_elem A[MAX+1];
} lista;
//-------------------------------------------


//-----------------------------
// Funcoes
boolean Vazia(lista *L);
boolean Cheia(lista *L);
void Definir(lista *L);
void Apagar(lista *L);
boolean Inserir_posic(tipo_elem x, int p, lista *L);
boolean Inserir_ord(tipo_elem x, lista *L);
boolean Buscar(tipo_chave x, lista *L, int *p);
boolean Buscar_ord(tipo_chave x, lista *L, int *p);
boolean Busca_bin(tipo_chave x, lista *L, int *p);
void Remover_posic(int *p, lista *L);
boolean Remover_ch(tipo_chave x, lista *L);
void Impr_elem(tipo_elem t);
void Imprimir(lista *L);
int Tamanho(lista *L);

