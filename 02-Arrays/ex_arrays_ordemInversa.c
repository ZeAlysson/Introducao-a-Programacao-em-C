#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa em C que leia 10 numeros e os armazene em um array. 
    Exiba os numeros na ordem inversa a que eles foram digitados.
*/

int main(void)
{
    int i, numeros[10];

    for (i = 0; i < 10; i++)
    {
        printf("n[%d] = ", i);
        scanf("%d", &numeros[i]);
    }

    printf("\n");

    //formação da ordem inversa
    for (i = 9; i >= 0; i--)
    {
         printf("n[%d] = %d\n", i, numeros[i]);
    }
    
    
    
    
    return 0;
}

