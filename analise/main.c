#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "funcoes.h"
int main()
{
    clock_t tInicio, tFim;
    char menuord[10],menualg[5],menusit[5];
    int menunum=-1,menuex=-1;
    double tempo_gasto;
    int numvet,tipovet,opc,i,vetor[10],vetor2[100],vetor3[1000],vetor4[10000],vetor5[100000];
    printf("\t\t*Bem Vindo ao programa de Analise de metodos de ordenacao*\n\n\n");
    printf("Instrucoes para execucao desse programa:\nsiga o padrao -> Ordena <algoritmo> <numero de itens> <situação> [-p]\nescreva 'Ordena', depois o nome do algoritmo:\n\tbub para BubbleSort\n\tsel para SelectionSort\n\tins para InsertioSort\n\tshe para ShellSort\n\thea para HeapSort\n\tqui para QuickSort\n");
    printf("depois escreva o numero de itens do vetor [exemplos: 10,100,1000,10000,100000]\n");
    printf("depois indique a situacao inicial do vetor:\n\tord para ordenado\n\tdes para desordenado\n\tqord para quase ordenado\n\tale para aleatorio\nse quiser imprimir os vetores pre e pos ordem digite 1 por fim, senao 0\npara sair informe o tamanho do vetor como 0\n");
    system("pause");
    while(menunum!=0)
    {
        //system("cls");
        scanf("%s %s %d %s %d",menuord,menualg,&menunum,menusit,&menuex);
        if(strcmp(menualg,"bub")==0) opc=1;
        if(strcmp(menualg,"ins")==0) opc=3;
        if(strcmp(menualg,"sel")==0) opc=2;
        if(strcmp(menualg,"she")==0) opc=4;
        if(strcmp(menualg,"hea")==0) opc=5;
        if(strcmp(menualg,"qui")==0) opc=6;
        printf("\nopc %d ",opc);
        switch(opc)
        {
        case 1:
            if(menunum<=10) numvet=1;
            else if(menunum<=100) numvet=2;
            else if(menunum<=1000) numvet=3;
            else if(menunum<=10000) numvet=4;
            else if(menunum<=100000) numvet=5;

            if(strcmp(menusit,"ord")==0)tipovet=1;
            else if(strcmp(menusit,"des")==0)tipovet=2;
            else if(strcmp(menusit,"qord")==0)tipovet=3;
            else if(strcmp(menusit,"ale")==0)tipovet=4;
            if(numvet==1&&tipovet==1)
            {
                gera_vet_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                bubblesort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==1)
            {
                gera_vet_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                bubblesort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==1)
            {
                gera_vet_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                bubblesort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }

            }
            else if(numvet==4&&tipovet==1)
            {
                gera_vet_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                bubblesort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }
            }
            else if(numvet==5&&tipovet==1)
            {
                gera_vet_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                bubblesort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==2)
            {
                gera_vet_desord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                bubblesort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==2)
            {
                gera_vet_desord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                bubblesort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==2)
            {
                gera_vet_desord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                bubblesort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==2)
            {
                gera_vet_desord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                bubblesort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==2)
            {
                gera_vet_desord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                bubblesort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==3)
            {
                gera_quase_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                bubblesort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==3)
            {
                gera_quase_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                bubblesort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==3)
            {
                gera_quase_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                bubblesort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==3)
            {
                gera_quase_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                bubblesort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==3)
            {
                gera_quase_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                bubblesort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==4)
            {
                gera_aleatorio(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                bubblesort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }

            }
            else if(numvet==2&&tipovet==4)
            {
                gera_aleatorio(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                bubblesort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==4)
            {
                gera_aleatorio(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                bubblesort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==4)
            {
                gera_aleatorio(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                bubblesort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==4)
            {
                gera_aleatorio(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                bubblesort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }
            tFim = clock();
            tempo_gasto = ( (double) (tFim - tInicio) ) / (CLOCKS_PER_SEC/1000);
            printf("\ntempo decorrido %.1f ms ",tempo_gasto);
            break;

        case 2:
            if(menunum<=10) numvet=1;
            else if(menunum<=100) numvet=2;
            else if(menunum<=1000) numvet=3;
            else if(menunum<=10000) numvet=4;
            else if(menunum<=100000) numvet=5;

            if(strcmp(menusit,"ord")==0)tipovet=1;
            else if(strcmp(menusit,"des")==0)tipovet=2;
            else if(strcmp(menusit,"qord")==0)tipovet=3;
            else if(strcmp(menusit,"ale")==0)tipovet=4;
            if(numvet==1&&tipovet==1)
            {
                gera_vet_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                selectionsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==1)
            {
                gera_vet_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                selectionsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==1)
            {
                gera_vet_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                selectionsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }

            }
            else if(numvet==4&&tipovet==1)
            {
                gera_vet_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                selectionsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }
            }
            else if(numvet==5&&tipovet==1)
            {
                gera_vet_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                selectionsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==2)
            {
                gera_vet_desord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                selectionsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==2)
            {
                gera_vet_desord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                selectionsort(vetor2,100);

                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==2)
            {
                gera_vet_desord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                selectionsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==2)
            {
                gera_vet_desord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                selectionsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==2)
            {
                gera_vet_desord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                selectionsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==3)
            {
                gera_quase_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                selectionsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==3)
            {
                gera_quase_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                selectionsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==3)
            {
                gera_quase_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                selectionsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==3)
            {
                gera_quase_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                selectionsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==3)
            {
                gera_quase_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                selectionsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==4)
            {
                gera_aleatorio(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                selectionsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }

            }
            else if(numvet==2&&tipovet==4)
            {
                gera_aleatorio(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                selectionsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==4)
            {
                gera_aleatorio(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                selectionsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==4)
            {
                gera_aleatorio(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                selectionsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==4)
            {
                gera_aleatorio(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                selectionsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }
            tFim = clock();
            tempo_gasto = ( (double) (tFim - tInicio) ) / (CLOCKS_PER_SEC/1000);
            printf("\ntempo decorrido %.1f ms ",tempo_gasto);
            break;
        case 3:
            if(menunum<=10) numvet=1;
            else if(menunum<=100) numvet=2;
            else if(menunum<=1000) numvet=3;
            else if(menunum<=10000) numvet=4;
            else if(menunum<=100000) numvet=5;

            if(strcmp(menusit,"ord")==0)tipovet=1;
            else if(strcmp(menusit,"des")==0)tipovet=2;
            else if(strcmp(menusit,"qord")==0)tipovet=3;
            else if(strcmp(menusit,"ale")==0)tipovet=4;
            if(numvet==1&&tipovet==1)
            {
                gera_vet_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                insertionsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==1)
            {
                gera_vet_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                insertionsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==1)
            {
                gera_vet_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                insertionsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }

            }
            else if(numvet==4&&tipovet==1)
            {
                gera_vet_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                insertionsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }
            }
            else if(numvet==5&&tipovet==1)
            {
                gera_vet_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                insertionsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==2)
            {
                gera_vet_desord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                insertionsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==2)
            {
                gera_vet_desord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                insertionsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==2)
            {
                gera_vet_desord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                insertionsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==2)
            {
                gera_vet_desord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                insertionsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==2)
            {
                gera_vet_desord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                insertionsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==3)
            {
                gera_quase_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                insertionsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==3)
            {
                gera_quase_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                insertionsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==3)
            {
                gera_quase_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                insertionsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==3)
            {
                gera_quase_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                insertionsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }
            }
            else if(numvet==5&&tipovet==3)
            {
                gera_quase_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                insertionsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==4)
            {
                gera_aleatorio(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                insertionsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }

            }
            else if(numvet==2&&tipovet==4)
            {
                gera_aleatorio(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                insertionsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==4)
            {
                gera_aleatorio(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                insertionsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==4)
            {
                gera_aleatorio(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                insertionsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==4)
            {
                gera_aleatorio(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                insertionsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }
            tFim = clock();
            tempo_gasto = ( (double) (tFim - tInicio) ) / (CLOCKS_PER_SEC/1000);
            printf("\ntempo decorrido %.1f ms ",tempo_gasto);
            break;
        case 4:
            if(menunum<=10) numvet=1;
            else if(menunum<=100) numvet=2;
            else if(menunum<=1000) numvet=3;
            else if(menunum<=10000) numvet=4;
            else if(menunum<=100000) numvet=5;

            if(strcmp(menusit,"ord")==0)tipovet=1;
            else if(strcmp(menusit,"des")==0)tipovet=2;
            else if(strcmp(menusit,"qord")==0)tipovet=3;
            else if(strcmp(menusit,"ale")==0)tipovet=4;
            if(numvet==1&&tipovet==1)
            {
                gera_vet_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                shellsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==1)
            {
                gera_vet_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                shellsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==1)
            {
                gera_vet_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                shellsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }

            }
            else if(numvet==4&&tipovet==1)
            {
                gera_vet_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                shellsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }
            }
            else if(numvet==5&&tipovet==1)
            {
                gera_vet_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                shellsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==2)
            {
                gera_vet_desord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                shellsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==2)
            {
                gera_vet_desord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                shellsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==2)
            {
                gera_vet_desord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                shellsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==2)
            {
                gera_vet_desord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                shellsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==2)
            {
                gera_vet_desord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                shellsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==3)
            {
                gera_quase_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                shellsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==3)
            {
                gera_quase_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                shellsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==3)
            {
                gera_quase_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                shellsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==3)
            {
                gera_quase_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                shellsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==3)
            {
                gera_quase_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                shellsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==4)
            {
                gera_aleatorio(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                shellsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }

            }
            else if(numvet==2&&tipovet==4)
            {
                gera_aleatorio(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                shellsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==4)
            {
                gera_aleatorio(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                shellsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==4)
            {
                gera_aleatorio(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                shellsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==4)
            {
                gera_aleatorio(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                shellsort(vetor5,100000);

                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }
            tFim = clock();
            tempo_gasto = ( (double) (tFim - tInicio) ) / (CLOCKS_PER_SEC/1000);
            printf("\ntempo decorrido %.1f ms ",tempo_gasto);
            break;
        case 5:
            if(menunum<=10) numvet=1;
            else if(menunum<=100) numvet=2;
            else if(menunum<=1000) numvet=3;
            else if(menunum<=10000) numvet=4;
            else if(menunum<=100000) numvet=5;

            if(strcmp(menusit,"ord")==0)tipovet=1;
            else if(strcmp(menusit,"des")==0)tipovet=2;
            else if(strcmp(menusit,"qord")==0)tipovet=3;
            else if(strcmp(menusit,"ale")==0)tipovet=4;
            if(numvet==1&&tipovet==1)
            {
                gera_vet_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                heapsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==1)
            {
                gera_vet_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                heapsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==1)
            {
                gera_vet_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                heapsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }

            }
            else if(numvet==4&&tipovet==1)
            {
                gera_vet_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                heapsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }
            }
            else if(numvet==5&&tipovet==1)
            {
                gera_vet_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                heapsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==2)
            {
                gera_vet_desord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                heapsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==2)
            {
                gera_vet_desord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                heapsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==2)
            {
                gera_vet_desord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                heapsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==2)
            {
                gera_vet_desord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                heapsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==2)
            {
                gera_vet_desord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                heapsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==3)
            {
                gera_quase_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                heapsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }
            }
            else if(numvet==2&&tipovet==3)
            {
                gera_quase_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                heapsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==3)
            {
                gera_quase_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                heapsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==3)
            {
                gera_quase_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                heapsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==3)
            {
                gera_quase_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                heapsort(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==4)
            {
                gera_aleatorio(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                heapsort(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }

            }
            else if(numvet==2&&tipovet==4)
            {
                gera_aleatorio(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                heapsort(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==4)
            {
                gera_aleatorio(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                heapsort(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==4)
            {
                gera_aleatorio(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                heapsort(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==4)
            {
                gera_aleatorio(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                heapsort(vetor5,100000);
            }
            tFim = clock();
            tempo_gasto = ( (double) (tFim - tInicio) ) / (CLOCKS_PER_SEC/1000);
            printf("\ntempo decorrido %.1f ms ",tempo_gasto);
            break;
        case 6:
            if(menunum<=10) numvet=1;
            else if(menunum<=100) numvet=2;
            else if(menunum<=1000) numvet=3;
            else if(menunum<=10000) numvet=4;
            else if(menunum<=100000) numvet=5;

            if(strcmp(menusit,"ord")==0)tipovet=1;
            else if(strcmp(menusit,"des")==0)tipovet=2;
            else if(strcmp(menusit,"qord")==0)tipovet=3;
            else if(strcmp(menusit,"ale")==0)tipovet=4;
            if(numvet==1&&tipovet==1)
            {
                gera_vet_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                quicksort(vetor,1,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }


            }
            else if(numvet==2&&tipovet==1)
            {
                gera_vet_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                quicksort(vetor2,1,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }


            }
            else if(numvet==3&&tipovet==1)
            {
                gera_vet_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                quicksort(vetor3,1,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }

            }
            else if(numvet==4&&tipovet==1)
            {
                gera_vet_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                quicksort(vetor4,1,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==1)
            {
                gera_vet_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }

                tInicio = clock();
                quicksort(vetor5,1,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }

            else if(numvet==1&&tipovet==2)
            {
                gera_vet_desord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                quicksort(vetor,1,10);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }

            }
            else if(numvet==2&&tipovet==2)
            {
                gera_vet_desord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                quicksort(vetor2,1,100);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==2)
            {
                gera_vet_desord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                quicksort(vetor3,1,1000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }

            }
            else if(numvet==4&&tipovet==2)
            {
                gera_vet_desord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                quicksort(vetor4,1,10000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }

            }
            else if(numvet==5&&tipovet==2)
            {
                gera_vet_desord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                quicksort(vetor5,1,100000);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }

            }

            else if(numvet==1&&tipovet==3)
            {
                gera_quase_ord(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                quicksort(vetor,0,10-1);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }

            }
            else if(numvet==2&&tipovet==3)
            {
                gera_quase_ord(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                quicksort(vetor2,0,100-1);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==3)
            {
                gera_quase_ord(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                quicksort(vetor3,0,1000-1);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }

            }
            else if(numvet==4&&tipovet==3)
            {
                gera_quase_ord(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                quicksort(vetor4,0,10000-1);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }


            }
            else if(numvet==5&&tipovet==3)
            {
                gera_quase_ord(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                quicksort(vetor5,0,100000-1);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }

            }

            else if(numvet==1&&tipovet==4)
            {
                gera_aleatorio(vetor,10);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor,10);
                }
                tInicio = clock();
                quicksort(vetor,0,10-1);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor,10);
                }


            }
            else if(numvet==2&&tipovet==4)
            {
                gera_aleatorio(vetor2,100);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor2,100);
                }
                tInicio = clock();
                quicksort(vetor2,0,100-1);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor2,100);
                }
            }
            else if(numvet==3&&tipovet==4)
            {
                gera_aleatorio(vetor3,1000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor3,1000);
                }
                tInicio = clock();
                quicksort(vetor3,0,1000-1);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor3,1000);
                }
            }
            else if(numvet==4&&tipovet==4)
            {
                gera_aleatorio(vetor4,10000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor4,10000);
                }
                tInicio = clock();
                quicksort(vetor4,0,10000-1);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor4,10000);
                }


            }
            else if(numvet==5&&tipovet==4)
            {
                gera_aleatorio(vetor5,100000);
                if(menuex==1)
                {
                    printf("\nvetor antes da ordenaçao\n");
                    print(vetor5,100000);
                }
                tInicio = clock();
                quicksort(vetor5,0,100000-1);
                if(menuex==1)
                {
                    printf("\nvetor depois da ordenaçao\n");
                    print(vetor5,100000);
                }
            }
            tFim = clock();
            get_comp();
            tempo_gasto = ( (double) (tFim - tInicio) ) / (CLOCKS_PER_SEC/1000);
            printf("\ntempo decorrido %.1f ms ",tempo_gasto);
            break;
        }
    }
}
