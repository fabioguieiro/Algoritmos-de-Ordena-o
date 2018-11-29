#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funcoes.h"
int q_comp=0, q_atrib=0;


void bubblesort(int vetor[],int n){
    int k, j, aux;
    int comp=0,atrib=0;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - k; j++) {

            if (vetor[j] > vetor[j + 1]) {
                comp++;
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
                atrib+=3;
            }
            comp++;
        }
    }
    printf("\n||%d comparacoes\n%d atribuicoes||\n",comp,atrib);
}

void insertionsort(int vetor[],int n){
    	int i, j, atual;
    	int comp=0,atrib=0;
	for (i = 1; i < n; i++) {

		atual = vetor[i];
        atrib++;
		for (j = i - 1; (j >= 0) && (atual < vetor[j]); j--) {
                comp++;
			vetor[j + 1] = vetor[j];
			atrib++;
        }
        comp++;
		vetor[j+1] = atual;
		atrib++;
	}
	printf("\n||%d comparacoes\n%d atribuicoes||\n",comp,atrib);
}

void selectionsort(int vetor[],int n){
    int i, j, min, aux;
    int comp=0,atrib=0;
    for (i = 0; i < (n-1); i++) {
     comp++;
     min = i;
     atrib++;
     for (j = (i+1); j < n; j++) {
         comp++;
       if(vetor[j] < vetor[min]){
        comp++;
        min = j;
        atrib++;
       }
         comp++;
     }

     if (vetor[i] != vetor[min]) {
       comp++;
       aux = vetor[i];
       vetor[i] = vetor[min];
       vetor[min] = aux;
       atrib=+3;
     }
     comp++;
  }
  printf("\n||%d comparacoes\n%d atribuicoes||\n",comp,atrib);
}

void heapsort(int vetor[],int n){
    int comp=0,atrib=0;
   int i = n / 2, pai, filho, t, n2=n;
   while(1) {
        comp++;
      if (i > 0) {
          comp++;
          i--;
          t = vetor[i];
            atrib++;
      } else {
          comp++;
          n--;
          atrib++;
          comp++;
          if (n == 0){
             printf("\n||%d comparacoes\n%d atribuicoes||\n",comp,atrib);
            return;
          }
          atrib++;
          atrib++;
          t = vetor[n];
          vetor[n] = vetor[0];
      }
      atrib+=2;
      pai = i;
      filho = i * 2 + 1;
      comp++;
      while (filho < n) {
            comp++;
          if ((filho + 1 < n)  &&  (vetor[filho + 1] > vetor[filho]))
              filho++;
            comp++;
          if (vetor[filho] > t) {
            atrib+=3;
             vetor[pai] = vetor[filho];
             pai = filho;
             filho = pai * 2 + 1;
          } else {
             break;
          }
          comp++;
      }
      atrib++;
      vetor[pai] = t;
   }

}

void shellsort(int vetor[], int n){
    int i , j , valor;
    int atrib=0,comp=0;
    int gap = 1;
    comp++;
    while(gap < n) {
            comp++;
            atrib++;
        gap = 3*gap+1;
    }
    comp++;
    while ( gap > 1) {
        comp++;
        gap /= 3;
        atrib++;
        for(i = gap; i < n; i++) {
            atrib+=2;
            valor = vetor[i];
            j = i;
            comp++;
            while (j >= gap && valor < vetor[j - gap]) {
                comp++;
                vetor[j] = vetor [j - gap];
                j = j - gap;
                atrib+=2;
            }
            comp++;
            atrib++;
            vetor [j] = valor;
        }
    }
    comp++;
    printf("\n||%d comparacoes\n%d atribuicoes||\n",comp,atrib);
}


void print(int vetor[],int n){
    int i,cont=0;
    printf("\nvetor: \n");
    for(i=0;i<n;i++){
        if(i%20==0){
            printf("\n");
        }
        printf("%d  ",vetor[i]);


    }
}


int particiona(int *vetor, int inicio, int fim ){
    int esq, dir, pivo, aux;
    q_atrib+=3;
    esq = inicio;
    dir = fim;
    pivo = vetor[inicio];
    while(esq < dir){
            q_comp++;
        while(vetor[esq] <= pivo){
            q_comp++;
            esq++;
            q_atrib++;
        }
        q_comp++;
        while(vetor[dir] > pivo){
            q_comp++;
            dir--;
            q_atrib;
        }
        q_comp++;
        if(esq < dir){
            q_comp++;
            q_atrib+=3;
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;
        }
        q_comp++;
    }
    q_comp++;
    q_atrib++;
    vetor[inicio] = vetor[dir];
    vetor[dir] = pivo;
    return dir;
}

void quicksort(int *vetor, int inicio, int fim) {
    int pivo;

    if(fim > inicio){
        q_comp++;
        q_atrib++;
        pivo = particiona(vetor, inicio, fim);
        quicksort(vetor, inicio, pivo-1);
        quicksort(vetor, pivo+1, fim);
    }
    q_comp++;
}
void get_comp(){
    printf("\n||%d comparacoes\n%d atribuicoes||\n",q_comp,q_atrib);
    q_comp=0;
    q_atrib=0;
}

void gera_vet_ord(int *vetor, int n){
    int i;
    for(i=0;i<n;i++){
        vetor[i]= i*2;
    }
}

void gera_vet_desord(int *vetor,int n){
    int i;
    for(i=n;i>0;i--){
        vetor[i]= i-n;
    }
}

void gera_quase_ord(int *vetor,int n)
{
    int i, pct,a=0;
    if(n>=100)
    {
        pct = n/100;
        for(i=0; i<(n-pct); i++)
        {
            vetor[i]= i*2;
        }
        for(i=(n-pct); i<n; i++)
        {
            vetor[i]=a-i;
        }
    }else {
        printf("\nvetor menor que 100, impossivel desordenar 1%\npreenchendo ondenado...");
        gera_vet_ord(vetor,n);
    }
}
void gera_aleatorio(int *vetor,int n){
    int i;
    for(i=n;i>0;i--){
        vetor[i]= rand() % n;
    }
}

