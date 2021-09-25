/*
Considere o tipo de dado tRetangulo definido abaixo:
typedef struct {
	float base;
	float altura;
} tRetangulo;

Faça um programa em C que contenha uma função que receba como argumento uma
variável do tipo tRetangulo e retorne, através de dois ponteiros para float
passados como argumento, a área e o perímetro de um retângulo considerando
os valores contidos na estrutura. A assinatura da funcao pode ser:

void calculaRetangulo(tRetangulo r, float *area, float *perimetro);
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float base;
	float altura;
} tRetangulo;

void calculaRetangulo(tRetangulo r, float *area, float *perimetro)
{
    *area = r.base * r.altura;
    *perimetro = (r.base*2) + (r.altura*2);
}

int main(void)
{
    float areaRet, perimetroRet;
    tRetangulo ret;

    printf("Insira a base do retangulo: ");
    scanf("%f", &ret.base);

    printf("Insira a altura do retangulo: ");
    scanf("%f", &ret.altura);

    calculaRetangulo(ret, &areaRet, &perimetroRet);

    printf("Area do retangulo: %.2f\n", areaRet);
    printf("Perimetro do retangulo: %.2f\n", perimetroRet);

    
    return 0;
}
