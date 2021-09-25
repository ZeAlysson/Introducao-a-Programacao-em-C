/*
1) Faça um programa em C que pergunte um número inteiro e realize a exibição da 
letra de uma música no formato (onde n é o número inteiro):

n patinhos foram passear
Além das montanhas
Para brincar
A mamãe gritou: Quá, quá, quá, quá
Mas só n-1 patinhos voltaram de lá.

Trecho se repete até que o valor de patinhos a voltar seja igual a zero.

Ao final, exiba o trecho onde todos os patinhos voltam:

A mamãe patinha foi procurar
Além das montanhas
Na beira do mar
A mamãe gritou: Quá, quá, quá, quá
E os n patinhos voltaram de lá.
*/

#include <stdio.h>
#include <locale.h>


int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numeroPatinhos, cont=1, numeroPatinhosAux;

    printf("Insira um numero inteiro:");
    scanf("%i", &numeroPatinhos);

    //auxiliar criada para conservar o valor original de patinhos
    numeroPatinhosAux = numeroPatinhos;

    /*a cada ciclo o numero de patinhos do inicio do verso vai ser subtraído por 1 enquanto o 
    numero de patinhos for maior que o variavel contadora(cont=1)*/
    do
    { 
        printf(
        "\n%i patinhos foram passear"
        "\nAlém das montanhas"
        "\nPara brincar"
        "\nA mamãe gritou: Quá, quá, quá, quá"
        "\nMas só %i patinhos voltaram de lá.\n", numeroPatinhos, numeroPatinhos-1);
        --numeroPatinhos;

    } while (cont < numeroPatinhos);
    
    /*quando o numero de patinhos do inicio do verso chega em 1 e houver 0 patinhos para o proximo,
    imprime o seguinte texto para finalizar a musica.*/
    if (numeroPatinhos = 1)
    {
        printf(
        "\n%i patinho foi passear"
        "\nAlém das montanhas"
        "\nPara brincar"
        "\nA mamãe gritou: Quá, quá, quá, quá"
        "\nMas nenhum patinho voltou de lá.\n", numeroPatinhos);
    }

    /*é chamado a variavel auxiliar para apresentar o numero total de patinhos inseridos no inicio*/
    printf(
        "\nA mamãe patinha foi procurar"
        "\nAlém das montanhas"
        "\nNa beira do mar"
        "\nA mamãe gritou: Quá, quá, quá, quá"
        "\nE os %i patinhos voltaram de lá.\n", numeroPatinhosAux);
    
    return 0;
}
