#include <stdio.h>

int main () {
    int a = 2;
    int b;
    int c;

    b = ++a;
    printf("Pre-incremento:\n");
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n\n", b);

    c = a++;
    printf("Pro-incremento: \n");
    printf("Valor de a: %d\n", a);
    printf("Valor de c: %d\n", c);

    return 0;
}