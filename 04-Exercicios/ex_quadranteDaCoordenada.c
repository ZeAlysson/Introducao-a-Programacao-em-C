#include <stdio.h>

/*
    Faca um programa em C que leia as coordenadas X e Y de um ponto no plano cartesiano (2d)
    Exiba qual o quadrante associado a este ponto
     2 (-, +)   __|__  (+, +) 1
     3 (-, -)     |    (+, -) 4
*/ 

int main(void)
{
    int x, y;

    printf("Insira as coordenadas respectivamente (Ex: x, y): ");
    scanf("%i, %i", &x, &y);

    if ((x>0) && (y>0)) {
        printf("x = %i, y = %i pertencem ao primeiro quadrante(+, +)", x, y);
    }

    else {
        if ((x<0) && (y<0)) {
            printf("x = %i, y = %i pertencem ao terceiro quadrante(-, -)", x, y);
        }
    }

    if ((x<0) && (y>0)) {
        printf("x = %i, y = %i pertencem ao segundo quadrante(-, +)", x, y);
    }

    else {
        if ((x>0) && (y<0))
        {
            printf("x = %i, y = %i pertencem ao quarto quadrante(+, -)", x, y);
        }       
    }
        
    return 0;
}
