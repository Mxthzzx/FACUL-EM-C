/********************************************************************
* Aluno: MATHEUS ALVES GOMES           RA: 0028304                  *
* Programa MAG-15 - Quantas caixas cabem no caminhão               *
********************************************************************/

#include <stdio.h>

int main()
{
    int altCam, largCam, compCam;
    int altCx, largCx, compCx;
    int totalCaixas;

    printf("Altura, largura e comprimento do caminhao: ");
    scanf("%d%d%d", &altCam, &largCam, &compCam);

    printf("Altura, largura e comprimento da caixa: ");
    scanf("%d%d%d", &altCx, &largCx, &compCx);

    totalCaixas =
        (altCam / altCx) *
        (largCam / largCx) *
        (compCam / compCx);

    printf("Quantidade de caixas: %d\n", totalCaixas);

    return 0;
}
