#include <stdio.h>

int main(){
    
    char palavra[20];
    sprintf(palavra, "Melancia");
    printf("%s\n", palavra);

    int acertou = 0;
    int enforcou = 0;
    do{
        char chute;
        scanf("%c", &chute);

        for(int i = 0; i < strlen(palavra), i++){
            if (palavra[i] == chute){
                printf("A letra %c está na posição %d da palavra!", chute, i+1);
            }
        }

    } while(!acertou && !enforcou);
}