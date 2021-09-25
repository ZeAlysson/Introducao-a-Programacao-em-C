/*
Leia um valor e fa�a um programa que coloque o valor lido na primeira posi��o de um vetor N[10]. 
Em cada posi��o subsequente, coloque o dobro do valor da posi��o anterior. Por exemplo, se o 
valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor 
em seguida.

Entrada
A entrada cont�m um valor inteiro (V<=50).

Sa�da
Para cada posi��o do vetor, escreva "N[i] = X", onde i � a posi��o do vetor e X � o valor 
armazenado na posi��o i. O primeiro n�mero do vetor N (N[0]) ir� receber o valor de V.
*/

#include <stdio.h>

int main(void) {

    int vetor[10], nValor, i;

    scanf("%d", &nValor);//Ler o valor de N

    //cria um loop de acordo com o valor de posi��es do vetor[10]
    for (i = 0; i < 10; i++) {
        vetor[i] = nValor;//define o valor inserido pelo usuario como primeiro valor do vetor[10]
        printf("N[%d] = %d\n", i, nValor);//imprime o valor de cada posi��o

        nValor = nValor*2;//nValor � definido como o dobro do ultimo valor rodado no loop 
    }
    
    
    return 0;
}
