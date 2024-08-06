#include <stdio.h>

int main() {
    
    int soma = 0;

    for (int i = 1; i <= 10; i++) {
        soma += i;
    }
    printf("A soma dos primeiros 10 numeros naturais eh: %d\n", soma);
    return 0;
}