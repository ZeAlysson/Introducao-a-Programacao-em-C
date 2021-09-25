#include <stdio.h>

/*
Faça um programa em C que peça um número inteiro inicial ao usuário, um valor
inteiro de razão e calcule os 10 primeiros termos de uma P.A (Progressão 
Aritmética), armazenando esses valores em um vetor de tamanho 10.
*/

int main(void) {

    int n, razao, i;

    int valores[10];

    printf("Digite o valor inicial: ");
    scanf("%d", &n);

    printf("Digite a razao: ");
    scanf("%d", &razao);

    valores[0] = n;

    for(i = 1; i < 10; i++) {
        valores[i] = valores[0] + ((i)*razao);
        //an = a1 + (n - 1) * r
    }

    for(i = 0; i < 10; i++) {
        printf("%d\n", valores[i]);
    }


    

    return 0;
}