/*
Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores 
de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contém um valor inteiro T (2 ? T ? 50).

Saída
Para cada posição do vetor, escreva "N[i] = x", onde i é a posição do vetor e x é o valor 
armazenado naquela posição.
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

        if (j == T) {//no ciclo qual j for igual ao valor inserido, j retornará ao valor 0
            j = 0;
        } 
        //Fim Ciclo 
    }
    
    
    return 0;
}
