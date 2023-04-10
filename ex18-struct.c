#include <stdio.h>
#include <string.h>

struct Dados{
    int codigo;
    char nome[30];
    float salario;
};
typedef struct Dados Dados;

int main(){
    Dados aluno1, aluno2;
    aluno1.codigo = 1;
    aluno1.salario = 1000;
    strcpy(aluno1.nome, "Cristiano Pires Martins");
    printf("Código.: %d\n",aluno1.codigo);
    printf("Nome...: %s\n",aluno1.nome);
    printf("Salário: %g\n",aluno1.salario);
    printf("----------------------\n");
    aluno2.codigo = 2;
    aluno2.salario = 2000;
    strcpy(aluno2.nome, "Ana Vitória");
    printf("Código.: %d\n",aluno2.codigo);
    printf("Nome...: %s\n",aluno2.nome);
    printf("Salário: %g\n",aluno2.salario);
}