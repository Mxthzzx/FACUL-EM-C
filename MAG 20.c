/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-20 - Ano Bissexto                                   *
********************************************************************/

#include <stdio.h>

int main()
{
    int ano;

    scanf("%d", &ano);

    if((ano % 400 == 0) ||
      ((ano % 4 == 0) && (ano % 100 != 0)))
    {
        printf("Ano bissexto.\n");
    }
    else
    {
        printf("Ano nao bissexto.\n");
    }

    return 0;
}
