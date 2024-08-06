#include <stdio.h>

int adicionar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Erro: Divisao por zero nao eh permitida.\n");
        return 0;
    }
}

int main(){
    int num1, num2;
    char operador;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
    case '+':
        resultado = adicionar(num1, num2);
        printf("Resultado: %d\n", (int)resultado);
        break;

    case '-':
        resultado = subtrair(num1, num2);
        printf("Resultado: %d\n", (int)resultado);
        break;

    case '*':
        resultado = multiplicar(num1, num2);
        printf("Resultado: %d\n", (int)resultado);
        break;

    case '/':
        resultado = dividir(num1, num2);
        if (num2 != 0) {
            printf("Resultado: %.2f\n", resultado);
        }
        break;
    
    default:
        printf("Operador invalido.\n");
        break;
    }
    return 0;
}
