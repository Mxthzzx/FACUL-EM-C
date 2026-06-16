/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-47 - Tabuada de um Numero                           *
********************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    do
    {
        printf("%d x %d = %d\n",
               numero,
               contador,
               numero * contador);

        contador++;

    } while(contador <= 10);

    return 0;
}
