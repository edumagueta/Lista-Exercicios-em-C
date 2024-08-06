#include <stdio.h>

int main(){
    int arr1[5] = {1, 7, 3, 4, 5};
    int arr2[5] = {6, 2, 8, 9, 10};
    int intercalado[10];
    int i, j = 0;

    for (i = 0; i < 5; i++) {
        intercalado[j++] = arr1[i];
        intercalado[j++] = arr2[i];
    }

    printf("Array intercalado:\n");
    
    for (i = 0; i < 10; i++) {
        printf("%d ", intercalado[i]);
    }

    printf("\n");
    
    return 0;
}