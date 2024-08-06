#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    int i, vogais = 0;

    printf("Digite uma String: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vogais++;
        }
    }

    printf("Numero de vogais na string: %d\n", vogais);

    return 0;
    
}