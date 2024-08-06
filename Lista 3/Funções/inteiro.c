#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf ("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor1[] = {1, 2, 3, 4, 5};
    int vetor2[] = {10, 20, 30, 40, 50, 60, 70};

    int tamanho1 = sizeof(vetor1) / sizeof(vetor1[0]);
    int tamanho2 = sizeof(vetor2) / sizeof(vetor2[0]);

    printf("Elementos do vetor1: ");
    imprimirVetor(vetor1, tamanho1);

    printf("Elementos do vetor2: ");
    imprimirVetor(vetor2, tamanho2);

    return 0;
}