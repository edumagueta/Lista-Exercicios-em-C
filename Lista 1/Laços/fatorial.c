#include <stdio.h>

int main() {
    int num, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }
    
    printf("Fatorial de %d eh: %d\n", num, fatorial);
    return 0;
}