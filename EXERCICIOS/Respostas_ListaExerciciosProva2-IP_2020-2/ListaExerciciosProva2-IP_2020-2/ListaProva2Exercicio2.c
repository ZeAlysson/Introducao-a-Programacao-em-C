#include <stdio.h>

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

int main(void) {
    int n, elementon, elementon_1, elementon_2, i;

    elementon_1 = 1;

    elementon_2 = 1;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("1, 1, ");

    for (i = 0; i < (n - 2); i++) {
        elementon = elementon_1 + elementon_2;
        printf("%d, ", elementon);
        elementon_2 = elementon_1;
        elementon_1 = elementon;
    }    

    return 0;
}