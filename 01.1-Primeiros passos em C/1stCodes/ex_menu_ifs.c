#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
    Faca um programa que apresente um menu com 4 itens e a opcao de sair.
    Exiba uma mensagem diferente para cada opcao.
 */

int main(void) {

setlocale(LC_ALL, "Portuguese_Brazil");

    char choice;

    printf("\nEst� pronto para iniciar sua jornada?\n");
    printf("\nA.Bulbasaur\nB.Charmander\nC.Squirtle\nD.[Sair]\n\n");
    printf("Escolha seu pokemon inicial:");
    scanf("%c", &choice);


    switch (choice)
    { 

    case 'a':  
    case 'A': printf("\nParab�ns! Voc� adquiriu Bulbasaur, tipo GRAMA.\n");
        break;

    case 'b':
    case 'B': printf("\nParab�ns! Voc� adquiriu Charmander, tipo FOGO.\n");
        break;

    case 'c':
    case 'C': printf("\nParab�ns! Voc� adquiriu Squirtle, tipo �GUA.\n");
        break;

    case 'd':
    case 'D': printf("\nOk... talvez voc� precise de mais tempo pra pensar.\n");
    exit(0);
        break;
    
    default: printf("\nOp��o inv�lida\n");
        break;
    }



    /*if (choice == 'A') {
        printf("\nParab�ns! Voc� adquiriu Bulbasaur, tipo GRAMA.\n");
    }

    if (choice == 'B') {
        printf("\nParab�ns! Voc� adquiriu Charmarder, tipo FOGO.\n");
    }

    if (choice == 'C') {
        printf("\nParab�ns! Voc� adquiriu Squirtle, tipo �GUA.\n");
    }

    if (choice == 'D') {
        printf("\nOk... talvez voc� precise de mais tempo pra pensar.\n");
    } */

return 0;
}