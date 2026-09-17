#include <stdio.h>
#include <stdint.h>

int main() {
    // Guarda o número cru num inteiro de 64 bits sem sinal
    uintptr_t endereco_bruto = 0xffffeee4b7b0;

    // Na mão grande: "compilador, esse número agora é um ponteiro para int"
    int *ptr = (int *)endereco_bruto;

    // Tenta ler o que tem lá
    printf("Tentando ler o valor: %d\n", *ptr);

    // Tenta escrever na marra
    //*ptr = 42;

    return 0;
}