#include <stdio.h>

void soma(int* num, int a, int b){
    (*num) = a + b;
}

int main(){
    int resultado = 0;

    printf("antes: %d\n", resultado);

    soma(&resultado, 25, 75);

    printf("depois: %d\n", resultado);
}
