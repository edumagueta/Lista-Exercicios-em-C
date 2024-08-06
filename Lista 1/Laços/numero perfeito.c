#include <stdio.h>

int main(){
    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    if (soma == num && num != 0) {
        printf("%d eh um numero perfeito\n");
    } else {
        printf("%d nao eh um numero perfeito\n");
    }
    return 0;
}