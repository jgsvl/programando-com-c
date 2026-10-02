#include <stdio.h>

/*Exercício 1-12. Escreva um programa que imprima sua entrada com uma palavra
por linha.*/

int main(){
    int c;
    int anterior = EOF;
    while((c = getchar())!= EOF){
        if((anterior == ' ' || anterior == '\t')&& (c == ' ' || c == '\t')){
            continue;
        }
        anterior = c;
        if(c == ' '|| c == '\t'){
            putchar('\n');
        } else {
            putchar(c);
        }
    }
}