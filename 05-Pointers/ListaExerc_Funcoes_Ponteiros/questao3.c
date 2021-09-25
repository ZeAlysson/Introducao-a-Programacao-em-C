/*
3) Escreva um programa em C que contenha uma função que receba um array de 
inteiros como argumento e o tamanho (int) do array. Faça esta função alterar
todos os valores negativos contidos no array pelo valor equivalente positivo. 
A função deverá retornar a quantidade (int) de valores modificados e pode ter
a assinatura abaixo:

int desnegativa(int vetor[], int tamanho);

Faça o programa em C para:
- receber um valor n (int) do usuário
- alocar dinamicamente o array
- solicitar n valores inteiros ao usuário para armazenar no array 
- invocar a função implementada (desnegativa) para modificar o array
- exibir o array modificado e a quantidade de itens modificados
- liberar o espaço de memória alocado para o array
*/

#include <stdio.h>
#include <stdlib.h>

int desnegativa(int vetor[], int tamanho) {
    
    int i;
    int cont = 0;

    printf("\nAlterando os valores o negativos:\n");

    for (i = 0; i < tamanho; i++)
    {
        //tranforma e exibe valores negativos em positivos
        if (vetor[i] < 0) 
        {
            vetor[i] = vetor[i]*(-1);
            ++cont;
        }
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    printf("\n%d valores foram alterados\n", cont);
}

int main(void)
{
    int *v;
    int tamanhoArray, i;

    printf("Insira o tamanho do array: ");
    scanf("%d", &tamanhoArray);

    //v[tamanhoArray]
    v = (int*)malloc(tamanhoArray*sizeof(int));

    //ler o valores do usuario
    for (i = 0; i < tamanhoArray; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    //invoca a função para alterar os valores negativos
    desnegativa(v, tamanhoArray);
    
    free(v);//libera memoria restante

    return 0;
}
