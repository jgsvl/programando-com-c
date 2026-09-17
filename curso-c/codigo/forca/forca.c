#include <stdio.h>
#include <string.h>

void abertura()
{
    printf("********************************\n");
    printf("*                              *\n");
    printf("*  Bem-vindo ao jogo da forca  *\n");
    printf("*                              *\n");
    printf("********************************\n\n");
}

void chuta(char chutes[26], int *tentativas)
{
    char chute;
    scanf(" %c", &chute);
    chutes[(*tentativas)] = chute;
    (*tentativas)++;
}

int jachutou(char letra, char chutes[26], int tentativas)
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

int main()
{

    char palavra[20];
    char chutes[26];
    int tentativas = 0;

    abertura();

    sprintf(palavra, "melancia");
    printf("%s\n", palavra);

    int acertou = 0;
    int enforcou = 0;

    do
    {
        for (int i = 0; i < strlen(palavra); i++)
        {
            int achou = jachutou(palavra[i], chutes, tentativas);
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

        chuta(chutes, &tentativas);

    } while (!acertou && !enforcou);
}