/*3) Escreva um programa em C que leia e armazene um valor inteiro (n). Faça uma
estrutura de repetição que solicite ao usuário n números (quantidade inserida
anteriormente). Depois exiba: a) a média dos números b) o menor número 
inserido c) o maior número inserido d) a quantidade de números pares.*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int quantidadeNumeros, numeroInserido, maior, menor, i, quantidadePares=0;
    float media, soma=0;
    
    printf("Insira a quantidade de numeros: ");
    scanf("%i", &quantidadeNumeros);

    for (i = 0; i < quantidadeNumeros; i++)
    {
        printf("Insira o %iº numero: ", i+1);
        scanf("%i", &numeroInserido);

        soma=soma+numeroInserido;

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

        if (numeroInserido %2 == 0)
        {
            quantidadePares++;
        } 
        
        
    }

    media = soma/quantidadeNumeros;

    printf("\nMaior numero = %i", maior);
    printf("\nMenor numero = %i", menor);
    printf("\nMédia dos numeros inseridos = %.2f", media);
    printf("\nQuantidade de numeros pares = %i", quantidadePares);
    



    return 0;
}
