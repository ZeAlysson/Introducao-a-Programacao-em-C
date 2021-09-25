/*
Este programa deve ler uma vari�vel inteira X in�meras vezes (deve parar quando o valor no 
arquivo de entrada for igual a zero). Para cada valor lido imprima a sequ�ncia de 1 at� X, 
com um espa�o entre cada n�mero e seu sucessor.

Obs: cuide para n�o deixar espa�o em branco ap�s o �ltimo valor apresentado na linha ou voc� 
receber� Presentation Error.

Entrada
O arquivo de entrada cont�m v�rios n�meros inteiros. O �ltimo n�mero no arquivo de entrada � 0.

Sa�da
Para cada n�mero N do arquivo de entrada deve ser impressa uma linha de 1 at� N, conforme 
o exemplo abaixo. N�o deve haver espa�o em branco ap�s o �ltimo valor da linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numero, i;

    while (numero =! 0) {//Inicio WHILE

        scanf("%d", &numero);//ler o numero inserido pelo usuario

        if (numero == 0) {break;}//caso valor inserido for 0, o programa para
        
        else {//SE numero != 0
            //enquanto i(= 1) for menor que 'numero', i ser� somado com +1 at� ser igual a 'numero'
            for (i = 1; i != numero; i++) {
            printf("%d ", i);//imprime a sequencia
            } 
            printf("%d\n", i);

        }
    }//Fim WHILE 
   
    return 0;
}

/*
 while (numero =! 0) {//Inicio WHILE

        scanf("%d", &numero);//ler o numero inserido pelo usuario

        if (numero == 0) {break;}//caso valor inserido for 0, o programa para
        
        else {//SE numero != 0
            //enquanto i(= 1) for menor que 'numero', i ser� somado com +1 at� ser igual a 'numero'
            for (i = 1; i <= numero; i++) {//enquanto i(= 1) for menor que 'numero', i ser� somado com +1 at� ser igual a 'numero'
            printf("%d ", i);//imprime a sequencia
            } 
            printf("\n");

        }
    }//Fim WHILE 
*/
