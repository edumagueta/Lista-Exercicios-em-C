#include <stdio.h>
#include <string.h>

int main(){
    char original[100], copia[100];

    printf("Digite uma string: ");
    fgets(original, sizeof(original), stdin);
    original[strcspn(original, "\n")] = '\0';

    strcpy(copia, original);

    printf("String copiada: %s\n", copia);
    return 0;
}