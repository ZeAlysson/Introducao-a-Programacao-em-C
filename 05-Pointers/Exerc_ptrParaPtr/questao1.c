/*
1) Escreva uma função que recebe uma string (array de caracteres) e uma letra
(um caracter) e devolve um vetor de inteiros contendo as posições (índices no
vetor da string) onde a letra foi encontrada) e um inteiro contendo o tamanho
do vetor criado (total de letras iguais encontradas). 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



contaCaracteres(char *str, char c, int *vetor_inteiros, int *tamanho)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, cont_letras = 0;
    int tamanho_str;

    tamanho_str = strlen(str);

    //vetor_inteiros = (int*)malloc(tamanho_str*sizeof(int));

    if(vetor_inteiros == NULL) 
    {
        printf("malloc error\n");
        exit(0);
    }
    
    for (i = 0; i < tamanho_str; i++)
    {
        if(str[i] == c) 
        {   
            vetor_inteiros[cont_letras] = i;
            //printf("Achei %c na posicao %d\n", c, vetor_inteiros[cont_letras]+1);
            cont_letras++;
        }
    }

    *tamanho = cont_letras;
    
}

#define MAX_STRING 255

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    char *string;
    char caractere;
    int vetor_posicao[MAX_STRING];
    int qtd_letras_iguais, i;

    string = (char*)malloc(20*sizeof(char));

    printf("Insira uma string: ");
    gets(string);

    printf("Agora insira um caractere: ");
    scanf("%c", &caractere);

    contaCaracteres(string, caractere, vetor_posicao, &qtd_letras_iguais);

    printf("O caractere '%c' aparece em '%s' '%d' vezes nas posições:\n", caractere, string, qtd_letras_iguais);

    for (i = 0; i < qtd_letras_iguais; i++)
    {
        printf("[%dº]\n", vetor_posicao[i]+1);
    }
    

    
    return 0;
}
