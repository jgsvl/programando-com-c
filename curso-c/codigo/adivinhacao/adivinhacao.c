#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main()
{

    // imprime cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numeroSecreto = 42;
    int chute;
    int tentativa = 1;

    while (1){
        printf("\nTentativa %d\n", tentativa);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        if (chute < 0){
            printf("Insira somente números não negativos.\n");
            continue;
        }

        printf("\nSeu chute foi: %d\n", chute);

        if (chute == numeroSecreto)
        {

            printf("Parabéns, você acertou na %dª tentativa!\n\n", tentativa);
            printf("Jogue de novo, você é um bom jogador!\n");
            break;
        }
        else
        {
            // Se chegou aqui, já sabemos que errou.
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

    printf("\nFim de jogo!!\n");

}
