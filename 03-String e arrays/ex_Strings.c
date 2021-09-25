#include <stdio.h>
#include <string.h>
#include <locale.h>

/*
Introduz strings, scaneia, calcula a quantidade de caracteres, valor strcmp,. 
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome_padrao [] = "Alysson";
    char nome[20]; //define um array como capacidade de se armanezar 20 caracteres no mesmo

    char nome_teste1 [] = "Joao"; 
    char nome_teste2 [] = "Jose";
    char nome_teste3 [] = "Maria";
    char nome_teste4 [] = "Ana";
    char nome_teste5 [] = "Ana";

    int result;

    printf("Informe um nome: ");//pede um nome ao usuario
    gets(nome);//scaneia o nome e armaneza no array

    //mostra o nome inserido pelo usuario e quantos caracteres esse nome tem através do strlen()
    printf("%s tem %d caracteres\n", nome, strlen(nome));

    /*
    strcmp() --> compara se caracteres são iguais. 
    0 = iguais, 1 = diferente
    */

   //compara se o nome inserido pelo usuario é igual ou não ao nome_padrao
    if (strcmp(nome, nome_padrao) == 0) {
        printf("[%s] igual ao padrão [%s]", nome, nome_padrao);
    } else {
        printf("[%s] diferente do padrão [%s]", nome, nome_padrao);
    }

    /* 
    mostra o valor do strcmp() das strings
    0 = igual, 
    -1 = diferente, porém a primeira string está alfabetimente menor que as outras
    1 = diferente, porém a primeira string está alfabetimente maior que as outras 
    */

    result = strcmp(nome_teste1, nome_teste2);
    printf("\n\nResultado do strcmp para %s e %s: %d\n", nome_teste1, nome_teste2, result);

    result = strcmp(nome_teste3, nome_teste4);
    printf("Resultado do strcmp para %s e %s: %d\n", nome_teste3, nome_teste4, result);

    result = strcmp(nome_teste4, nome_teste5);
    printf("Resultado do strcmp para %s e %s: %d\n\n", nome_teste4, nome_teste5, result);

    //mostra o tamanho de cada string defina no inicio
    printf("Tamanho da string [%s] = %d caracteres\n", nome_teste1, strlen(nome_teste1));
    printf("Tamanho da string [%s] = %d caracteres\n", nome_teste2, strlen(nome_teste2));
    printf("Tamanho da string [%s] = %d caracteres\n", nome_teste3, strlen(nome_teste3));
    printf("Tamanho da string [%s] = %d caracteres\n", nome_teste4, strlen(nome_teste4));
    printf("Tamanho da string [%s] = %d caracteres\n", nome_teste5, strlen(nome_teste5));

    return 0;
}
