#include <stdio.h>

int main() {

    printf("Tamanho de int: %ld bytes\n", sizeof(int));
    printf("Tamanho de float: %ld bytes\n", sizeof(float));
    printf("Tamanho de double: %ld bytes\n", sizeof(double));
    printf("Tamanho de char: %ld bytes\n", sizeof(char));
    printf("Tamanho de short: %ld bytes\n", sizeof(short));
    printf("Tamanho de long: %ld bytes\n", sizeof(long));
    printf("Tamanho de long double: %ld bytes\n", sizeof(long double));
    printf("Tamanho de long long: %ld bytes\n", sizeof(long long));
    return 0;
}