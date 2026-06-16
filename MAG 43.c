/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-43 - Soma dos Pares de 1 a 100                      *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero = 2;
    int soma = 0;

    while(numero <= 100)
    {
        soma += numero;
        numero += 2;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
