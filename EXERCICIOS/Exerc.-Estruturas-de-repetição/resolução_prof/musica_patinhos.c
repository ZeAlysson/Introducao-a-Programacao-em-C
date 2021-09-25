#include <stdio.h>

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

int main(void) {
    int quantidadeOriginalPatinhos = 0;
    int contadorPatinhosMusica = 0;

    printf("Digite a quantidade de patinhos: ");
    scanf("%d", &quantidadeOriginalPatinhos);

    contadorPatinhosMusica = quantidadeOriginalPatinhos;

    printf("Quantidade de patinhos inserida: %d\n\n");

    while(contadorPatinhosMusica > 0) {
        printf("%d patinhos foram passear\n", contadorPatinhosMusica--);
        printf("Alem das montanhas\nPara brincar\n");
        printf("A mamae gritou: Qua, qua, qua, qua\n");
        printf("Mas so %d patinhos voltaram de la.\n", contadorPatinhosMusica);
    }

    if (quantidadeOriginalPatinhos > 0) {
        printf("A mamae patinha foi procurar\nAlem das montanhas\n");
        printf("Na beira do mar\nA mamae gritou: Qua, qua, qua, qua\n");
        printf("E os %d patinhos voltaram de la.\n\n", quantidadeOriginalPatinhos);
    } else {
        printf("Valor de patinhos inserido menor igual a zero!\n\n");
    }

    return 0;
}