/*
Faça um programa que leia tantos numeros quanto o usuário desejar, até que 
este digite um valor negativo. Exiba, então: a média dos números, a quantidade
de números pares, a quantidade de números i­mpares, qual o menor numero par e
qual o maior numero i­mpar. 
*/

#include <stdio.h>

int main(void)
{
    int numero, i=0, contPar=0, contImpar=0, menorPar, maiorImpar, cont=0;
    float soma=0;

    while (numero >= 0)
    {
    
        printf("Insira um numero[%d]: ", ++i);
        scanf("%d", &numero);

        if(numero < 0) break;

        soma += numero;
        ++cont;

        if(numero % 2 == 0) {

            ++contPar;//conta a quantidade de numeros pares

            if(contPar == 1) {
                menorPar = numero;
            } else if(numero < menorPar) {
                menorPar = numero;
            }

        } else {

            ++contImpar;//conta a quantidade de numeros impares

            if(contImpar == 1) {
                maiorImpar = numero;
            } else if(numero > maiorImpar) {
                maiorImpar = numero;
            }

        }

    }

    printf("Media dos numeros: %.2f\n", soma/cont);
    printf("Quantidade de numeros pares: %d\n", contPar);
    printf("Quantidade de numeros impares: %d\n", contImpar);
    printf("Menor numero par: %d\n", menorPar);
    printf("Maior numero impar: %d\n", maiorImpar);
    

    
    return 0;
}
