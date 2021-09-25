/*
Leia um valor inteiro N que � a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste de dois inteiros X e Y. Voc� deve apresentar a soma de todos 
os �mpares existentes entre X e Y.

Entrada
A primeira linha de entrada � um inteiro N que � a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Sa�da
Imprima a soma de todos valores �mpares entre X e Y.
*/

#include <stdio.h>


int main(void)
{

    int nInteiro, X, Y;
    int i, j, soma = 0;

    printf("Insira um inteiro: ");//pede pra que o usuario insira um valor
    scanf("%d", &nInteiro);

    printf("X|Y\n");

    for (i = 0; i < nInteiro; i++) {//inicio 1� for

        scanf("%d%d", &X, &Y);//o usuario inserir� os valores conforme o inteiro inserido pelo usuario

        soma = 0;//� preciso que soma = 0 no inicio de cada loop para que n�o seja igual ao do ultimo loop executado 
        
        //QUANDO Y > X
        if (Y > X) {//Inicio IF
            //a cada loop, X recebe +1 valor AT� o mesmo estiver o mais pr�x. possivel de Y
            //ou seja, DE X+1 REPETIR AT� Y
            for (j = X+1; j < Y; j++) {
                if (j % 2 != 0) {soma+= j;}//soma os valores entre Y e X que N�O obtem resto 0 quando divisivel por 2 
            } 
        }//Fim IF

        //QUANDO X > Y
        else {//Inicio ELSE 
            //a cada loop, Y recebe +1 valor AT� o mesmo estiver o mais pr�x. possivel de X
            //ou seja, DE Y+1 REPETIR AT� X
            for (j = Y+1; j < X; j++) {
                if (j % 2 != 0) {soma+= j;}//soma os valores entre X e Y que N�O obtem resto 0 quando divisivel por 2
            }  
        }//Fim ELSE

        printf("%d\n", soma);//enfim apresenta a soma dos valores impares de cada teste
        
    }//fim 1� for


    
    
    
    return 0;
}
