#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Insira numero positivo\n");
        return 1;
    }
    
    printf("Seguencia de collatz para %d: ", num);

    while (num != 1)
    {
        printf("%d ", num);
        if (num % 2 == 0)
        {
            num = num / 2;
        } else
        {
            num = 3 * num + 1;
        }
    }
    printf("1\n");
    return 0;
}