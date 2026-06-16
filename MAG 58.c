/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-58 - Calculadora de 4 Operacoes                     *
********************************************************************/

#include <stdio.h>

int main()
{
    float numero1;
    float numero2;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o operador (+ - * /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    switch(operador)
    {
        case '+':
            printf("Resultado = %.2f\n", numero1 + numero2);
            break;

        case '-':
            printf("Resultado = %.2f\n", numero1 - numero2);
            break;

        case '*':
            printf("Resultado = %.2f\n", numero1 * numero2);
            break;

        case '/':
            if(numero2 != 0)
                printf("Resultado = %.2f\n", numero1 / numero2);
            else
                printf("Divisao por zero nao permitida.\n");
            break;

        default:
            printf("Operacao matematica nao reconhecida.\n");
    }

    return 0;
}
