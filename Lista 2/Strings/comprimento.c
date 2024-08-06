#include <stdio.h>
#include <string.h>

int main(){
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    printf("O comprimento da string eh: %d\n", length);
    return 0;
}