#include <stdio.h>
#include <locale.h>

/*Faça um programa que apresente na tela a tabela de conversão de graus Celsius para
Farenheit, de -100 C a 100 C. Use um incremento de 10 C. 
    OBS: Farenheit = ((9/5)*Celsius) + 32 
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int gCelsius, farenheit;

        //DE -100 C   /REPETIR até 100 C/ /Com um SALTO de 10 em 10/  
    for (gCelsius=-100; gCelsius<=100; gCelsius=gCelsius+10)
    {
        farenheit = ((9/5)*gCelsius) + 32; //converte o valor para farenheit em cada ciclo 
        printf("%i C = %i F\n", gCelsius, farenheit);
    }
    





    return 0;
}
