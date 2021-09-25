/*
Este programa deve ler uma variável inteira X inúmeras vezes (deve parar quando o valor no 
arquivo de entrada for igual a zero). Para cada valor lido imprima a sequência de 1 até X, 
com um espaço entre cada número e seu sucessor.

Obs: cuide para não deixar espaço em branco após o último valor apresentado na linha ou você 
receberá Presentation Error.

Entrada
O arquivo de entrada contém vários números inteiros. O último número no arquivo de entrada é 0.

Saída
Para cada número N do arquivo de entrada deve ser impressa uma linha de 1 até N, conforme 
o exemplo abaixo. Não deve haver espaço em branco após o último valor da linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numero, i;

    while (numero =! 0) {//Inicio WHILE

        scanf("%d", &numero);//ler o numero inserido pelo usuario

        if (numero == 0) {break;}//caso valor inserido for 0, o programa para
        
        else {//SE numero != 0
            //enquanto i(= 1) for menor que 'numero', i será somado com +1 até ser igual a 'numero'
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
            //enquanto i(= 1) for menor que 'numero', i será somado com +1 até ser igual a 'numero'
            for (i = 1; i <= numero; i++) {//enquanto i(= 1) for menor que 'numero', i será somado com +1 até ser igual a 'numero'
            printf("%d ", i);//imprime a sequencia
            } 
            printf("\n");

        }
    }//Fim WHILE 
*/
