#include <stdio.h>

void calcula(int* n){
    printf("calcula: %d, endereco: %p\n", (*n), n);
    (*n)++;
    printf("calcula: %d, endereco: %p\n", (*n), n);
}

int main(){
    int numero = 2;

    printf("main: %d, endereco: %p\n", numero, &numero);

    calcula(&numero);

    printf("main: %d, endereco: %p\n", numero, &numero);
}