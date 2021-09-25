/*
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y 
uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

Entrada
A entrada cont�m v�rios casos de teste. Cada caso cont�m dois valores inteiros X e Y. 
A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

Sa�da
Para cada caso de teste imprima ?Crescente?, caso os valores tenham sido digitados na 
ordem crescente, caso contr�rio imprima a mensagem ?Decrescente?.
*/

#include <stdio.h>

int main(void) {

    int X, Y;

    while (X != Y) {

        scanf("%d%d", &X, &Y);

        if (X == Y) {
            break;
        }
    
        if (X > Y) {
            printf("Decrescente\n");
        } else { 
            printf("Crescente\n");
        } 
                
    }
    

    return 0;
}
