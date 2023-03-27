#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main(){
    int vetorA[N], vetorB[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetorA[i]=rand()%16;
    }
    for(int i=0; i<N; i++){
        vetorB[i] = 2*vetorA[i];
    }
    for(int i=0; i<N; i++){
        printf("VA[%d]=%2d - VB[%d]=%2d\n",i,vetorA[i],i,vetorB[i]);
    }
}