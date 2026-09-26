#include <stdio.h>

int main(){
    int c;

    /*verificar se getchar() != EOF é 0 ou 1 */
    printf("%d\n", getchar() != EOF);

    /*imprimir o valor de EOF*/
    int eof = EOF;
    printf("%d\n", eof);

    /*
    while ((c = getchar()) != EOF){
        putchar(c);
    }
    */
}