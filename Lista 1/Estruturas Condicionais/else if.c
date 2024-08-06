#include <stdio.h>

int main() {
    int nota;
    char criterio;

    printf("Digite a nota (0-100): ");
    scanf("%d", &nota);

    if (nota >= 90 && nota <= 100){
        criterio = 'A';
    } else if (nota >= 80 && nota <= 89){ 
        criterio = 'B';
    } else if (nota >= 70 && nota <= 79){
        criterio = 'C';
    } else if (nota >= 60 && nota <= 69){
        criterio = 'D';
    } else if (nota < 60){
        criterio = 'F';
    } else { 
        printf("Nota invalida\n");
        return 0;
    }
    
    printf("Criterio %c ", criterio);
    return 0;
}