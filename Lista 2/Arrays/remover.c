#include <stdio.h>

int main(){
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10, i, j, elemento;
    int arr2[10], k = 0; // armazenamentos

    printf("Digite o elemento que quer remover: \n");
    scanf("%d", &elemento);

    for (i = 0; i < n; i++) {
        if (arr[i] != elemento) {
            arr2[k++] = arr[i];
        }
    }
    
    printf("Resultado: \n");
    for (i = 0; i < k; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}