#include <stdio.h>

/* imprime a tabela de conversão Fahrenheit-Celsius
    para farh = 0, 20, ..., 300; versão com ponto flutuante*/

int main(){
    for (int f = 300; f>=0; f-=20){
        printf("%3d %6.1f\n", f, (5.0/9.0)*(f-32.0));
    }
//    double farh, celsius;
//    int lower, upper, step;

//    lower = 0;
//    upper = 300;
//    step = 20;
//
//    farh = lower;

//    printf("%3s %6s\n", "ºF", "ºC");
//    while (farh <= upper){
//        celsius = (5.0/9.0)*(farh-32.0);
//        printf("%3.0f %6.1f\n", farh, celsius);
//        farh+=step;
//    }


}