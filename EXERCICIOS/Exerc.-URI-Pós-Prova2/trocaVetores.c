/*
Fa�a um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o �ltimo, 
o segundo elemento com o pen�ltimo, etc., at� trocar o 10� com o 11�. Mostre o vetor modificado.

Entrada
A entrada cont�m 20 valores inteiros, positivos ou negativos.

Sa�da
Para cada posi��o do vetor N, escreva "N[i] = Y", onde i � a posi��o do vetor e Y � o valor 
armazenado naquela posi��o.
*/

#include <stdio.h>

int main(void)
{
    int vetor[20], i, j=0;

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 19; i >= 0; i--)
    {   
         printf("N[%d] = %d\n", j++, vetor[i]);
    }
    

    return 0;
}
