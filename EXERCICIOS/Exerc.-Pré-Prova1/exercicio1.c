/*1) Escreva um programa em C que leia 4 valores inteiros e apresente o maior 
e o menor valor lido.*/

#include <stdio.h>

int main(void) {

    int i, inteiro, maior, menor;

    for (i = 0; i < 4; i++)
    {
        printf("Insira o inteiro[%d] -> ", i+1);
        scanf("%d", &inteiro);

        if ( i == 0 ) {
            maior = inteiro;
            menor = inteiro;
        } else if (inteiro > maior) {
            maior = inteiro;
        } else if (inteiro < menor) {
            menor = inteiro;
        }
    }

    printf("Maior = %d, menor = %d", maior, menor);
    
   
    

    return 0;
}
