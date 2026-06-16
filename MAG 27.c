/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-27 - Tabuada de um Numero                           *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
