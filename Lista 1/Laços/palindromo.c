#include <stdio.h>

int main(){
    int num1, num2, num3, num4 = 0;
    //num1 = numero armazenado
    //num2 = guardar o numero original
    //num3 = armazenar o numero atual
    //num4 = numero reverso

    printf("Digite um numero: ");
    scanf("%d", &num1);

    num2 = num1;

    while (num1 != 0)
    {
        num3 = num1 % 10;
        num4 = num4 * 10 + num3;
        num1 /= 10;
    }

    if (num2 == num4)
    {
        printf("%d eh um palindromo\n", num2);
    } else {
        printf("%d nao eh um palindromo", num2);
    }
    return 0;
}