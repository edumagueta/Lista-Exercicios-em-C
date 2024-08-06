#include <stdio.h>

int main(){
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10, i, found = 0, target;

    printf("Digite o elemento desejado: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Elemento %d encontrado na posicao %d\n", target, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Elemento %d nao encontrado\n", target);
    }
    return 0;
}