#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Crie um array de 10 elementos com elementos aleatorios em cada uma das
    posicoes. Copie e separe os elementos pares e impares em arrays distintos.
*/

#define QTD_ARRAYS 10

int main(void)
{
    //cada array terá tamanho 10
    int i, elementos[QTD_ARRAYS], 
           elementosPares[QTD_ARRAYS], 
           elementosImpares[QTD_ARRAYS];

    int nPar=0, nImpar=0;

    srand(time(NULL));

    //gera os valores aleatorios
    for (i = 0; i < QTD_ARRAYS; i++) {
        elementos[i] = rand() % 100;//os 10 valores gerando são armazenados no array
        printf("elemento[%d]: %d\n", i, elementos[i]);//exibi os valores gerados
    }

    printf("\n");

    //separa os valores aleatorios entre pares e impares
    for (i = 0; i < QTD_ARRAYS; i++) {
        //se par, será armazedo no array reservado para valores pares
        if (elementos[i] % 2 == 0) {
            elementosPares[nPar] = elementos[i];
            nPar++;
        }
        //se nãoPar/Impar, será armazenado no array reservado para valores impares
        else {
            elementosImpares[nImpar] = elementos[i];
            nImpar++;
        }
    }

    //apresenta os valores armazenados no array par, conforme a quantidade de valores pares encontrados
    for (i = 0; i < nPar; i++) {
        printf("Par[%d]: %d\n", i, elementosPares[i]);
    }

    printf("\n");

    //apresenta os valores armazenados no array impar, conforme a quantidade de valores impares encontrados
    for (i = 0; i < nImpar; i++) {
        printf("Impar[%d]: %d\n", i, elementosImpares[i]);
    }


    
    return 0;
}
