#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;
    bool primo = true;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 2){
        primo = false;
    } else {
        for (int i = 2; i <= num / 2; i++){
            if(num % i == 0){
                primo = false;
                break;
            }
        }
    }
    
    if(primo){
        printf("%d eh um numero primo\n", num);
    } else {
        printf("%d nao eh um numero primo\n", num);
    }
    return 0;
}