#include <stdio.h>

int main() {

    int a = 0;
    int b = 1;
    int resultado;

    resultado = a & b;
    printf("a & b = %d\n", resultado);

    resultado = a | b;
    printf("a | b = %d\n", resultado);

    resultado = a ^ b;
    printf("a ^ b = %d\n", resultado);

    resultado = ~a;
    printf("~a = %d\n", resultado);

    resultado = a << 2;
    printf("a << 2 = %d\n", resultado);

    resultado = a >> 2;
    printf("a >> 2 = %d\n", resultado);

    return 0;
}