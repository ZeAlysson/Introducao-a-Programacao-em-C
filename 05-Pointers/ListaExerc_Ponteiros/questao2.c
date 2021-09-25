#include <stdio.h>

/*
2) Crie um programa em C que contenha um array de floats com 10 elementos. 
Exiba na tela endereço de cada posição desse array.
*/

int main(void)
{
    float array[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        array[i] = i*10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("array[%d] = %f\n", i, array[i]);
        printf("&array[%d] = %p\n", i, &array[i]);
    }
    
    
    
    return 0;
}
