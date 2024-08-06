#include <stdio.h>

int main(){
    
    //Implícita
    int numi = 1;
    float numf = numi;

    printf("Conversao Implicita: \n");
    printf("Inteiro: %d\n", numi);
    printf("Float convertido: %.2f\n\n", numf);

    //Explícita
    float fnum = 1.5;
    int inum = (int)fnum;

    printf("Conversao Explicita: \n");
    printf("Float: %.2f\n", fnum);
    printf("Inteiro convertido: %d\n",inum);

    return 0;
}