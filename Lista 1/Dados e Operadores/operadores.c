#include <stdio.h>

int main()
{
    int a, b;
    printf("Forneca dois numeros:\n");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao a por b: %.2f\n", (float)a / (float)b);
    printf("Divisao b por a: %.2f", (float)b / (float)a);

    return 0;
}