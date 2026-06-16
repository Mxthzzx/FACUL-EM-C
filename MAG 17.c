/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-17 - Sensor do Parque Tematico                      *
********************************************************************/

#include <stdio.h>

int main()
{
    int altura;

    printf("Digite a altura em cm: ");
    scanf("%d", &altura);

    if(altura >= 140)
    {
        printf("Liberado.\n");
    }
    else
    {
        printf("Barrado.\n");
    }

    return 0;
}
