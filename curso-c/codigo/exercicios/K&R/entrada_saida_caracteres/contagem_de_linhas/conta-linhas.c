#include <stdio.h>

/*conta linhas na entrada*/
int main(){
    int nl, c;
    nl = 0;
    while((c = getchar()) != EOF){
        if(c == '\n')
            c++;
    }
    printf("%d\n", nl);
}
