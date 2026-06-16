/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-52 - Soma ate Multiplo de 10                        *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;

    } while(numero % 10 != 0);

    printf("Soma total = %d\n", soma);

    return 0;
}
