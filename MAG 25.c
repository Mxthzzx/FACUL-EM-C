/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-25 - Notas e Aprovacao                              *
********************************************************************/

#include <stdio.h>

int main()
{
    float media;

    scanf("%f", &media);

    if(media >= 7)
        printf("Aprovado\n");
    else if(media >= 5)
        printf("Recuperacao\n");
    else
        printf("Reprovado\n");

    return 0;
}
