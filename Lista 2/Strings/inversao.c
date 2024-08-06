#include <stdio.h>
#include <string.h>

int main(){
    char str[100], temp;
    int length, i;

    printf ("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    
    printf("String invertida: %s\n", str);
    return 0;
}