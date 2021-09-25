#include <stdio.h>
#include <stdlib.h>

/*
    Utiliza ponteiro para ponteiro para criar um array
    de strings, alocado dinamicamente, com strings 
    aleatorias. Depois copia o conteudo desse array 
    alocado dinamicamente para um array previamente
    declarado.
*/

#define TAMANHO_STRING 5
#define QUANTIDADE_STRINGS 10

int main(void)
{
    char **array_strings;
    char array_equivalente[QUANTIDADE_STRINGS][TAMANHO_STRING+1];
    int i, j;

    array_strings = (char**)malloc(QUANTIDADE_STRINGS*sizeof(char*));

    srand(time(NULL));

    for (i = 0; i < QUANTIDADE_STRINGS; i++)
    {
        array_strings[i] = (char*)malloc(QUANTIDADE_STRINGS*sizeof(char));

        for (j = 0; j < TAMANHO_STRING; j++)
        {
            array_strings[i][j] = rand() % 26 + 'a';
        }

        array_strings[i][j] = '\0';  
    }

    for (i = 0; i < QUANTIDADE_STRINGS; i++)
    {
        for (j = 0; j < TAMANHO_STRING+1; j++)
        {
            array_equivalente[i][j] = array_strings[i][j];
        }   
    }

    for (i = 0; i < QUANTIDADE_STRINGS; i++)
    {
        printf("Array de string[%d](original): %s\n", i, array_strings[i]);
    }

    printf("\n\n");

    for (i = 0; i < QUANTIDADE_STRINGS; i++)
    {
        printf("Array de string[%d](equivalente): %s\n", i, array_equivalente[i]);
    }
        
    
    return 0;
}
