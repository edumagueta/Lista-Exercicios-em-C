#include <stdio.h>

int main(){
    int arr[4] = {4, 3, 2, 1};
    int i, j, temp, n = 4;

    printf("Array original:\n");

    for (i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {

           printf("%d %d\n", arr[j], arr[j+1]);

            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array ordenado:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}