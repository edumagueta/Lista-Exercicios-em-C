#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Digite a string principal: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a string a ser verificada: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strstr(str1, str2) != NULL) {
        printf("'%s' eh uma substring de '%s'.\n", str2, str1);
    } else {
        printf("'%s' nao eh uma substring de '%s'.\n", str2, str1);
    }

    return 0;
}
