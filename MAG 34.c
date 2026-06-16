/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-34 - Verificar Numero Primo                         *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int divisores = 0;
    int i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++)
    {
        if(numero % i == 0)
        {
            divisores++;
        }
    }

    if(divisores == 2)
    {
        printf("Numero Primo\n");
    }
    else
    {
        printf("Nao e Primo\n");
    }

    return 0;
}
