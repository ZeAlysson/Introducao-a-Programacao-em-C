/*
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos 
os ímpares existentes entre X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y.
*/

#include <stdio.h>


int main(void)
{

    int nInteiro, X, Y;
    int i, j, soma = 0;

    printf("Insira um inteiro: ");//pede pra que o usuario insira um valor
    scanf("%d", &nInteiro);

    printf("X|Y\n");

    for (i = 0; i < nInteiro; i++) {//inicio 1º for

        scanf("%d%d", &X, &Y);//o usuario inserirá os valores conforme o inteiro inserido pelo usuario

        soma = 0;//é preciso que soma = 0 no inicio de cada loop para que não seja igual ao do ultimo loop executado 
        
        //QUANDO Y > X
        if (Y > X) {//Inicio IF
            //a cada loop, X recebe +1 valor ATÉ o mesmo estiver o mais próx. possivel de Y
            //ou seja, DE X+1 REPETIR ATÉ Y
            for (j = X+1; j < Y; j++) {
                if (j % 2 != 0) {soma+= j;}//soma os valores entre Y e X que NÃO obtem resto 0 quando divisivel por 2 
            } 
        }//Fim IF

        //QUANDO X > Y
        else {//Inicio ELSE 
            //a cada loop, Y recebe +1 valor ATÉ o mesmo estiver o mais próx. possivel de X
            //ou seja, DE Y+1 REPETIR ATÉ X
            for (j = Y+1; j < X; j++) {
                if (j % 2 != 0) {soma+= j;}//soma os valores entre X e Y que NÃO obtem resto 0 quando divisivel por 2
            }  
        }//Fim ELSE

        printf("%d\n", soma);//enfim apresenta a soma dos valores impares de cada teste
        
    }//fim 1º for


    
    
    
    return 0;
}
