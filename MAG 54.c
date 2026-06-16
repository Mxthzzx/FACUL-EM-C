/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-54 - Validar Numero entre 1 e 5                     *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;

    do
    {
        printf("Digite um numero entre 1 e 5: ");
        scanf("%d", &numero);

    } while(numero < 1 || numero > 5);

    printf("Numero valido!\n");

    return 0;
}
