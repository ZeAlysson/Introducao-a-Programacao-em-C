#include <stdio.h>
#include <locale.h>

/* CRIE UM PROGRAMA QUE LEIA TRÊS NÚMEROS
E OS IMPRIMA NA ORDEM INVERSA*/

int main (void) {  setlocale(LC_ALL, "Portuguese_Brazil");

    int primeiro, segundo, terceiro;

    printf("Digite um número:");
    scanf("%i", &primeiro);

    printf("Digite o secundo número:");
    scanf("%i", &segundo);

    printf("Digite o terceiro número:");
    scanf("%i", &terceiro);

    printf("A desordem dos números digitados foram: \n%i \n%i \n%i", terceiro, segundo, primeiro);



return 0;
}