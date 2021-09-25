/*
        Faca um programa que pergunte ao usuario em um menu qual poligono ele deseja calcular a area.
        Apos a escolha, solicite os parametros adequados e calcule a area solicitada.
        Usar: Circulo, Triangulo e Retangulo
    */
#include <stdio.h>
#include <math.h>

int main(void) {

    int PoligSelected;

    //informa ao usuario as possiveis poligonos a serem calculados
    printf("\nSolicite qual dos poligonos deseja-se calcular:\n\n"
            "\t1.Circulo\n\t2.Triangulo\n\t3.Retangulo"); 
    
    printf("\n\nOpcao:");
    scanf("%i", &PoligSelected);

    switch (PoligSelected) {      
        case 1:{ 
            float valorRaio, valorCirc;
            printf("Insira o valor de Raio: ");
            scanf("%f", &valorRaio);
            printf("-------- Area do circulo = %.2f --------", 3.14 * (pow(valorRaio, 2))); }  
            break;

        case 2:{ 
            float baseTriangulo, alturaTriangulo;
            printf("Base e Altura do triangulo, respectivamente(b,h) = ");
            scanf("%f,%f", &baseTriangulo, &alturaTriangulo);
            printf("-------- Area do triangulo = %.2f --------", (baseTriangulo*alturaTriangulo)/2); }  
            break;

        case 3: {
            float baseRetangulo, alturaRetangulo;
            printf("Base e Altura do retangulo, respectivamente(b,h) = ");
            scanf("%f,%f", &baseRetangulo, &alturaRetangulo);
            printf("-------- Area do retangulo = %.2f --------", (baseRetangulo*alturaRetangulo)); } 
            break;
    
    default: printf("ERRO - Opcao inexistente");
        break;
    }

    return 0;
}

