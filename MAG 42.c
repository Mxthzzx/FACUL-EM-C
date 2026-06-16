/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-42 - Quantidade de Numeros Impares                  *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int contador = 1;
    int impares = 0;

    while(contador <= 10)
    {
        printf("Digite o %d numero: ", contador);
        scanf("%d", &numero);

        if(numero % 2 != 0)
        {
            impares++;
        }

        contador++;
    }

    printf("Quantidade de impares: %d\n", impares);

    return 0;
}
