#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

int preencherMatriz(int matriz[][N]);
int mostrarMatriz(int matriz[][N]);
int maiorMenorValorMatriz(int matriz[][N], int *maior, int *menor);
float mediaValorMatriz(int matriz[][N]);
int somaTotalMatriz(int matriz[][N]);
int somaDiagonalMatriz(int matriz[][N]);
int somaLinhasMatriz(int matriz[][N], int vetor[]);
int somaColunasMatriz(int matriz[][N], int vetor[]);
int mostrarVetor(int vetor[]);
int zerarVetor(int vetor[]);
int ordenarMatriz(int matriz[][N]);

int main()
{
    int matriz[N][N], maior, menor, vetor[N];
    preencherMatriz(matriz);
    mostrarMatriz(matriz);
    maiorMenorValorMatriz(matriz, &maior, &menor);
    printf("Maior........: %2d\n", maior);
    printf("Menor........: %2d\n", menor);
    printf("Média........: %2d\n", somaTotalMatriz(matriz) / (N * N));
    printf("Soma diagonal: %2d\n", somaDiagonalMatriz(matriz));
    somaLinhasMatriz(matriz, vetor);
    printf("------Soma das linhas-----\n");
    mostrarVetor(vetor);
    somaColunasMatriz(matriz, vetor);
    printf("------Soma das colunas-----\n");
    mostrarVetor(vetor);
    mostrarMatriz(matriz);
    ordenarMatriz(matriz);
    mostrarMatriz(matriz);
}

int preencherMatriz(int matriz[][N])
{
    int l, c;
    srand(time(NULL));
    for (l = 0; l < N; l++)
    {
        for (c = 0; c < N; c++)
        {
            matriz[l][c] = rand() % 11;
        }
    }
    return 0;
}
int mostrarMatriz(int matriz[][N])
{
    int l, c;
    printf("\n\n\n\n");
    for (l = 0; l < N; l++)
    {
        for (c = 0; c < N; c++)
        {
            printf("%2d  ", matriz[l][c]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
int maiorMenorValorMatriz(int matriz[][N], int *maior, int *menor)
{
    int l, c;
    *maior = *menor = matriz[0][0];
    for (l = 0; l < N; l++)
    {
        for (c = 0; c < N; c++)
        {
            if (matriz[l][c] > *maior)
                *maior = matriz[l][c];
            else if (matriz[l][c] < *menor)
                *menor = matriz[l][c];
        }
    }
    return 0;
}

int somaTotalMatriz(int matriz[][N])
{
    int l, c, total = 0;
    for (l = 0; l < N; l++)
        for (c = 0; c < N; c++)
            total += matriz[l][c];
    return total;
}
int somaDiagonalMatriz(int matriz[][N])
{
    int l, total = 0;
    for (l = 0; l < N; l++)
        total += matriz[l][l];
    return total;
}

int somaLinhasMatriz(int matriz[][N], int vetor[])
{
    int l, c;
    zerarVetor(vetor);
    for (l = 0; l < N; l++)
        for (c = 0; c < N; c++)
            vetor[l] += matriz[l][c];
    return 0;
}
int somaColunasMatriz(int matriz[][N], int vetor[])
{
    int l, c;
    zerarVetor(vetor);
    for (c = 0; c < N; c++)
        for (l = 0; l < N; l++)
            vetor[c] += matriz[l][c];
    return 0;
}
int mostrarVetor(int vetor[])
{
    for (int i = 0; i < N; i++)
    {
        printf("%2d  ", vetor[i]);
    }
    printf("\n");
    return 0;
}
int zerarVetor(int vetor[]){
    for(int i=0; i<N; i++)
        vetor[i]=0;
    return 0;
}
int ordenarMatriz(int matriz[][N]){
    int vetor[N*N], c, l, i=0, aux;
    for(c=0;c<N;c++){
        for(l=0;l<N;l++){
            vetor[i++]=matriz[c][l];
        }
    }
    for(i=0;i<N*N;i++){
        if(vetor[i]>vetor[i+1]){
            aux = vetor[i];
            vetor[i] = vetor[i+1];
            vetor[i+1] = aux;
            i=-1;
        }
    }
    i=0;
    for(c=0;c<N;c++){
        for(l=0;l<N;l++){
            matriz[c][l]=vetor[i++];
        }
    }
    return 0;
}