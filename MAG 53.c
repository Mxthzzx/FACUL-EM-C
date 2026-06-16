/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-53 - Confirmar Saida com S                          *
********************************************************************/

#include <stdio.h>

int main()
{
    char resposta;

    do
    {
        printf("Deseja sair? (s/n): ");
        scanf(" %c", &resposta);

    } while(resposta != 's' &&
            resposta != 'S');

    printf("Programa encerrado.\n");

    return 0;
}
