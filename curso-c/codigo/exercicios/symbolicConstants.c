#include <stdio.h>

#define LOWER  0
#define UPPER  300
#define STEP  20
/* imprime a tabela de conversão Fahrenheit-Celsius
    para farh = 0, 20, ..., 300; versão com ponto flutuante*/

int main(){

    for(int farh = LOWER; farh <= UPPER; farh+=STEP){
        printf("%3d %6.1f\n", farh, (5.0/9.0)*(farh-32));
    }

}