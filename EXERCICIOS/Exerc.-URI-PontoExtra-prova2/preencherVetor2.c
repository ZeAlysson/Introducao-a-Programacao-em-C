/*
Fa�a um programa que leia um valor T e preencha um vetor N[1000] com a sequ�ncia de valores 
de 0 at� T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada cont�m um valor inteiro T (2 ? T ? 50).

Sa�da
Para cada posi��o do vetor, escreva "N[i] = x", onde i � a posi��o do vetor e x � o valor 
armazenado naquela posi��o.
*/

#include <stdio.h>

int main(void)
{
    int N[1000], T;
    int i, j;

    scanf("%d", &T);

    for (i = 0, j = 0; i < 1000; i++) {
        //Inicio ciclo
        printf("N[%d] = %d\n", i, j);//imprime a primeira linha N[0] = 0
        ++j;//adiciona +1 valor em j a cada loop

        if (j == T) {//no ciclo qual j for igual ao valor inserido, j retornar� ao valor 0
            j = 0;
        } 
        //Fim Ciclo 
    }
    
    
    return 0;
}
