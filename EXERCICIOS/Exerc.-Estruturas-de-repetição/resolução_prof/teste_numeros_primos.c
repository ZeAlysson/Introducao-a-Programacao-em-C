#include <stdio.h>
#include <stdlib.h>
/*
6) Escreva um programa em C que pergunta um número inteiro ao usuário. Decidir
se esse é um número primo e apresentar o resultado na saída padrão. 
*/


int main(void) {

    int numero;

    printf("Digite um numero para verificar se eh primo: ");
    scanf("%d", &numero);

    for (int i = numero-1; i > 1; i--) {
        if (numero % i == 0) {
            printf("Numero %d nao eh primo!\n", numero);
            exit(0);
        }
    }

    printf("Numero %d eh primo!", numero);

    return 0;
}