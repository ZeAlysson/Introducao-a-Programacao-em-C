/*
1) Fa�a um programa em C que pergunte um n�mero inteiro e realize a exibi��o da 
letra de uma m�sica no formato (onde n � o n�mero inteiro):

n patinhos foram passear
Al�m das montanhas
Para brincar
A mam�e gritou: Qu�, qu�, qu�, qu�
Mas s� n-1 patinhos voltaram de l�.

Trecho se repete at� que o valor de patinhos a voltar seja igual a zero.

Ao final, exiba o trecho onde todos os patinhos voltam:

A mam�e patinha foi procurar
Al�m das montanhas
Na beira do mar
A mam�e gritou: Qu�, qu�, qu�, qu�
E os n patinhos voltaram de l�.
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

    /*a cada ciclo o numero de patinhos do inicio do verso vai ser subtra�do por 1 enquanto o 
    numero de patinhos for maior que o variavel contadora(cont=1)*/
    do
    { 
        printf(
        "\n%i patinhos foram passear"
        "\nAl�m das montanhas"
        "\nPara brincar"
        "\nA mam�e gritou: Qu�, qu�, qu�, qu�"
        "\nMas s� %i patinhos voltaram de l�.\n", numeroPatinhos, numeroPatinhos-1);
        --numeroPatinhos;

    } while (cont < numeroPatinhos);
    
    /*quando o numero de patinhos do inicio do verso chega em 1 e houver 0 patinhos para o proximo,
    imprime o seguinte texto para finalizar a musica.*/
    if (numeroPatinhos = 1)
    {
        printf(
        "\n%i patinho foi passear"
        "\nAl�m das montanhas"
        "\nPara brincar"
        "\nA mam�e gritou: Qu�, qu�, qu�, qu�"
        "\nMas nenhum patinho voltou de l�.\n", numeroPatinhos);
    }

    /*� chamado a variavel auxiliar para apresentar o numero total de patinhos inseridos no inicio*/
    printf(
        "\nA mam�e patinha foi procurar"
        "\nAl�m das montanhas"
        "\nNa beira do mar"
        "\nA mam�e gritou: Qu�, qu�, qu�, qu�"
        "\nE os %i patinhos voltaram de l�.\n", numeroPatinhosAux);
    
    return 0;
}
