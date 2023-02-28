#include <stdio.h>
/*Faça um programa que calcule e imprima a área de um losango.*/
int main(){
    float diagonalMaior, diagonalMenor;
    printf("Digite o valor da Diagonal menor: ");
    scanf("%f",&diagonalMenor);
    printf("Digite o valor da Diagonal maior: ");
    scanf("%f",&diagonalMaior);
    printf("Área do losango é: %g\n", diagonalMaior*diagonalMenor/2 );
}