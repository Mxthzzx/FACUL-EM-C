/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-33 - Multiplos de 3 entre 1 e 30                    *
********************************************************************/

#include <stdio.h>

int main()
{
    int i;

    for(i = 3; i <= 30; i += 3)
    {
        printf("%d\n", i);
    }

    return 0;
}
