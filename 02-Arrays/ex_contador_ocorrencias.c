#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Crie um array de 10 elementos com elementos aleatorios em cada uma das
    posicoes. Exiba quantas vezes cada um dos valores existe no array;
*/

#define QTD_ARRAYS 10

int main(void)
{
    int i, j, elementos[QTD_ARRAYS], contador[QTD_ARRAYS];

    srand(time(NULL));

    for (i = 0; i < QTD_ARRAYS; i++)
    {
        elementos[i] = rand() % 100;
        printf("elemento[%d]: %d\n", i, elementos[i]);
    }

/*
    for (i = 0; i < TAMANHO_ARRAY; i++) {
        for (j = 0; j < TAMANHO_ARRAY; j++) {
            if ((i != j) && (numeros[i] == numeros[j])) {
                contador[i]++;
            }
        }
    }

    for (i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Ocorrencias de numero no indice %d: %d\n", i, contador[i]);
    }

*/
    
    return 0;
}
