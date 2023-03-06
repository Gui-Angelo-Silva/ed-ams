#include <stdio.h>
#include <math.h>
int soma(int valor1, int valor2);
int subtracao(int valor1, int valor2);
int multiplicacao(int valor1, int valor2);
float divisao(int valor1, int valor2);
int dobro(int valor1);
float raiz(int valor1);
int main(){
    int valor1=2, valor2=3;
    printf("Soma: %g\n",soma(valor1, valor2));
    printf("Subtração: %g\n",subtracao(valor1, valor2));
    printf("Multiplicação: %g\n",multiplicacao(valor1, valor2));
    printf("Divião: %g\n",divisao(valor1, valor2));
    printf("Dobro: %g\n",dobro(valor1));
    printf("Raiz: %g\n",raiz(valor1));
}
int soma(int valor1, int valor2){
    return valor1+valor2;
}
int subtracao(int valor1, int valor2){
    return valor1-valor2;
}
int multiplicacao(int valor1, int valor2){
    return valor1*valor2;
}
float divisao(int valor1, int valor2){
    return (float) valor1/valor2;
}
int dobro(int valor1){
    return valor1*2;
}
float raiz(int valor1){
    return sqrt(valor1);
}