#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetA[N],vetB[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetA[i]=rand()%21;
    }
    for(int i=0; i<N; i++){
        vetB[i]= vetA[4-i];
    }
    for(int i=0; i<N; i++){
        printf("vetA[%d] =%3d - vetB[%d] =%3d\n",i,vetA[i],i,vetB[i]);
    }
}