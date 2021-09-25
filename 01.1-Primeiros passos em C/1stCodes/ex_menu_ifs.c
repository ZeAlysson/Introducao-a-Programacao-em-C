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

    printf("\nEstá pronto para iniciar sua jornada?\n");
    printf("\nA.Bulbasaur\nB.Charmander\nC.Squirtle\nD.[Sair]\n\n");
    printf("Escolha seu pokemon inicial:");
    scanf("%c", &choice);


    switch (choice)
    { 

    case 'a':  
    case 'A': printf("\nParabéns! Você adquiriu Bulbasaur, tipo GRAMA.\n");
        break;

    case 'b':
    case 'B': printf("\nParabéns! Você adquiriu Charmander, tipo FOGO.\n");
        break;

    case 'c':
    case 'C': printf("\nParabéns! Você adquiriu Squirtle, tipo ÁGUA.\n");
        break;

    case 'd':
    case 'D': printf("\nOk... talvez você precise de mais tempo pra pensar.\n");
    exit(0);
        break;
    
    default: printf("\nOpção inválida\n");
        break;
    }



    /*if (choice == 'A') {
        printf("\nParabéns! Você adquiriu Bulbasaur, tipo GRAMA.\n");
    }

    if (choice == 'B') {
        printf("\nParabéns! Você adquiriu Charmarder, tipo FOGO.\n");
    }

    if (choice == 'C') {
        printf("\nParabéns! Você adquiriu Squirtle, tipo ÁGUA.\n");
    }

    if (choice == 'D') {
        printf("\nOk... talvez você precise de mais tempo pra pensar.\n");
    } */

return 0;
}