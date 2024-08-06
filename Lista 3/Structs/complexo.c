#include <stdio.h>

typedef struct {
    float real, imaginario;
} Complexo;

void imprimirComplexo(Complexo c){
    if (c.imaginario == 0) {
        printf("%.2f\n", c.real);
    } else if (c.imaginario > 0) {
        printf("%.2f + %.2fi\n", c.real, c.imaginario);
    } else {
        printf("%.2f - %.2fi\n", c.real, c.imaginario);
    }
}

int main(){
    Complexo c1 = {3, 2};
    Complexo c2 = {5, 0};
    Complexo c3 = {4, -3};

    printf("Numero complexo 1: ");
    imprimirComplexo(c1);

    printf("Numero complexo 2: ");
    imprimirComplexo(c2);

    printf("Numero complexo 3: ");
    imprimirComplexo(c3);

    return 0;
}