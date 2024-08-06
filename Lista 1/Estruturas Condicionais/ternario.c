#include <stdio.h>

int main() {
    int num1, num2, maior;
    
    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1, &num2);

    maior = (num1 > num2) ? num1 : num2; //?

    printf("O maior numero eh: %d\n", maior);

    return 0;
}