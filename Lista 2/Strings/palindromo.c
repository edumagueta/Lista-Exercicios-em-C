#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    int length, i, j, palindromo = 1;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    for (i = 0, j = length - 1; i < j; i++, j--) {

        if (tolower(str[i]) != tolower(str[j])) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("A string eh um palindromo\n");
    } else {
        printf("Nao eh um palindromo\n");
    }
    return 0; 
}