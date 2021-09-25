#include <stdio.h>
#include <stdlib.h>

/*
    Crie um array de 10 elementos com elementos aleatorios em cada uma das
    posicoes. Depois copie os elementos para um array, multiplicando o valor por 2.
*/

#define QTD_ARRAYS 10

int main(void)
{
    int arrayA[10], arrayB[10], i;

    srand(time(NULL));

    for (i = 0; i < QTD_ARRAYS; i++)
    {
        arrayA[i] = rand() % 100;
        arrayB[i] = arrayA[i]*2;
        printf("ArrayA[%d]: %d\n", i, arrayA[i]);
    }

    printf("\n");

    for (i = 0; i < QTD_ARRAYS; i++)
    {
        printf("ArrayB[%d]: %d\n", i, arrayB[i]);
    }
    
    

    return 0;
}


