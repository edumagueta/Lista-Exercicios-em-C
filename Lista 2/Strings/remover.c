#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, j;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Digite o caractere a ser removido: ");
    scanf(" %c", &ch);

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String resultante: %s\n", str);

    return 0;
}
