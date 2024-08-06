#include <stdio.h>

int main() {
    // Declaração e inicialização da matriz 3x3
    int matriz[3][3] = {
        {4, 5, -3},
        {2, 1, 0},
        {3, -1, 1}
    };
    
    int determinante;

    // Cálculo do determinante
    determinante = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
                 - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
                 + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);

    // Imprimir o determinante
    printf("O determinante da matriz eh: %d\n", determinante);

    return 0;
}
