/*4) Escreva um programa em C que leia o número de lados de um polígono e exiba 
o nome do polígono correspondente (até 8 lados). Use switch/case.*/

#include <stdio.h>

int main(void) {
    
    int numLados;

    printf("Insira a quantidade de lados do poligono(3 a 8 lados):");
    scanf("%i", &numLados);

    switch (numLados) {

    case 1: printf("Quantidade invalida de lados");
        break;
    case 2: printf("Quantidade invalida de lados");
        break;
    case 3: printf("3 lados equivalem um TRIANGULO");
        break;
    case 4: printf("4 lados equivalem um QUADRILATERO");
        break;
    case 5: printf("5 lados equivalem um PENTAGONO");
        break;
    case 6: printf("6 lados equivalem um HEXAGONO");
        break;
    case 7: printf("7 lados equivalem um HEPTAGONO");
        break;
    case 8: printf("8 lados equivalem um OCTAGONO");
        break;
    
    default: printf("Quantidade invalida de lados");
        break;
    }

    return 0;
}
