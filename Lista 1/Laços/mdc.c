#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    while (num2 != 0){
        int resultado = num1 % num2;
        num1 = num2;
        num2 = resultado;
    }

    printf("O MDC eh: %d\n", num1);
    return 0;

}