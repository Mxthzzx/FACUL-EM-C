/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-35 - Sequencia de Fibonacci                         *
********************************************************************/

#include <stdio.h>

int main()
{
    int n;
    int primeiro = 0;
    int segundo = 1;
    int terceiro;
    int i;

    printf("Quantidade de termos: ");
    scanf("%d", &n);

    printf("Fibonacci:\n");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", primeiro);

        terceiro = primeiro + segundo;
        primeiro = segundo;
        segundo = terceiro;
    }

    printf("\n");

    return 0;
}
