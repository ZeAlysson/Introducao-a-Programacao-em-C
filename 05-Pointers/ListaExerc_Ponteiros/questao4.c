#include <stdio.h>


#define TAMANHO_ARRAY 5

mudaValores(int array[], int valor) {
    
    int i;

    for (i = 0; i < TAMANHO_ARRAY; i++)
    {
        array[i] = valor;
        printf("arrayInt[%d] = %d\n", i, array[i]);
    }
    
}

int main(void)
{
    int arrayInt[5] = {5, 4, 3, 2, 1};
    int i;

    for (i = 0; i < TAMANHO_ARRAY; i++)
    {
        printf("arrayInt[%d] = %d\n", i, arrayInt[i]);
    }

    printf("\nApos mudar os valores:\n");

    mudaValores(arrayInt, 99);
    
    
    
    return 0;
}
