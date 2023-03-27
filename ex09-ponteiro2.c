#include <stdio.h>

void preencherValor(int *num);
int main(){
    int valor=789;
    preencherValor(&valor);
    printf("Valor preenchido: %d\n",valor);
}
void preencherValor(int *num){
    *num = 200;
}