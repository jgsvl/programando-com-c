#include <stdio.h>

int main()
{

    // imprime cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int tentativa = 0;
    int numeroSecreto = 42;
    int chute;

    while (tentativa < 3)
    {

        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        printf("Seu chute foi: %d\n", chute);

        if (chute == numeroSecreto)
        {
            printf("Parabéns, você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            break;
        }
        else
        {
            printf("Você errou! ");
            if (chute > numeroSecreto)
            {
                printf("O número secreto é menor\n");
            }
            else
            {
                printf("O número secreto é maior\n");
            }
            printf("Mas não desanime, tente novamente!\n");
            tentativa++;
        }
    }
}
