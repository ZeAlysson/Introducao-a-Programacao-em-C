#include <stdio.h>
#include <locale.h>

/* CRIE UM PROGRAMA QUE PERGUNTE A IDADE DO USU�RIO
E DEPOIS CONVERTA, APROXIMADAMENTE EM DIAS*/

int main (void) { 
    
    setlocale(LC_ALL, "Portuguese_Brazil");

    int idadeAnos, idadeDias;

    printf("Digite sua idade:");
    scanf("%i", &idadeAnos);

    idadeDias = 365*idadeAnos;

    printf("Sua idade em dias �: %i",idadeDias);

return 0;
}