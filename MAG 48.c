/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-48 - Menu com Opcao de Sair                         *
********************************************************************/

#include <stdio.h>

int main()
{
    int opcao;

    do
    {
        printf("\n1 - Mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if(opcao == 1)
        {
            printf("Voce escolheu a mensagem!\n");
        }

    } while(opcao != 2);

    printf("Programa encerrado.\n");

    return 0;
}
