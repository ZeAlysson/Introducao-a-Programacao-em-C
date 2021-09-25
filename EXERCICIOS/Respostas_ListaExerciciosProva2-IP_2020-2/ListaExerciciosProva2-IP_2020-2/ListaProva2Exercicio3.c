#include <stdio.h>
/*
Faça um programa que leia tantos números quanto o usuário desejar, até que 
este digite um valor negativo. Exiba, então: a média dos números, a quantidade
de números pares, a quantidade de números ímpares, qual o menor número par e
qual o maior número ímpar. 
*/

int main(void) {
    float n, soma, media, menor_par, maior_impar;

    int n_i, contador, quantidade_pares, quantidade_impares;

    contador = 0;
    soma = 0;
    quantidade_pares = 0;
    quantidade_impares = 0;

    do {
        printf("Digite um numero: ");
        scanf("%f", &n);

        if (n < 0)
            break;

        n_i = (int) n;
        contador++;
        soma += n;

        if (n_i % 2 == 0) {
            quantidade_pares++;
            if (quantidade_pares == 1) {
                menor_par = n;
            } else if (n < menor_par)
                menor_par = n;
        } else {
            quantidade_impares++;
            if (quantidade_impares == 1) {
                maior_impar = n;
            } else if (n > maior_impar)
                maior_impar = n;
        }
    } while (n >= 0);

    media = soma/contador;

    printf("Media dos numeros: %f\n", media);
    printf("Quantidade de numeros pares: %d\n", quantidade_pares);
    printf("Quantidade de numeros impares: %d\n", quantidade_impares);
    printf("Maior numero impar: %f\n", maior_impar);
    printf("Menor numero par: %f\n", menor_par);


    return 0;
}