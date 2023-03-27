#include <stdio.h>

void troca(int *num1, int *num2);
int main(){
    int num1=10, num2=20;
    printf("num1: %d - num2: %d\n",num1, num2);
    troca(&num1, &num2);
    printf("num1: %d - num2: %d\n",num1, num2);
}
void troca(int *num1, int *num2){
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}