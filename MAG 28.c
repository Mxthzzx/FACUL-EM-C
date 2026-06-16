/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-28 - Soma dos 100 Primeiros Numeros                 *
********************************************************************/

#include <stdio.h>

int main()
{
    int soma = 0;
    int i;

    for(i = 1; i <= 100; i++)
    {
        soma += i;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
