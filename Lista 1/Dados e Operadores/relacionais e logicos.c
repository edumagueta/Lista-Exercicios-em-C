#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite três números:\n");

    printf("Número 1: ");
    scanf("%d", &a);

    printf("Número 2: ");
    scanf("%d", &b);

    printf("Número 3: ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("Todos os números são iguais.\n");
    } else if (a == b || a == c || b == c) {
        printf("Dois números são iguais.\n");
    } else {
        printf("Nenhum número é igual.\n");
    }
    return 0;
}