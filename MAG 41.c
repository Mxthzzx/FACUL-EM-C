/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-41 - Numero Primo com WHILE                         *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int contador = 1;
    int divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(contador <= numero)
    {
        if(numero % contador == 0)
        {
            divisores++;
        }

        contador++;
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
