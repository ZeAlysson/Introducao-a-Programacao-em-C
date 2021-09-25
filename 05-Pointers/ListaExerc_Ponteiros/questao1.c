#include <stdio.h>

/*
1) Escreva um programa em C que declare um inteiro, um real e um char, e ponteiros para inteiro, 
real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel 
usando os ponteiros. Imprima os valores das variáveis antes e após a modificacao.
*/

int main(void)
{
    int inteiro = 2, *ptrInteiro;
    float real = 4.5, *ptrReal;
    char caractere = 'A', *ptrCaractere;

    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrCaractere = &caractere;

    printf("inteiro: %d\n", inteiro);
    printf("real: %f\n", real);
    printf("caractere: %c\n", caractere);

    *ptrInteiro = 4;
    *ptrReal = 8.5;
    *ptrCaractere = 'B';

    printf("\nptr inteiro: %d\n", inteiro);
    printf("ptr real: %f\n", real);
    printf("ptr caractere: %c\n", caractere);


    
    return 0;
}
