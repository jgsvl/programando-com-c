#include <stdio.h>
int main(){

    char letras[10];

    int inteiros[10];
    printf(
        "char:\n pos 0: %p\n pos 1: %p\n pos 2: %p\n pos 3: %p\n pos 4: %p\n pos 5: %p\n pos 6: %p\n pos 7: %p\n pos 8: %p\n pos 9: %p\n array: %p\n", 
    &letras[0], &letras[1], &letras[2], &letras[3], &letras[4], &letras[5],
     &letras[6], &letras[7], &letras[8], &letras[9], letras);

         printf(
        "inteiros:\n pos 0: %p\n pos 1: %p\n pos 2: %p\n pos 3: %p\n pos 4: %p\n pos 5: %p\n pos 6: %p\n pos 7: %p\n pos 8: %p\n pos 9: %p\n array: %p\n", 
    &inteiros[0], &inteiros[1], &inteiros[2], &inteiros[3], &inteiros[4], &inteiros[5],
     &inteiros[6], &inteiros[7], &inteiros[8], &inteiros[9], inteiros);
}