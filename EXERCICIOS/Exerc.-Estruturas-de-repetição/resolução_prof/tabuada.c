#include <stdio.h>

/*

4) Escreva um programa em C que pergunta um número inteiro ao usuário e exibe 
na tela sua tabuada completa (de 1 até 10).

*/

int main(void) {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++) {
        printf(" %d x %d = %d\n", numero, i, (numero*i));
    }

    return 0;
}