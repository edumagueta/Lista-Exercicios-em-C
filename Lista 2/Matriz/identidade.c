#include <stdio.h>
#include <stdbool.h>

int main(){
    int matriz[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    int identidade = true;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0)) {
                identidade = false;
                break;
            }
        }
    }

    if (identidade) {
        printf("Eh uma matriz identidade \n");
    } else { 
        printf("Nao eh uma matriz identidade");
    }
    return 0;
}