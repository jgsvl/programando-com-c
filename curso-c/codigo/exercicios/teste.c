#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int segundos = time(0);
    double horas = (double)segundos/3600;
    double dias = horas/24;
    double anos = dias/365;
    double anoAtual = 1970+anos;
    int a = 3;
    int b = 2;
    double pontos = a/(double)b;
    printf("Pontos: %f\n", pontos);

    srand(segundos);
    int n = rand();
    int n1 = rand();
    int n2 = rand();
    int n3 = rand();
    int n4 = rand();
    int n5 = rand();
    int n6 = rand();
    int n7 = rand();

    printf("segundos: %d, horas: %f, dias: %f. anos: %f, ano atual: %f\n", segundos, horas, dias, anos, anoAtual);
    printf("%d %d %d %d %d %d %d %d\n", n, n1, n2, n3, n4, n5, n6, n7); 




}