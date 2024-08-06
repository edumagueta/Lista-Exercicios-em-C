#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        soma += arr[i];
    }

    float media = soma / 10.0;

    printf("A media do array eh: %.2f\n", media);

    return 0;
    
}