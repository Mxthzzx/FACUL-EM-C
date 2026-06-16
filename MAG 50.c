/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-50 - Numero Positivo Obrigatorio                    *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;

    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

    } while(numero <= 0);

    printf("Numero valido: %d\n", numero);

    return 0;
}
