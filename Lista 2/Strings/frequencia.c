#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256

int main() {
    char str[100];
    int freq[MAX_CHAR] = {0}, length, i;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    for (i = 0; i < length; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Frequencia de cada caractere:\n");
    for (i = 0; i < MAX_CHAR; i++) {
        if (freq[i] != 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    return 0;
}