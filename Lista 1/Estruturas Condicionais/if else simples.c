#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Voce eh elegivel para votar!");
    } else {
        printf("Voce NAO eh elegivel para votar");
    }
    return 0;
}