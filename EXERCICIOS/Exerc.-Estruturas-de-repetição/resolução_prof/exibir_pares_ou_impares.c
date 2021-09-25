#include <stdio.h>

/*

2) Escreva um programa em C que leia e armazene dois valores: um caractere, e
um valor inteiro. Caso o caractere seja 'P' ou 'p', exiba na tela todos os 
números pares entre 0 e o valor inteiro inserido; caso o caractere seja 'I' ou
'i' exiba todos os números ímpares entre 0 e o valor inteiro inserido.

*/

int main(void) {

    char parOuImpar;
    int valorContagem, i;

    printf("Digite p/P para par ou i/I para impar: ");
    scanf("%c", &parOuImpar);
    printf("Digite o valor a ser utilizado na contagem: ");
    scanf("%d", &valorContagem);

    switch(parOuImpar) {
        case 'p':
        case 'P': {
            for (i = 0; i <= valorContagem; i+=2) 
                printf("%d\n", i);
            break;
        }
        case 'i':
        case 'I': {
            for (i = 1; i <= valorContagem; i+=2) 
                printf("%d\n", i);
            break;
        }
        default: {
            printf("Digite p/P ou i/I!\n\n");
        }
    }
    return 0;
}