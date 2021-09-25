/*
6) Faça um programa em C que receba n strings como argumento de execução. O 
programa deverá conter uma função que altere as vogais das strings de 
maiusculas para minusculas e vice-versa, e o programa deverá invocar esta 
função sobre as strings recebidas e exibir o resultado na tela.
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
    OBS: Sempre é mostrado a quantidade inserida + 1, pois o próprio 'argc' conta como argumento*/
    printf("\nRecebido %d elementos\n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("\n[%d] = %s", i, argv[i]);//Exibe os argumentos e a posição de cada um
        printf("\n[%d](alterado) = ", i); //printf para dar ênfase à função a ser invocada com os valores alterados
        trocaMaiusculoMinisculo(argv[i]); //Invoca função
        printf("\n");    
    }
    
    return 0;
}

