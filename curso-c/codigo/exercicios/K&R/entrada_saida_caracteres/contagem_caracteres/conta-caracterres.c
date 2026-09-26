#include <stdio.h>

/*conta caracteres de entrada, 1ª versão*/
/*
int main(){
    long nc = 0;
    while(getchar() != EOF){
        ++nc;
    }
    printf("%ld\n", nc);

}
*/

/*conta caracteres de entrada, 2ª versão*/

int main(){
    double nc;
    for(nc = 0; getchar() != EOF; nc++);
    printf("%0.f\n", nc);
}
