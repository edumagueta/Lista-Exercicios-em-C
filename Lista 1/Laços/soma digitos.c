#include <stdio.h>

int main(){
    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0){
        num = -num;
    }

    while (num != 0){
        soma += num % 10;
        num /= 10;
    }

    printf("A soma dos digitos eh: %d\n", soma);
    return 0;
}