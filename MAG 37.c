/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-37 - Soma ate digitar Zero                          *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;

    printf("Digite numeros (0 para encerrar):\n");

    scanf("%d", &numero);

    while(numero != 0)
    {
        soma += numero;
        scanf("%d", &numero);
    }

    printf("Soma = %d\n", soma);

    return 0;
}
