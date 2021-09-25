/*
Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequ�ncia de 1 at� Y, 
passando para a pr�xima linha a cada X n�meros.

Entrada
O arquivo de entrada cont�m dois valores inteiros, (1 < X < 20) e (X < Y < 100000).

Sa�da
Cada sequ�ncia deve ser impressa em uma linha apenas, com 1 espa�o em branco entre cada n�mero, 
conforme exemplo abaixo. N�o deve haver espa�o em branco ap�s o �ltimo valor da linha.
*/

#include <stdio.h>

int main() {

    int X, Y, i, j=0;
    
    scanf("%d%d", &X, &Y);

    if((1 < X < 20) && (X < Y < 100000)) {//condi��es da quest�o

        for (i = 1; i <= Y; i++) {//DE 1, REPETIR AT� Y com incremento de +1
                            j++;//adiciona +1 valor a cada ciclo

            printf("%d ", i);

            if (X == j) {//quando o valor de X chegar em um valor igual a j,
                printf("\n");//� pulado uma linha 
                j = 0;// a variavel j � zerada quando chegar no valor de X;
            }    
        }
    }

    return 0;
}
