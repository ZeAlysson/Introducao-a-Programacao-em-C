/*
2) Escreva um programa em C que contenha uma fun��o que recebe como par�metros
um vetor de inteiros v, o n�mero de elementos dele (int) e ponteiros para 
vari�veis inteiras nos quais devem ser retornados os valores maximo e minimo do
vetor. A assinatura da fun��o pode ser:

void maximoMinimo(int *v, int N, int *maximo, int *minimo);
*/

#include <stdio.h>
#include <stdlib.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo) 
{
    int i;

    for (i = 0; i < N; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        
        if (i == 0) 
        {
            *maximo = v[i];
            *minimo = v[i];
        }
        if (v[i] > *maximo) 
        {
            *maximo = v[i];
        }
        if (v[i] < *minimo) 
        {
            *minimo = v[i];
        }
        
    }
}


int main(void)
{
    int *vetor;
    int valorN;
    int max, min;

    printf("Insira o tamanho do array: ");
    scanf("%d", &valorN);

    vetor = (int*)malloc(valorN*sizeof(int));

    maximoMinimo(vetor, valorN, &max, &min);

    printf("Max: %d, Min: %d\n", max, min);

    free(vetor);

    return 0;
}
