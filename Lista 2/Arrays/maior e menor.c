#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maior = arr[0];
    int menor = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > maior)
        {
            maior = arr[i];
        }
        
        if (arr[i] < menor)
        {
            menor = arr[i];
        }
    }

    printf("O maior elemento do array eh: %d\n", maior);
    printf("O menor elemento do array eh: %d\n", menor);

    return 0;
    
}