#include <stdio.h>
#include <string.h>

char palavra[20];
char chutes[26];
int tentativas = 0;

void abertura()
{
    printf("********************************\n");
    printf("*                              *\n");
    printf("*  Bem-vindo ao jogo da forca  *\n");
    printf("*                              *\n");
    printf("********************************\n\n");
}

void chuta()
{
    char chute;
    scanf(" %c", &chute);
    chutes[tentativas] = chute;
    tentativas++;
}

int jachutou(char letra)
{
    int achou = 0;
    for (int j = 0; j < tentativas; j++)
    {
        if (chutes[j] == letra)
        {
            achou = 1;
            break;
        }
    }
    return achou;
}

void desenhaforca()
{
    for (int i = 0; i < strlen(palavra); i++)
    {
        int achou = jachutou(palavra[i]);
        if (achou)
        {
            printf("%c ", palavra[i]);
        }
        else
        {
            printf("_ ");
        }
    }
    printf("\n");
}

void escolhepalavra(){
    sprintf(palavra, "melancia");
}

int main()
{
    int acertou = 0;
    int enforcou = 0;

    abertura();
    escolhepalavra();

    do
    {
        desenhaforca();
        chuta();
    } while (!acertou && !enforcou);
}