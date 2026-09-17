#include <stdio.h>

void soma(int numeros[10]){
    int soma = 0;
    for(int i = 0; i < 10; i++){
        soma += numeros[i];
    }
    printf("%d\n", soma);
}

int main(){
    int numeros[10] = {2, 6, 8, 4, 9, 45, 20, 46, 79, 3};
    soma(numeros);
}