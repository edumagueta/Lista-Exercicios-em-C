#include <stdio.h>

int main(){
    int matriz[3][3], i, j, escalar;

    printf("Digite os elementros da matriz 3x3: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elementro [%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o escalar: \n");
    scanf("%d", &escalar);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] *= escalar;
        }
    }

    printf("Matriz resultante: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}