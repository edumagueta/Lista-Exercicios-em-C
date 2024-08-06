#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float media;
} Aluno;

void imprimirReprovados(Aluno alunos[], int tamanho){
    printf("Alunos reprovados:\n");
    for (int i = 0; i < tamanho; i++) {
        if (alunos[i].media < 6.0){
            printf("%s\n", alunos[i].nome);
        }
    }
}

int main(){
    Aluno alunos[5];

    strcpy(alunos[0].nome, "Joao");
    alunos[0].media = 5.5;

    strcpy(alunos[1].nome, "Maria");
    alunos[1].media = 7.8;

    strcpy(alunos[2].nome, "Carlos");
    alunos[2].media = 4.2;

    strcpy(alunos[3].nome, "Ana");
    alunos[3].media = 9.1;

    strcpy(alunos[4].nome, "Lucas");
    alunos[4].media = 5.9;

    imprimirReprovados(alunos, 5);
    return 0;
}