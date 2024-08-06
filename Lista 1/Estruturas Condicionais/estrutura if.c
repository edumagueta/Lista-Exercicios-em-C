#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero ");
    scanf("%d", &numero);

    printf ("%d eh um numero ", numero);
    if (numero >= 0) {
        printf("positivo\n");
    } else { 
        printf("negativo\n");
    }
    return 0;
}