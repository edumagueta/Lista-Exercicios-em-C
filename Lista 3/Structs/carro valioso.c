#include <stdio.h>
#include <string.h>

typedef struct {
    char modelo[50];
    float preco;
} Carro;

void carroCaro(Carro carros[], int tamanho){
    float maiorPreco = 0;
    int indiceCarroCaro = -1;

    for (int i = 0; i < tamanho; i++) {
        if (carros[i].preco > maiorPreco) {
            indiceCarroCaro = i;
        }
    }
    
    if (indiceCarroCaro != -1) {
        printf("\nCarro mais caro:\n");
        printf("Modelo: %s\n", carros[indiceCarroCaro].modelo);
        printf("Preco: R$ %.2f\n", carros[indiceCarroCaro].preco);
    }
}

int main(){
    Carro carros[5] = {
        {"Fusca", 20000.00},
        {"Civic", 90000.00},
        {"Corolla", 85000.00},
        {"Mustang", 250000.00},
        {"Fit", 70000.00}
    };

    printf("Lista de Carros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Modelo: %s, Preco: R$ %.2f\n", carros[i].modelo, carros[i].preco);
    }

    carroCaro(carros, 5);
    return 0;
}