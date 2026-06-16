/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-18 - Login Simples                                  *
********************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char usuario[30];
    char senha[30];

    printf("Usuario: ");
    scanf("%s", usuario);

    printf("Senha: ");
    scanf("%s", senha);

    if(strcmp(usuario, "admin") == 0 &&
       strcmp(senha, "1234") == 0)
    {
        printf("Acesso permitido.\n");
    }
    else
    {
        printf("Acesso negado.\n");
    }

    return 0;
}
