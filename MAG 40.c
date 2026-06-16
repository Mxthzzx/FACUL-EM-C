/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-40 - Tabuada com WHILE                              *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(contador <= 10)
    {
        printf("%d x %d = %d\n",
               numero,
               contador,
               numero * contador);

        contador++;
    }

    return 0;
}
