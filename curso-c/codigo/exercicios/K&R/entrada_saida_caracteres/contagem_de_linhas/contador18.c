#include <stdio.h>

/*Exercício 1-8. Escreva um programa que conte espaços, caracteres de tabulação e
de nova-linha.*/

int main(){
    int c;
    int contador = 0;
    while((c = getchar()) != EOF){
        if ((c == ' ') || (c == '\n') || (c == '\t')){
            contador++;
        }
    }
    printf("%d\n", contador);
}