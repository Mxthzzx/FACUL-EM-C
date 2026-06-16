/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-57 - Central do Brinquedo Eletronico                *
********************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char cor[20];

    printf("Digite a cor: ");
    scanf("%s", cor);

    if(strcmp(cor, "Verde") == 0)
    {
        printf("Vamos brincar la fora!\n");
    }
    else if(strcmp(cor, "Amarelo") == 0)
    {
        printf("Estou ficando com soninho...\n");
    }
    else if(strcmp(cor, "Vermelho") == 0)
    {
        printf("Estou com fome, hora do lanche!\n");
    }
    else
    {
        printf("Cor desconhecida.\n");
    }

    return 0;
}
