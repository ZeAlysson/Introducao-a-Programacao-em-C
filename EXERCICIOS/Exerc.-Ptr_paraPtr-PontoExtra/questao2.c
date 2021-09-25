/*
2 - 1pt) Crie uma função que receba uma string como parâmetro (de tamanho desconhecido) e 
retorne uma cópia da mesma com o conteúdo duplicado. 
Ex. se invocada com uma string de conteúdo "ABC" a função deverá retornar a string "ABCABC". 
A assinatura da função deve ser: char *strdoublecopy(char *str);
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DOBRO 2

//funcao retorna string duplicada
char *strdoublecopy(char *str)
{
    int i, j;
    int tamanho_str;
    
    tamanho_str = strlen(str);//determina o tamanho da string

    /*roda dois loops, sendo um para imprimir cada caractere ate forma a string, e outro para
    dobrar as vezes em que a cadeira de caracteres sera impressa*/
    for (i = 0; i < DOBRO; i++)
    {   
        j = 0;
        while (tamanho_str > j)
        {
            printf("%c", str[j]);
            j++;
        }

        str[j] = '\0';//apos toda string impressa, encerra-a com \0 como ultimo "caractere"
    }
}

int main(void)
{
    char string_aux[20];
    char *string;

    printf("Insira a string: ");
    scanf("%s", &string_aux);//armazena a string lida em uma cadeia de caractere auxiliar

    string = string_aux;//'string' receber o valor lido por 'string_aux'

    strdoublecopy(string);//invoca a funcao, com a string lida como entrada

    return 0;
}
