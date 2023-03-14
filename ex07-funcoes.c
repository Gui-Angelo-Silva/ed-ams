#include <stdio.h>

float calcularAreaTriangulo(float base, float altura);
int retornarMaiorDos3(int n1, int n2, int n3);
void mostrarTabuada(int numero);

int main()
{
    int opcao, n1, n2, n3, maior;
    float base, altura;
    while (1)
    {
        printf("--------MENU---------\n");
        printf("[1]Área do triângulo\n");
        printf("[2]Maior entre 3 números\n");
        printf("[3]Tabuada do N\n");
        printf("[0]Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        if (opcao == 1)
        {
            printf("Calcular a área do triângulo\n");
            printf("Digite a base e a altura: ");
            scanf("%f %f", &base, &altura);
            printf("Área do triângulo: %g\n", calcularAreaTriangulo(base, altura));
        }
        else if (opcao == 2)
        {
            printf("Digite 3 valores: \n");
            scanf("%d %d %d", &n1, &n2, &n3);
            maior = retornarMaiorDos3(n1, n2, n3);
            printf("O maior dos 3 é: %d\n", maior);
        }
        else if (opcao == 3)
        {
            printf("Digite o número para a tabuada: \n");
            scanf("%d", &n1);
            mostrarTabuada(n1);
        }
        else if (opcao == 0)
        {
            printf("Já vai tarde, animal!!!\n");
            break;
        }
        else
        {
            printf("Opção inválida!!!\n");
        }
    }
}

float calcularAreaTriangulo(float base, float altura)
{
    return base * altura / 2;
}

int retornarMaiorDos3(int n1, int n2, int n3)
{
    int maior = n1;
    if (maior < n2)
        maior = n2;
    if (maior < n3)
        maior = n3;
    return maior;
}

void mostrarTabuada(int numero)
{
    for (int i = 1; i < 11; i++)
        printf("%d * %d = %d\n", numero, i, numero * i);
}