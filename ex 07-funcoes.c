#include <stdio.h>

int main(){
    int opcao;
    printf("--------MENU---------\n");
    printf("[1]Área do triângulo\n");
    printf("[2]Maior entre 3 números\n");
    printf("[3]Tabuada do N\n");
    printf("[0]Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d",&opcao);
    if(opcao==1){
        printf("Calcular a área do triângulo\n");
    }
    else if(opcao==2){
        printf("Maior entre os 3\n");
    }
    else if(opcao==3){
        printf("Tabuada\n");
    }
    else if(opcao==0){
        printf("Já vai tarde, animal!!!\n");
    }
    else{
        printf("Opção inválida!!!\n");
    }
}