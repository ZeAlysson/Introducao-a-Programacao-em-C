#include <stdio.h>

/*
3) Fa�a um programa em C que leia 2 valores inteiros e chame uma fun��o que receba estas 
2 variaveis e troque o seu conte�do, ou seja, esta fun��o � chamada passando duas variaveis, 
A e B por exemplo, e ap�s a execu��o da fun��o, A conter� o valor de B e B ter� o valor de A.
*/

trocaValores(int *a, int *b) {

    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    printf("\n&a: %p, &b: %p", a, b);    
}

int main(void)
{
    int intA, intB;

    printf("Insira o inteiroA: ");
    scanf("%d", &intA);
    printf("Insira o inteiroB: ");
    scanf("%d", &intB);

    printf("\nintA = %d, intB = %d\n", intA, intB);
    printf("&intA: %p, &intB: %p\n", &intA, &intB);

    trocaValores(&intA, &intB);

    printf("\nintA(trocado) = %d, intB(trocado) = %d\n", intA, intB);
    
    
    return 0;
}
