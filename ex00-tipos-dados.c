//Estrutura básica de um programa em C

#include <stdio.h>
// a biblioteca stdio.h serve para utilizarmos funções de entrada e saída como "printf();" e "scanf();"

int main(){     //main() é a função principal
    //programação
    return 0;   //se o programa executar corretamente e chegar até aqui, retornamos 0 para indicar que "deu certo!"
}
//-----------------------------------------
//Exemplo de um programa com impressão em tela
#include <stdio.h>
int main(){
    printf("Meu primeiro print em tela!");
    return 0;
}
//-----------------------------------------
//Exemplo de um programa com impressão de tipos de dados 
#include <stdio.h>
int main(){
    printf("Imprimindo o número inteiro: %d\n",10);
    printf("Imprimindo o número real: %f\n",10.5);
    printf("Imprimindo o caractere: %c\n",'a');
    printf("Imprimindo o resultado real: %g\n",3*2.57);
    printf("Imprimindo o resultado inteiro: %i\n",57-20);
    // o Código \n significa quebra de linha
    printf("A soma de %d + %d = %d\n",3,5,3+5);
    return 0;
}
//-----------------------------------------
//Exemplo de um programa com impressão em tela
#include <stdio.h>
int main(){
    short int inteiroPequeno;  //declaração de inteiro - 2 Bytes
    int inteiro;  //declaração de inteiro - ocupa 4 Bytes
    long int inteiroGrande;  //declaração de inteiro - ocupa 8 Bytes
    float real; //declaração de tipo real - ocupa 4 Bytes
    double realGrande; //declaração de tipo real - ocupa 8 Bytes
    printf("short: %d Bytes\n",sizeof(short));
    printf("int: %d Bytes\n",sizeof(int));
    printf("long: %d Bytes\n",sizeof(long));
    printf("float: %d Bytes\n",sizeof(float));
    printf("double: %d Bytes\n",sizeof(double));
}

