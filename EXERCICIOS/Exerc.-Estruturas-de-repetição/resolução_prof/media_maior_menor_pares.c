#include <stdio.h>

/*
3) Escreva um programa em C que leia e armazene um valor inteiro (n). Faça uma
estrutura de repetição que solicite ao usuário n números (quantidade inserida
anteriormente). Depois exiba: a) a média dos números b) o menor número 
inserido c) o maior número inserido d) a quantidade de números pares.
*/

int main(void) {

    int numeroSolicitacoes, quantidadePares, maior, menor, numeroInserido, i;
    float soma;

    soma = 0; 
    quantidadePares = 0;

    printf("Digite quantos numeros vai inserir: ");
    scanf("%d", &numeroSolicitacoes);

    for (i = 0; i < numeroSolicitacoes; i++) {
        printf("Digite o numero [%d]: ", i+1);
        scanf("%d", &numeroInserido);
        soma += numeroInserido; // soma para calcular a media

        if (i == 0) {
            maior = numeroInserido;
            menor = numeroInserido;
        } else {
            if (maior < numeroInserido) {
                maior = numeroInserido;
            }
            if (menor > numeroInserido) {
                menor  = numeroInserido;
            }
        }
        // testando para armazenar maior e menor numeros

        if (numeroInserido %2 == 0) {
            quantidadePares++;
        }
        // testando se o valor representa um numero par
    }

    printf("A media dos numeros: %f\n",(soma/numeroSolicitacoes));
    printf("O menor numero: %d\n", menor);
    printf("O maior numero inserido: %d\n", maior);
    printf("A quantidade de numeros pares: %d\n", quantidadePares);

    return 0;
}