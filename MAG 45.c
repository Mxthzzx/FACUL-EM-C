/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-45 - Menu ate Escolher Sair                         *
********************************************************************/

#include <stdio.h>

int main()
{
    int opcao = 0;

    while(opcao != 4)
    {
        printf("\nMENU\n");
        printf("1 - Consultar\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");

        printf("Escolha: ");
        scanf("%d", &opcao);
    }

    printf("Programa encerrado.\n");

    return 0;
}
