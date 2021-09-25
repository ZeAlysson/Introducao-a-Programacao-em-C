#include <stdio.h>
/*
    Faça um programa que leia uma matriz 3x4 de
    inteiros e, depois de ler a matriz, calcule a soma de
    todos os seus elementos positivos.
*/
#define LINHAS 3//define o numero de linhas da matriz
#define COLUNAS 2//define o numero de colunas da matriz

int main(void)
{
    int i, j, soma = 0;
    int matriz[LINHAS][COLUNAS];

    //loop criado para ler o valores das linhas e colunas da matriz
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("matriz[%d][%d] = ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //pega os valores positivos inseridos acima na matriz e soma;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] >= 0) {
                soma += matriz[i][j];
            }     
        }
    }

    //exibi o resultado da soma apenas dos valores positivos inseridos na matrizs
    printf("\n\nSoma dos elementos positivos = %d", soma);

    return 0;
}
