#include <stdio.h>

int main(){
    int num1, num2, num3, soma = 0;
    //num1 = numero armazenado
    //num2 = guardar o numero original
    //num3 = armazenar o numero atual

    printf("Digite um numero: ");
    scanf("%d", &num1);

    num2 = num1;

    while (num2 != 0)
    {
        num3 = num2 % 10;
        
        int fatorial = 1;

        for (int i = 1; i <= num2; i++) {
            fatorial *= i;
        }
        soma += fatorial;
        num2 /= 10;
    }
    
    if (soma == num1) {
        printf("%d eh um numero forte\n", num1);
    } else {
        printf("%d nao eh forte", num1);
    }
    return 0;
}