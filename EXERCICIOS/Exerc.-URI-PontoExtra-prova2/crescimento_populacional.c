/*
Mariazinha quer resolver um problema interessante. Dadas as informa��es de popula��o e a taxa de 
crescimento de duas cidades quaisquer (A e B), ela gostaria de saber quantos anos levar� para que 
a cidade menor (sempre � a cidade A) ultrapasse a cidade B em popula��o. Claro que ela quer saber 
apenas para as cidades cuja taxa de crescimento da cidade A � maior do que a taxa de crescimento 
da cidade B, portanto, previamente j� separou para voc� apenas os casos de teste que tem a taxa 
de crescimento maior para a cidade A. Sua tarefa � construir um programa que apresente o tempo 
em anos para cada caso de teste.

Por�m, em alguns casos o tempo pode ser muito grande, e Mariazinha n�o se interessa em saber 
exatamente o tempo para estes casos. Basta que voc� informe, nesta situa��o, a mensagem 
"Mais de 1 seculo.".

Entrada
A primeira linha da entrada cont�m um �nico inteiro T, indicando o n�mero de casos de teste 
(1 ? T ? 3000). Cada caso de teste cont�m 4 n�meros: dois inteiros PA e PB 
(100 ? PA ? 1000000, PA < PB ? 1000000) indicando respectivamente a popula��o de A e B, e dois 
valores G1 e G2 (0.1 ? G1 ? 10.0, 0.0 ? G2 ? 10.0, G2 < G1) com um digito ap�s o ponto decimal 
cada, indicando respectivamente o crescimento populacional de A e B (em percentual).
Aten��o: A popula��o � sempre um valor inteiro, portanto, um crescimento de 2.5 % sobre uma 
popula��o de 100 pessoas resultar� em 102 pessoas, e n�o 102.5 pessoas, enquanto um crescimento 
de 2.5% sobre uma popula��o de 1000 pessoas resultar� em 1025 pessoas. Al�m disso, n�o utilize 
vari�veis de precis�o simples para as taxas de crescimento.

Sa�da
Imprima, para cada caso de teste, quantos anos levar� para que a cidade A ultrapasse a cidade B 
em n�mero de habitantes. Obs.: se o tempo for mais do que 100 anos o programa deve apresentar a 
mensagem: Mais de 1 seculo.
*/

#include <stdio.h>

int main() {

    int nInterger, populationA, populationB, i, qttYears=0;
    double growthA, growthB;

    scanf("%d", &nInterger);

    for(i = 0; i < nInterger; ++i) {

    scanf("%d %d %lf %lf", &populationA, &populationB, &growthA, &growthB);
    
        qttYears=0;
        while(populationA <= populationB) {
            ++qttYears;
            populationA = populationA + (populationA*(growthA/100));
            populationB = populationB + (populationB*(growthB/100));

            if(qttYears > 100) {
            printf("Mais de 1 seculo.\n");break;
            }
        }
        
        if(qttYears <= 100) {
        printf("%d anos.\n", qttYears);
        } 
    }   

    return 0;
}