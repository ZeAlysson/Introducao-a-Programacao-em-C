#include <stdio.h>
#include <stdlib.h>

/*
3) Faça um programa em C em que você defina:
	- Uma palavra como um array de caracteres (char *palavra);
	- Uma frase como um array de palavras (char **frase);
	- Um capitulo como um array de frases (char ***capitulo);
	- Um livro como um array de capitulos (char ****livro);

Usando as definições acima, crie funções que exibam:
	a) Palavras em uma frase, para uma frase recebida;
	b) Frases em um capítulo, para um capítulo recebido;
	c) Capítulos em um livro, para um livro recebido. 

Faça um programa que crie dois livros, com 5 capítulos cada, onde os capítulos
tem 5 frases de 5 palavras e teste as funções criadas.
*/

typedef char* palavra;
typedef char** frase;
typedef char*** capitulo;
typedef char**** livro;

#define QTD_LIVROS 2
#define QTD_CAP 5
#define QTD_FRASES 5
#define QTD_PALAVRAS 5
#define TAM_PALAVRA 5


palavra gera_palavra (int tamanho_palavra)
{
    int i;

    //str_palavra[TAM_PALAVRA]
    palavra str_palavra = (palavra)malloc(tamanho_palavra+1*sizeof(char));


    for (i = 0; i < tamanho_palavra; i++)
    {
        str_palavra[i] = rand() % 26 + 'A';
    }

    str_palavra[tamanho_palavra] = '\0';

    return str_palavra;
}

exibe_frase (frase f, int tamanho_frase)
{
    int i;

    for (i = 0; i < tamanho_frase; i++)
    {
        printf("%s ", f[i]);
    }  
}

exibe_capitulo (capitulo c, int tamanho_capitulo)
{
    int i;

    printf("Exibindo conteudo do capitulo: %p\n", c);

    for (i = 0; i < tamanho_capitulo; i++)
    {
        exibe_frase(c[i], QTD_PALAVRAS);
        printf("\n");
    }
}

exibe_livro (livro l, int tamanho_livro)
{
    int i;

    printf("Exibindo conteudo do livro: %p\n", l);

    for (i = 0; i < tamanho_livro; i++)
    {
        exibe_capitulo(l[i], QTD_FRASES);
    }
    
}


int main(void)
{
    livro livros[QTD_LIVROS]; //char**** livros[QTD_LIVROS](sem typedef)
    int i, j, k, l;

    for (i = 0; i < QTD_LIVROS; i++)
    {
        livros[i] = (livro)malloc(QTD_CAP*sizeof(capitulo));

        for (j = 0; j < QTD_CAP; j++)
        {
            livros[i][j] = (capitulo)malloc(QTD_FRASES*sizeof(frase));

            for (k = 0; k < QTD_FRASES; k++)
            {
                livros[i][j][k] = (frase)malloc(QTD_PALAVRAS*sizeof(palavra));

                for (l = 0; l < QTD_PALAVRAS; l++)
                {
                    livros[i][j][k][l] = (palavra)malloc(TAM_PALAVRA*sizeof(char));
                    livros[i][j][k][l] = gera_palavra(TAM_PALAVRA);
                }
            }   
        }    
    }

    for (i = 0; i < QTD_LIVROS; i++)
    {
        printf("LIVRO 1: ");
        exibe_livro(livros[0], QTD_CAP);
        printf("\n\n");
        printf("LIVRO 2: ");
        exibe_livro(livros[1], QTD_CAP);
    }
    
    
    
    return 0;
}
