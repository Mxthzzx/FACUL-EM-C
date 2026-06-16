/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-55 - Mostrar Maior Numero                           *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int maior = 0;

    do
    {
        printf("Digite um numero (negativo encerra): ");
        scanf("%d", &numero);

        if(numero > maior)
        {
            maior = numero;
        }

    } while(numero >= 0);

    printf("Maior numero informado: %d\n", maior);

    return 0;
}
