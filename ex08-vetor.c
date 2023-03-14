#include <stdio.h>
#define N 5
int main(){
    int vetorIdade[5], i;
    for(int i=0; i<5; i++){
        printf("Digite a idade (%d): ",i+1);
        scanf("%d",&vetorIdade[i]);
    }
    for(int i=0; i<5; i++){
        printf("Idade do %dº: %d\n",i+1,vetorIdade[i]);
    }
}