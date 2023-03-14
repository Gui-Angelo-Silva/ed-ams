#include <stdio.h>
/*3. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
infantil A =  5 -  7 anos
infantil B =  8 - 10 anos
juvenil  A = 11 - 13 anos
juvenil  B = 14 - 17 anos
adulto = maiores de 18 anos*/

int main(){
    short idade;
    printf("Digite a idade: ");
    scanf("%hd",&idade);
    if(idade < 8) printf("infantil A\n");
    else if(idade < 11) printf("infantil B\n");
    else if(idade < 14) printf("juvenil A\n");
    else if(idade < 18) printf("juvenil B\n");
    else printf("Adulto\n");
}