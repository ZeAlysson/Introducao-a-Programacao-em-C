/*3) Escreva um programa em C que leia e armazene um valor inteiro (n). Fa�a uma
estrutura de repeti��o que solicite ao usu�rio n n�meros (quantidade inserida
anteriormente). Depois exiba: a) a m�dia dos n�meros b) o menor n�mero 
inserido c) o maior n�mero inserido d) a quantidade de n�meros pares.*/

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
        printf("Insira o %i� numero: ", i+1);
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
    printf("\nM�dia dos numeros inseridos = %.2f", media);
    printf("\nQuantidade de numeros pares = %i", quantidadePares);
    



    return 0;
}
