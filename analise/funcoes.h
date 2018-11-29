#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

void bubblesort(int vetor[],int n);
void insertionsort(int vetor[],int n);
void selectionsort(int vetor[],int n);
void heapsort(int vetor[],int n);
void shellsort(int vetor[], int n);
int particiona(int *vetor, int inicio, int fim );
void quicksort(int *vetor, int inicio, int fim);
void gera_aleatorio(int *vetor,int n);
void gera_quase_ord(int *vetor,int n);
void gera_vet_desord(int *vetor,int n);
void gera_vet_ord(int *vetor, int n);
void get_comp();
#endif // FUNCOES_H_INCLUDED
