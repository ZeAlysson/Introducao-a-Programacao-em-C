#include <stdio.h>

/*
Fulano tem 1,50 metro e cresce 2 centímetros por ano,
enquanto Ciclano tem 1,10 e cresce 3 centímetros por
ano. Construa um programa que calcule e imprima
quantos anos serão necessários para que Ciclano seja
maior que Fulano.
*/

int main(void)
{
    float alturaFulano=1.50, alturaCiclano=1.10;
    int anosNecessarios=0;
    
    //enquanto a altura de fulano for maior que a de ciclano, executará-se o ciclo:
    while (alturaFulano>alturaCiclano)
    {
        alturaFulano += 0.02;

        alturaCiclano += 0.03;

        ++anosNecessarios;
    }
    
    //quando finalmente ciclano ficar maior que fulano, apresenta-se os valores finais e anos necessarios
    printf("Altura de fulano quando menor que a de ciclano: %.2f\n", alturaFulano);
    printf("Altura de ciclano quando maior que a de fulano: %.2f\n", alturaCiclano);
    printf("%i anos sao necessarios para ciclano ficar maior que fulano\n", anosNecessarios);

    return 0;
}
