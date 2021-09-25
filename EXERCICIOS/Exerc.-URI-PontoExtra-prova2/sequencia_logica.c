/*
Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, 
passando para a próxima linha a cada X números.

Entrada
O arquivo de entrada contém dois valores inteiros, (1 < X < 20) e (X < Y < 100000).

Saída
Cada sequência deve ser impressa em uma linha apenas, com 1 espaço em branco entre cada número, 
conforme exemplo abaixo. Não deve haver espaço em branco após o último valor da linha.
*/

#include <stdio.h>

int main() {

    int X, Y, i, j=0;
    
    scanf("%d%d", &X, &Y);

    if((1 < X < 20) && (X < Y < 100000)) {//condições da questão

        for (i = 1; i <= Y; i++) {//DE 1, REPETIR ATÉ Y com incremento de +1
                            j++;//adiciona +1 valor a cada ciclo

            printf("%d ", i);

            if (X == j) {//quando o valor de X chegar em um valor igual a j,
                printf("\n");//é pulado uma linha 
                j = 0;// a variavel j é zerada quando chegar no valor de X;
            }    
        }
    }

    return 0;
}
