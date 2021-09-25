/*
João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, 
e não tem certeza se conseguirá montar o número desejado. Considerando a configuração dos 
leds dos números abaixo, faça um algoritmo que ajude João a descobrir a quantidade de leds 
necessário para montar o valor.

Entrada

A entrada contém um inteiro N, (1 ? N ? 1000) correspondente ao número de casos de teste, 
seguido de N linhas, cada linha contendo um número (1 ? V ? 10100) correspondente ao valor 
que João quer montar com os leds.

Saída

Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para 
montar o valor desejado, seguido da palavra "leds".

ex. de entrada:

3
115380
2819311
23456

ex. de saída:

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
        leds = 0;//variavel é zerada, pois se não continuará somando com os outros testes

        while (j < strlen(numeros))
        {
            switch (numeros[j])
            {
                /*
                número           0  1  2  3  4  5  6  7  8  9                
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
