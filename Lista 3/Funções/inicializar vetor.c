#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetorAleatorio(int vetor[], int tamanho){
    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 60;
    }
}

int main(){
    int vetor[10];

    preencherVetorAleatorio(vetor, 6);

    printf("Elementos do Vetor: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}