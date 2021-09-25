#include <stdio.h>
/*
Fa�a um programa em C que funcione como um jogo da velha, usando uma matriz
de caracteres (char) 3x3. Em loop o programa pedir� ao usu�rio o n�mero da linha
(1 at� 3) e o da coluna (1 at� 3). 
A cada vez que o usu�rio entrar com esses dados, colocar um 'X' ou 'O' no i�ndice
adequado da matriz e exibir seu conte�do na tela.
*/


int main(void) {

    int contador, linha, coluna, i, j;
    char tabuleiro[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

    contador = 0;

    do {
        contador++;
        printf("Digite a linha: ");
        scanf("%d", &linha);

        printf("Digite a coluna: ");
        scanf("%d", &coluna);

        if (contador % 2 != 0) {
            tabuleiro[linha][coluna] = 'X';
        } else {
            tabuleiro[linha][coluna] = 'O';
        }

        for (i = 0; i < 3; i++) { //linhas 
            for (j = 0; j < 3; j++) { //colunas de cada linha
                printf("| %c |", tabuleiro[i][j]);
            }
            printf("\n");
        }

    } while (contador < 9);


    return 0;
}