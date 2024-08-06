#include <stdio.h>

int main() {
    int a = 2;
    int b = 6;

    a += b;
    printf("Resultado a = %d\n", a);

    a = 2;
    a -= b;
    printf("Resultado a = %d\n", a);

    a = 2;
    a *= b;
    printf("Resultado a = %d\n", a);

    a /= b;
    printf("Resultado a = %d\n", a); 

    a %= b;
    printf("Resultado a = %d\n", a); 

    return 0;
} 