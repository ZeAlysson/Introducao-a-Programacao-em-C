#include <stdio.h>
#include <locale.h>

/*
Perguntar ao usu�rio quantos n�meros deseja
somar. Em seguida, ler estes N n�meros e
apresentar o valor da soma. (Fazer 3 vers�es
deste programa: usando FOR, usando WHILE e
usando DO...WHILE).
*/

int main(void) {
    
    setlocale(LC_ALL, "Portuguese_Brazil");

    int quantidade, contador, soma=0, numero;

//pergunta ao usuario quantos numeros somar
    printf("Quantos numeros deseja somar?\nInsira:");
    scanf("%i", &quantidade);

//pergunta ao usuario os numeros que quer somar de acordo com quantos numeros o usuario inseriu acima
  
    /*
    for(contador=1; contador<=quantidade; ++contador)
    {
        printf("\nInsira o %i� numero:",contador);
        scanf("%i", &numero);
        soma=soma+numero;
    }
    */

    contador = 0;
   /*
    while (contador<quantidade)
    {
        printf("\nInsira o %i� numero:",contador+1);
        scanf("%i", &numero);
        soma=soma+numero;
         ++contador;
    }
    */

   do
   {
        printf("\nInsira o %i� numero:",contador+1);
        scanf("%i", &numero);
        soma=soma+numero;
        ++contador;
       
   } while (contador<quantidade);
   
    

    
//imprimi na tela quantos numeros o usuario inseriu e a soma dos numeros que o mesmo tamb�m inseriu
    printf("\nA soma dos %i numeros = %i", quantidade, soma);
    



    return 0;
}
