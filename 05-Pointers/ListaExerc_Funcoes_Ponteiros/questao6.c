/*
6) Fa�a um programa em C que receba n strings como argumento de execu��o. O 
programa dever� conter uma fun��o que altere as vogais das strings de 
maiusculas para minusculas e vice-versa, e o programa dever� invocar esta 
fun��o sobre as strings recebidas e exibir o resultado na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

trocaMaiusculoMinisculo(char *string) 
{   
    int i;
    
    //Altera as vogais das strings de maiusculas para minusculas e vice-versa
    for (i = 0; i < strlen(string); i++)
    {
        switch (string[i])
        {
            //Altera cada vogal minuscula para maiuscula
            case 'a': 
            case 'e':  
            case 'i':  
            case 'o':  
            case 'u': string[i] = toupper(string[i]); 
            break;

            //Altera cada vogal maiuscula para minuscula
            case 'A':  
            case 'E':  
            case 'I':  
            case 'O':  
            case 'U': string[i] = tolower(string[i]); 
            break;
        }

        printf("%c", string[i]);
    }
}


int main(int argc, char *argv[])
{
    int i;

    /*Mostra a quantidade de argumentos inseridos
    OBS: Sempre � mostrado a quantidade inserida + 1, pois o pr�prio 'argc' conta como argumento*/
    printf("\nRecebido %d elementos\n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("\n[%d] = %s", i, argv[i]);//Exibe os argumentos e a posi��o de cada um
        printf("\n[%d](alterado) = ", i); //printf para dar �nfase � fun��o a ser invocada com os valores alterados
        trocaMaiusculoMinisculo(argv[i]); //Invoca fun��o
        printf("\n");    
    }
    
    return 0;
}

