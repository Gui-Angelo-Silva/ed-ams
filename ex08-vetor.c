#include <stdio.h>
#define N 2000
int main(){
    int vetorIdade[N], i;
    for(int i=0; i<N; i++){
        printf("Digite a idade (%d): ",i+1);
        scanf("%d",&vetorIdade[i]);
    }
    for(int i=0; i<N; i++){
        printf("Idade do %dº: %d\n",i+1,vetorIdade[i]);
    }
}