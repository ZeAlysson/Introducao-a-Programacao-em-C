/*
Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. 
Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o 
valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor 
em seguida.

Entrada
A entrada contém um valor inteiro (V<=50).

Saída
Para cada posição do vetor, escreva "N[i] = X", onde i é a posição do vetor e X é o valor 
armazenado na posição i. O primeiro número do vetor N (N[0]) irá receber o valor de V.
*/

#include <stdio.h>

int main(void) {

    int vetor[10], nValor, i;

    scanf("%d", &nValor);//Ler o valor de N

    //cria um loop de acordo com o valor de posições do vetor[10]
    for (i = 0; i < 10; i++) {
        vetor[i] = nValor;//define o valor inserido pelo usuario como primeiro valor do vetor[10]
        printf("N[%d] = %d\n", i, nValor);//imprime o valor de cada posição

        nValor = nValor*2;//nValor é definido como o dobro do ultimo valor rodado no loop 
    }
    
    
    return 0;
}
