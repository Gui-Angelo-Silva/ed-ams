#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetA[N],vetB[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetA[N-1-i]=rand()%21;
        vetB[i]= vetA[(N-1)-i];
        printf("vetA[%d] =%3d - vetB[%d] =%3d\n",N-1-i,vetA[N-1-i],i,vetB[i]);
    }
}