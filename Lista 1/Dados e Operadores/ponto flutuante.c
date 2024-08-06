#include <stdio.h>

int main() { 

    float num1f, num2f;
    double num1d, num2d;

    printf("Digite dois numeros de:\n");

    printf("Numero 1: ");
    scanf("%f", &num1f);

    printf("Numero 2: ");
    scanf("%f", &num2f);

    num1d = (double)num1f;
    num2d = (double)num2f;

    float soma_f = num1f + num2f;
    float subtracao_f = num1f - num2f;
    float multiplicacao_f = num1f * num2f;
    float divisao_f = num1f / num2f;

    double soma_d = num1d + num2d;
    double subtracao_d = num1d - num2d;
    double multiplicacao_d = num1d * num2d;
    double divisao_d = num1d / num2d;

    printf("\nResultados usando float:\n");
    printf("Soma: %.2f + %.2f = %.2f\n", num1f, num2f, soma_f);
    printf("Subtracaoo: %.2f - %.2f = %.2f\n", num1f, num2f, subtracao_f);
    printf("Multiplicacao: %.2f * %.2f = %.2f\n", num1f, num2f, multiplicacao_f);
    printf("Divisao: %.2f / %.2f = %.2f\n", num1f, num2f, divisao_f);

    printf("\nResultados usando double:\n");
    printf("Soma: %lf + %lf = %lf\n", num1d, num2d, soma_d);
    printf("Subtracao: %lf - %lf = %lf\n", num1d, num2d, subtracao_d);
    printf("Multiplicacao: %lf * %lf = %lf\n", num1d, num2d, multiplicacao_d);
    printf("Divisao: %lf / %lf = %lf\n", num1d, num2d, divisao_d);

    return 0;
}