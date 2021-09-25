/*
A sequencia de Fibonacci tem papel importante na explicao de fenomenos 
naturais e sao muito usada como guia estatica na arquitetura, nas artes visuais,
na musica etc.
A sequencia inicia-se por dois numeros 1, e partir do terceiro elemento usa-se
a expressao: elemento[n] = elemento[n-1] + elemento[n-2]. 

Exemplo de sequencia (n = 6): 1, 1, 2, 3, 5, 8. 

Construa um programa em C que imprima na tela os n primeiros elementos da
sequencia de Fibonacci, onde n é informado pelo usuario.
*/

#include <stdio.h>

int main(void)
{
    int numeroN, elemento1 = 1, elemento2 = 1, elementoR;

    scanf("%d", &numeroN);

    printf("1, 1");

    for (elementoR = 0; elementoR < numeroN; )
    {
        elementoR=elemento1+elemento2;
        printf(", %d", elementoR);
        elemento1 = elemento2;
        elemento2 = elementoR;
    }
        
    return 0;
}
