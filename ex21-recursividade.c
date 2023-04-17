#include <stdio.h>

int fat(int numero);
int main(){
    int numero=5, fatorial;
    printf("Fatorial de %d é: %d\n",numero,fat(numero));
}

int fat(int numero){
    if(numero == 0)
        return 1;
    else
        return numero * fat(numero-1);
}