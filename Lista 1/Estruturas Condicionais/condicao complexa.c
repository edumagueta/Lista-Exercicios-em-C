#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta;

    printf("Coeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        printf("As raizes sao reais e distintas\n");
    } else if (delta == 0) {
        printf("As raizes sao reais e iguais");
    } else {
        printf("As raizes sao imaginarias");
    }
    return 0;
}