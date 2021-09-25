/*
2) Faça um programa em que tenha uma função que receba dois valores inteiros
m e n; use esses valores para criar um array de n strings com m caracteres
aleatórios - o array resultante deverá ser o valor de retorno da função.
*/

#include <stdio.h>
#include <stdlib.h>

CriarArray_de_Strings(int tamanho, int quantidade)
{
    int i, j;

    char array_strings[quantidade][tamanho+1];

    srand(time(NULL));

    
    for (i = 0; i < quantidade; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            array_strings[i][j] = rand() % 26 + 'a'; //gera e armazena os caracteres de cada string
        }
        
        array_strings[i][j] = '\0';//poe o \0 no fim de cada cadeia de caractere
    }

    for (i = 0; i < quantidade; i++)
    {
        printf("string[%d] = %s\n", i, array_strings[i]);//exibe as strings geradas
    }
    
}

int main(void)
{
    int tamanho_string, quantidade_strings;

    printf("Insira quantas strings deseja gerar: ");
    scanf("%d", &quantidade_strings);

    printf("Insira o tamanho das strings: ");
    scanf("%d", &tamanho_string);


    CriarArray_de_Strings(tamanho_string, quantidade_strings);


    return 0;
}
