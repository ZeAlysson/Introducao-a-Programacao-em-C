#include <stdio.h>
#include <string.h>

/*
Testando strings como:
- strlen: mostra o numero de caracteres uma string
- strcpy: copia caracteres de uma string para outra
- strcat: junta/concatena strings
- strncat: concatena n caracteres de uma string para outra
*/

int main(void) {
    
    char string1 [30] = "PARALELEPIPEDO";
    char string2 [30];
    char minha_frase1[20] = "Hello";
    char minha_frase2[20] = "World";

    //copia caracteres de uma string para outra
    strcpy(string2, string1);
    printf("string1 = %s %d caracteres\n", string1, strlen(string1));//mostra o valor da string1
    printf("string2 = %s %d caracteres\n", string2, strlen(string2));//mostra o valor copiado da string1 para string2

    //uni/concatena strings
    strcat(minha_frase1, minha_frase2);
    printf("Frase concatenada: %s, %d carateres", minha_frase1, strlen(minha_frase1));

    //concatena 8 caracteres de string para outra string
    strncat(minha_frase1, string1, 8);
    printf("\nFrase concatenada 8 caracteres: %s, %d carateres", minha_frase1, strlen(minha_frase1));

    return 0;
}
