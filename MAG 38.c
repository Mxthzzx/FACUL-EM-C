/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-38 - Senha Correta                                  *
********************************************************************/

#include <stdio.h>

int main()
{
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while(senha != 1234)
    {
        printf("Senha incorreta. Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso liberado!\n");

    return 0;
}
