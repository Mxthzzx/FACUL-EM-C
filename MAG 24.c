/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-24 - Pode Votar?                                    *
********************************************************************/

#include <stdio.h>

int main()
{
    int idade;

    scanf("%d", &idade);

    if(idade >= 16)
        printf("Pode votar.\n");
    else
        printf("Nao pode votar.\n");

    return 0;
}
