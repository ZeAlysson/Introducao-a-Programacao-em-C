#include <stdio.h>
#include <locale.h>

/* CRIE UM PROGRAMA QUE LEIA TR�S N�MEROS
E OS IMPRIMA NA ORDEM INVERSA*/

int main (void) {  setlocale(LC_ALL, "Portuguese_Brazil");

    int primeiro, segundo, terceiro;

    printf("Digite um n�mero:");
    scanf("%i", &primeiro);

    printf("Digite o secundo n�mero:");
    scanf("%i", &segundo);

    printf("Digite o terceiro n�mero:");
    scanf("%i", &terceiro);

    printf("A desordem dos n�meros digitados foram: \n%i \n%i \n%i", terceiro, segundo, primeiro);



return 0;
}