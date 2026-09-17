#include <stdio.h>

void potencia(int a, int b){
    int resultado = 1;
    for (int i = 0; i < b; i++){
        resultado = resultado * a;
    }

    printf("%d elevado a %d = %d\n", a, b, resultado);
}

int main(){
    potencia(3, 0);
}