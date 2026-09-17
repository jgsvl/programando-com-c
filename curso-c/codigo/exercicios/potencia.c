#include <stdio.h>

void potencia(int* pointer_resultado, int a, int b){
    *pointer_resultado = 1;
    for (int i = 0; i < b; i++){
        *pointer_resultado = *pointer_resultado * a;
    }

    printf("%d elevado a %d = %d\n", a, b, *pointer_resultado);
}

int main(){
    int resultado;
    potencia(&resultado, -3, 3);
}
