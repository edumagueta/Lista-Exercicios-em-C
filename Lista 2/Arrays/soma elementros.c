#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        soma += arr[i];
    }
    printf("A somas dos elementos do array eh: %d\n", soma);
    return 0;
}