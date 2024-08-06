#include <stdio.h>

int main(){
    int num, contador = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num == 0){
        contador = 1;
    } else if (num < 0) {
        num = -num;
    }
    while (num != 0){
        num /= 10;
        contador++;
    }

    printf("O numero de digitos eh: %d\n", contador);
    return 0;
}