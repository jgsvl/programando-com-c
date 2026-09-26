#include <stdio.h>

int main(){
    double celsius, farh;
    int inicio, fim, passo;

    inicio = -20;
    fim = 120;
    passo = 20;
    celsius = inicio;

    while (celsius <= fim){
        farh = celsius*9.0/5.0 + 32;
        printf("%3.0f %6.1f\n", celsius, farh);
        celsius+=passo;
    }
}