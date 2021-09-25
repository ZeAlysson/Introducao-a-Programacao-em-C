/*
2) Escreva um programa em C que leia e armazene dois valores: um caractere, e
um valor inteiro. Caso o caractere seja 'P' ou 'p', exiba na tela todos os 
números pares entre 0 e o valor inteiro inserido; caso o caractere seja 'I' ou
'i' exiba todos os números ímpares entre 0 e o valor inteiro inserido.
*/

#include <stdio.h>

int main(void)
{
    int numero, i, numPar, numImpar;
    char caractere;

    printf("\nInsira o caractere 'I' para Impar ou 'P' para Par: ");
    scanf("%c", &caractere);

    printf("Insira um numero inteiro: ");
    scanf("%i", &numero);

    switch (caractere)
    {
    case 'p':
    case 'P': {

            //de 0 repete até o numero inserido com um salto de 2 em 2 numeros
            for (i = 0; i <= numero; i += 2)
            {
                printf("%i, ", i);
            }           
    }
        break;

    case 'i':
    case 'I': {
            //de 1 repete até o numero inserido com o mesmo salto de 2 em 2, porém como valor impar
            for (i = 1; i <= numero; i += 2)
            {
                printf("%i, ", i);
            }     
    }
        break;

    default: printf("caractere invalido!");
        break;
    }


    return 0;
}
