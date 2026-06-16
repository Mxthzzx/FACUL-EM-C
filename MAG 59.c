/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-59 - Assistente de Direcao                          *
********************************************************************/

#include <stdio.h>

int main()
{
    char direcao;

    printf("Digite uma letra (N, S, L ou O): ");
    scanf(" %c", &direcao);

    switch(direcao)
    {
        case 'N':
            printf("Seguir para o Norte.\n");
            break;

        case 'S':
            printf("Seguir para o Sul.\n");
            break;

        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;

        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;

        default:
            printf("Comando invalido! Pare o robo.\n");
    }

    return 0;
}
