#include <stdio.h>

int main(){

    int fator1;
    int fator2;
    int produto;

    printf("Insira o primeiro número: ");
    scanf("%d", &fator1);

    printf("Insira o segundo número: ");
    scanf("%d", &fator2);

    produto = fator1 * fator2;
    
    printf("%d x %d = %d\n", fator1, fator2, produto);

}