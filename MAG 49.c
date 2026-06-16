/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-49 - Pedir Senha ate Acertar                        *
********************************************************************/

#include <stdio.h>

int main()
{
    int senha;

    do
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);

    } while(senha != 1111);

    printf("Acesso liberado!\n");

    return 0;
}
