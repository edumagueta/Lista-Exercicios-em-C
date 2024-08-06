#include <stdio.h>

float calcularMedia(int vetor[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return (float)soma / tamanho;   
}

int main(){
    int vetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    float media = calcularMedia(vetor, tamanho);

    printf("A media dos valores do vetor eh: %.2f\n", media);

    return 0;
}