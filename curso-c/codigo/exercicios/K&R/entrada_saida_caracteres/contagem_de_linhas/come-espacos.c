#include <stdio.h>

/*Exercício 1-9. Escreva um programa que copie sua entrada na saída, trocando
 cada cadeia de dois ou mais espaços por um único espaço.*/

 int main(){
    int c;
    int anterior = EOF;
    while((c = getchar()) != EOF){
        if(anterior == ' ' && c == anterior){
            continue;
        }
        anterior = c;
        putchar(c);
    }
 }