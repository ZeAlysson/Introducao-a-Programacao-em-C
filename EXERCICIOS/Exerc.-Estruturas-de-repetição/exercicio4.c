/*4) Escreva um programa em C que pergunta um n�mero inteiro ao usu�rio e exibe 
na tela sua tabuada completa (de 1 at� 10).*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int numeroInteiro, tabuadaInteiro, i, calculoInt;

    printf("Insira um numero: ");
    scanf("%i", &numeroInteiro);

    for (i = 0; i <= 10; i++)
    {
        calculoInt = numeroInteiro*i;
        printf("%i * %i = %i\n", i, numeroInteiro, calculoInt);
    }
    
    return 0;
}
