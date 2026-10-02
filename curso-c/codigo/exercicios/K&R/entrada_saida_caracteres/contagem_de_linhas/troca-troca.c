#include <stdio.h>

/*Exercício 1-10. Escreva um programa para copiar sua entrada na saída, trocando
cada tabulação por \t, cada retrocesso por \b e cada contrabarra por \\. Isso torna as
marcas de tabulação e retrocessos visíveis de forma não ambígua.*/

int main(){
    int c;
    while((c = getchar()) != EOF){
        switch(c){
            case('\t'):
                putchar('\\');
                putchar('t');
                break;
            case('\b'):
                putchar('\\');
                putchar('b');
                break;
            case('\\'):
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(c);
        }
    }
}