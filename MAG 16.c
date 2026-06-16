/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-16 - Multiplo de 3 e/ou 5                           *
********************************************************************/

#include <stdio.h>

int main()
{
    int numeroPedido;

    printf("Numero do pedido: ");
    scanf("%d", &numeroPedido);

    if(numeroPedido % 3 == 0 && numeroPedido % 5 == 0)
    {
        printf("Ganhou refrigerante e sobremesa.\n");
    }
    else if(numeroPedido % 3 == 0)
    {
        printf("Ganhou refrigerante.\n");
    }
    else if(numeroPedido % 5 == 0)
    {
        printf("Ganhou sobremesa.\n");
    }
    else
    {
        printf("Nao ganhou premio.\n");
    }

    return 0;
}
