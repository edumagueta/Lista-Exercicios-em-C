#include <stdio.h>

int main() {
    char nota;

    printf("Digite uma nota (A, B, C, D ou F): ");
    scanf("%c", &nota);

    switch (nota) {
        case 'A':
        case 'a':
            printf("Excelente\n");
            break;
        case 'B':
        case 'b':
            printf("Bom\n");
            break;
        case 'C':
        case 'c':
            printf("Medio\n");
            break;
        case 'D':
        case 'd':
            printf("Ruim\n");
            break;
        case 'F':
        case 'f':
            printf("Falhou\n");
            break;
        default:
            printf("Nota invalida\n");
    }

    return 0;
}