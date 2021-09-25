/*
Faça um programa em C que funcione como um jogo da velha, usando uma matriz
de caracteres (char) 3x3. Em loop o programa pedirá ao usuário o número da linha
(1 até 3) e o da coluna (1 até 3). 
A cada vez que o usuário entrar com esses dados, colocar um 'X' ou 'O' no i­ndice
adequado da matriz e exibir seu conteúdo na tela.
*/

#include <stdio.h>


int main(void)
{
    char matriz[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int LINHA, COLUNA, contador=0;
    int i, j;

    while (contador < 9)
    {
        ++contador;

        printf("Numero da linha (1 ate 3): ");
        scanf("%d", &LINHA);

        printf("Numero da coluna (1 ate 3): ");
        scanf("%d", &COLUNA);

        if(contador % 2 != 0) {
            matriz[LINHA][COLUNA] = 'X';
        }
        else {
            matriz[LINHA][COLUNA] = 'O';
        }

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
            {
                printf("| %c |", matriz[i][j]);
            } 
            printf("\n");
        }  
    }
    
    
    return 0;
}
