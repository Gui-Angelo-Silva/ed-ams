#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main(){
    int vetorIdade[N], i;
    srand(time(NULL));  //nova semente
    for(int i=0; i<N; i++){
        vetorIdade[i]=rand()%11+10; //gera Nº aleatório de 10 a 20
    }
    for(int i=0; i<N; i++){
        printf("Idade do %dº: %d\n",i+1,vetorIdade[i]);
    }
}