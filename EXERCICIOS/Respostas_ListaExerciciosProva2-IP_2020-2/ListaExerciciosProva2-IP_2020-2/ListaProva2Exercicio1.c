#include <stdio.h>

/*
Faça um programa em C que efetue a soma de todos os números ímpares que são
múltiplos de três e que se encontram no conjunto dos números de 1 até 5000.
*/

int main(void) {

    int soma, i;

    soma = 0;

    for (i = 1; i <= 5000; i+=2) {
    // i += 2 -> i = i + 2
        if (i % 3 == 0) {            
            soma += i;
            //soma = soma + i;
            printf("[%d] soma = %d\n", i, soma);
        }
    }

    printf("Soma calculada: %d\n", soma);

    return 0;
}