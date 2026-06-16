/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-30 - Fatorial de um Numero                          *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    long long fatorial = 1;
    int i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++)
    {
        fatorial *= i;
    }

    printf("Fatorial = %lld\n", fatorial);

    return 0;
}
