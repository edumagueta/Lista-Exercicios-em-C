#include <stdio.h>

int main(){
    int num1 = 0, num2 = 1, i, num3;

    //f0 = 0
    //f1 = 1
    //fn = fn-1 + fn-2
    //f3 = f2 + f1
    //f3 = (f1+f0) + f1
    //f3 = 1 + 1 = 2

    for (i = 1; i <= 10; i++){ 
        printf("%d\n", num1);
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    return 0;
}