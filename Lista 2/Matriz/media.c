#include <stdio.h>

int main(){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j, soma = 0, total = 3*3;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    float media = (float)soma / total;

    printf("A media da matriz eh: %.2f\n", media);

    return 0;
}