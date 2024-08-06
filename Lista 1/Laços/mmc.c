#include <stdio.h>

int main(){
    int num1, num2, mmc, mdc, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    mdc = num1;
    num3 = num2;

    while (num3 != 0){
        int r = mdc % num3;
        mdc = num3;
        num3 = r;
    }

    mmc = (num1 * num2)/mdc;

    printf("O MMC eh: %d\n", mmc);
    return 0;
}