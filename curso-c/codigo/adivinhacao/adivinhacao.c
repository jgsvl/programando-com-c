#include <stdio.h>
#include <stdlib.h>

int main()
{

    // imprime cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numeroSecreto = 42;
    int chute;
    printf("chute: %d\n", chute);
    int tentativa = 1;
    double pontos = 1000;
    double pontosPerdidos = 0;
    
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
            pontos -= pontosPerdidos;
            printf("Parabéns, você acertou na %dª tentativa!\n\n", tentativa);
            printf("Sua pontuação: %.1f\n", pontos);
            printf("Jogue de novo, você é um bom jogador!\n");
            break;
        }
        else
        {
            // Se chegou aqui, já sabemos que errou.
            printf("Você errou! ");
            pontosPerdidos += (double)(abs(chute-numeroSecreto)/(double)2);
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
