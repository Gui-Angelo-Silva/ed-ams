#include <stdio.h>

void  imprimirNome();
void  imprimirIdade(int idade);
float pegarAltura();
int   soma(int num1, int num2);

int main(){
    int idade=27;
    //float altura;
    imprimirNome();     //chamada da função
    imprimirIdade(idade);
    //altura = pegarAltura();
    //printf("Altura: %g\n",altura);
    printf("Altura: %g\n",pegarAltura());
    printf("Soma de 2 + 3: %d\n", soma(2,3));
}

void imprimirNome(){
    printf("Cristiano\n");
}
void imprimirIdade(int idade){
    printf("Idade: %d\n",idade);
}
float pegarAltura(){
    float altura;
    printf("Digite a altura: ");
    scanf("%f",&altura);
    return altura;
}
int soma(int num1, int num2){
    return num1+num2;
}