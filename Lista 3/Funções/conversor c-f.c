#include <stdio.h>
#include <ctype.h>

float celsiusFahrenheit(float celsius){
    return (celsius * 9 / 5) + 32;
}

float fahrenheitCelsius(float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}

int main(){
    float temperatura;
    char escala;

    printf("Digite a temperatura seguida da escala sem espaco (ex: 23C, 100F): ");
    scanf("%f%c", &temperatura, &escala);

    escala = toupper(escala);

    if (escala == 'C') {
        float resultado = celsiusFahrenheit(temperatura);
        printf("%.2fC eh igual a %.2fF\n", temperatura, resultado);
    } else if (escala == 'F') {
        float resultado = fahrenheitCelsius(temperatura);
        printf("%.2fF eh igual a %.2fC\n", temperatura, resultado);
    } else {
        printf("Escala invalida. Use 'C' para Celsius ou 'F' para Fahrenheit");
    }
    return 0;
}