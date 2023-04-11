#include <stdio.h>
#include <string.h>
#define N 3
struct Dados
{
    int codigo;
    char nome[30];
    float media;
};
typedef struct Dados Dados;

void preencherVetor(Dados aluno[]);
void mostrarVetorStruct(Dados aluno[]);
void trocaValoresVetor(Dados aluno[], int i);
int main()
{
    Dados aluno[N], aux;
    preencherVetor(aluno);
    mostrarVetorStruct(aluno);

    printf("\n\n------------Ordenação por médias----------\n");
    for (int i = 0; i < N - 1; i++)
    {
        if (aluno[i].media > aluno[i + 1].media)
        {
            trocaValoresVetor(aluno, i);
            i=-1;
        }
    }
    mostrarVetorStruct(aluno);
    printf("\n\n-------Ordenação por nomes----------\n");
    for (int i = 0; i < N - 1; i++)
    {
        if (strcmp(aluno[i].nome, aluno[i + 1].nome) > 0)
        {
            trocaValoresVetor(aluno, i);
            i=-1;
        }
    }
    mostrarVetorStruct(aluno);
}
void preencherVetor(Dados aluno[]){
    for (int i = 0; i < N; i++)
    {
        printf("Código: ");
        scanf(" %d", &aluno[i].codigo);
        printf("Nome: ");
        scanf("%s", aluno[i].nome);
        printf("Média..: ");
        scanf(" %f", &aluno[i].media);
    }
}
void mostrarVetorStruct(Dados aluno[])
{
    for (int i = 0; i < N; i++)
    {
        printf("Código.: %d\n", aluno[i].codigo);
        printf("Nome...: %s\n", aluno[i].nome);
        printf("Média..: %g\n", aluno[i].media);
        printf("--------------------\n");
    }
}

void trocaValoresVetor(Dados aluno[], int i)
{
    Dados aux;
    aux = aluno[i];
    aluno[i] = aluno[i + 1];
    aluno[i + 1] = aux;
}