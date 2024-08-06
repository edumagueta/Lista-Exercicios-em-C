#include <stdio.h>

int main(){
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); // espaço antes do %c ?

    switch (operador) {
    case '+':
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
        break;

    case '-':
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
        break;

    case '*':
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
        break;
    
    case '/':
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Divisao por zero nao eh permitida\n");
        }
        break;
    
    default:
        printf("Operador invalido");
        break;
    }
    return 0;
}