#include <stdio.h>

int main() {
    int num1, num2, num3, maior, menor; //acrescentei o menor
    
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 >= num2 && num1 >= num3){
        maior = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    if(num1 <= num2 && num1 <= num3){
        menor = num1;
    } else if(num2 <= num1 && num2 <= num3) {
        menor = num2;
    } else {
        menor = num3;
    }

    printf("Numero maior eh: %d\n", maior);
    printf("Numero menor eh: %d", menor);

    return 0;
}