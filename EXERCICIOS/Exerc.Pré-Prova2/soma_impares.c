/*
Faça um programa em C que efetue a soma de todos os numeros impares que sao
multiplos de tres e que se encontram no conjunto dos numeros de 1 ate 5000.
*/

#include <stdio.h>

int main(void)
{

    int i, soma=0;

    for (i = 1; i <= 5000; i++) {
        //Quando i for impar, e se i impar for multiplo de 3, o valor é adicionado na variavel soma
        if(i % 2 != 0) {
            if(i % 3 == 0) {
            soma+=i;
            }
        }
    }

    printf("Soma de todos os impares = %d\n", soma);
    
    
    return 0;
}
