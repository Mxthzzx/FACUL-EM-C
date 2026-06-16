/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-22 - Par ou Impar                                   *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;

    scanf("%d", &numero);

    if(numero % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");

    return 0;
}
