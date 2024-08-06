#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, num3, num4 = 0, soma = 0;
    //num1 = numero armazenado
    //num2 = guardar o numero original
    //num3 = armazenar o numero atual
    //num4 = contar numero de digitos do numero

    printf("Digite um numero: ");
    scanf("%d", &num1);

    num2 = num1;
    while (num2 != 0) {
        num2 /= 10;
        ++num4;
    }
    num2 = num1;
    for (int i = 0; i < num4; i++){
        num3 = num2 % 10;
        soma += pow(num3, num4);
        num2 /= 10;
    }
    
    if (soma == num1) {
        printf("%d eh um numero Armstrong\n", num1);
    } else {
        printf("%d nao eh um numero Armstrong\n", num1);
    }
    return 0;
    
}