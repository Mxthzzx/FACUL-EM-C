/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-44 - Contar Digitos                                 *
********************************************************************/

#include <stdio.h>

int main()
{
    long int numero;
    int quantidade = 0;

    printf("Digite um numero positivo: ");
    scanf("%ld", &numero);

    while(numero > 0)
    {
        quantidade++;
        numero /= 10;
    }

    printf("Quantidade de digitos: %d\n", quantidade);

    return 0;
}
