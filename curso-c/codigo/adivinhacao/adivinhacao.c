#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int tentativa = 1;
    double pontos = 1000;
    double pontosPerdidos = 0;
    int segundos = time(0);
    int numeroSecreto = rand()%100;
    int maxTentativas;
    int dificuldade;
    int chute;
    
    // define a semente de rand() como o Unix time atual (time(0))
    srand(segundos);

    // imprime cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n\n");

    printf("Selecione a dificuldade: \n(1) Fácil\n(2) Médio\n(3) Difícil\n(4)GodMod");
    scanf("%d", &dificuldade);

    switch (dificuldade){
        case 1:
            maxTentativas = 9;
            break;
        case 2:
            maxTentativas = 8;
            break;
        case 3:
            maxTentativas = 7;
        case 4:
            maxTentativas = 5;
        default:
            printf("Número inválido");
    }



    for (int i = 0; i < maxTentativas; i++){
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
