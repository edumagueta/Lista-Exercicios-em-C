#include <stdio.h>

int main(){
    int arr[10] = {10, 9, 8, 10, 9, 9, 9, 3, 2, 1};
    int n = 10, i, j;

    printf("Array original:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Duplicados:\n");
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}