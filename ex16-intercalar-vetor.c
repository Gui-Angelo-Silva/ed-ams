#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int A[N], B[N], C[2*N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        A[i]=rand()%11;
        B[i]=rand()%11;
        printf("\n\nA[%d]=%2d     -     B[%d]=%2d\n",i,A[i],i,B[i]);
    }
/*     for(int i=0; i<2*N; i+=2){
        C[i]   = A[i/2];
        C[i+1] = B[i/2];
    }*/
    for(int i=0; i<N; i++){
        C[i*2]   = A[i];
        C[i*2+1] = B[i];
    }
     printf("\n");
    for(int i=0; i<2*N; i++){
        printf("C[%d]=%2d\n",i,C[i]);
    }
}