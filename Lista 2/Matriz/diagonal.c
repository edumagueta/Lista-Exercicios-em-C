#include <stdio.h>

int main(){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Elementros diagonal:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
    return 0;
    
}