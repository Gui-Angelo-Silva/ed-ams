#include <stdio.h>

int main(){
    float temperatura;
    printf("Digite a temperatura: ");
    scanf("%f",&temperatura);
    if(temperatura<15)
        printf("FRIO\n");
    else if(temperatura<30)
        printf("Agradável\n");
    else
        printf("Quente\n");
}