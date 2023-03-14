#include <stdio.h>
/*7. (WHILE) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
    a) média do salário da população;
    b) média do número de filhos;
    c) maior salário;
    d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.  */

int main()
{
    int qtdPessoas = 0;
    float salario = 1, totalSalario=0;
    while (1)
    {
        printf("Digite o salário: ");
        scanf("%f", &salario);
        if(salario<0)
            break;
        totalSalario += salario;
        qtdPessoas++;
    }
    printf("Média salarial: %g R$ por pessoa.\n", totalSalario / qtdPessoas);
}