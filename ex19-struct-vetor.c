#include <stdio.h>
#include <string.h>
#define N 2
struct Dados{
    int codigo;
    char nome[30];
    float salario;
};
typedef struct Dados Dados;
int main(){
    Dados aluno[N];
    for (int i = 0; i < N; i++){
        printf("Código: ");
        scanf(" %d", &aluno[i].codigo);
        printf("Nome: ");
        scanf("%s",aluno[i].nome);
        printf("Salário: ");
        scanf(" %f", &aluno[i].salario);
    }
    for (int i = 0; i < N; i++){
        printf("Código.: %d\n", aluno[i].codigo);
        printf("Nome...: %s\n", aluno[i].nome);
        printf("Salário: %g\n", aluno[i].salario);
        printf("--------------------\n");
    }
}