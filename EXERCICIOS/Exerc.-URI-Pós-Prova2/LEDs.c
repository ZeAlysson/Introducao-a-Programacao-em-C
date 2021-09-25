/*
Jo�o quer montar um painel de leds contendo diversos n�meros. Ele n�o possui muitos leds, 
e n�o tem certeza se conseguir� montar o n�mero desejado. Considerando a configura��o dos 
leds dos n�meros abaixo, fa�a um algoritmo que ajude Jo�o a descobrir a quantidade de leds 
necess�rio para montar o valor.

Entrada

A entrada cont�m um inteiro N, (1 ? N ? 1000) correspondente ao n�mero de casos de teste, 
seguido de N linhas, cada linha contendo um n�mero (1 ? V ? 10100) correspondente ao valor 
que Jo�o quer montar com os leds.

Sa�da

Para cada caso de teste, imprima uma linha contendo o n�mero de leds que Jo�o precisa para 
montar o valor desejado, seguido da palavra "leds".

ex. de entrada:

3
115380
2819311
23456

ex. de sa�da:

27 leds
29 leds
25 leds
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int nTestes, i, j, leds;
    char numeros[10100];

    scanf("%d", &nTestes);
    
    for (i = 0; i < nTestes; i++)
    {
        scanf("%s", numeros);

        j = 0;
        leds = 0;//variavel � zerada, pois se n�o continuar� somando com os outros testes

        while (j < strlen(numeros))
        {
            switch (numeros[j])
            {
                /*
                n�mero           0  1  2  3  4  5  6  7  8  9                
                quantidade leds  6, 2, 5, 5, 4, 5, 6, 3, 7, 6
                */
                case '1': leds = leds+2; break;
                case '2': 
                case '3':
                case '5': leds = leds+5; break;
                case '4': leds = leds+4; break;
                case '7': leds = leds+3; break;
                case '8': leds = leds+7; break;
                default: leds = leds+6; break;
            }
            ++j;
        }

        printf("%d leds\n", leds);
    }

    return 0;
}
