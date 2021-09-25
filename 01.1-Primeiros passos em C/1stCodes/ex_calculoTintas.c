#include <stdio.h>
#include <locale.h>

/*
    Fa�a um programa que calcule a quantidade necess�ria de latas
    de tinta para pintar uma parede. O programa pergunta a medidas
    de largura e altura da parede em metros e imprime o resultado
    (em latas de tinta).

    Considere que o consumo de tinta � de 300 ml por metro quadrado
    e a quantidade de tinta por lata � de 2 litros.
*/

int main(void)
{   
    setlocale(LC_ALL, "Portuguese_Brazil");

    double alturaParede, larguraParede; 
    double areaParede;
    double consumoTinta, lataTinta, litros; 

    printf("Digite a altura da parede (em Metros):");
    scanf("%lf", &alturaParede);

    printf("Digite a largura da parede (em Metros):");
    scanf("%lf", &larguraParede);

    areaParede = alturaParede*larguraParede; //apresenta a area em metros quadrados (m^2)

    consumoTinta = 300*(double)areaParede; //apresenta a quantidade de tinta consumida em ml por m^2

    litros = (double)consumoTinta/1000;

    lataTinta = (double)consumoTinta/2000;

    printf("A quantidade de tinta necess�ria para pintar uma parede de %2lf m� ser� de %2lf litros,\nou seja, %2lf latas", areaParede, litros, lataTinta);

    
    return 0;
}
