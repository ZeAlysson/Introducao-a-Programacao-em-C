#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Crie um array de 10 elementos com elementos aleatorios em cada uma das
    posicoes.

    Depois solicite do usuario um numero e verifique se este consta 
    no array. Caso positivo, exiba a posicao que este numero esta presente.

    Desafio/exercicio: altere o codigo para ele dizer tambem quando o numero
    nao esta presente.

*/


#define QTD_ARRAYS 10 //define para definir a quantidade de elementos

int main(void)
{

    int elementos[QTD_ARRAYS];//array pra armazenar a quantidade de elementos
    int i, numeroSolicitado, maior, menor, soma=0;

    srand(time(NULL));//semente para gerar numeros aleatorios

    for (i = 0; i < QTD_ARRAYS; i++) {

        elementos[i] = (rand() % 100);//gera valores aleatorios e armazena no array
        printf("elemento[%d]: %d \n",i, elementos[i]);//apresenta os numeros gerados de acordo com a quantidade de elementos definida

        soma += elementos[i];//soma todos os valores

        //caso o primeiro elemento gerado seja igual a zero, logo o mesmo será o maior e menor numero
        if (i == 0) { 
            elementos[i] = maior;
            elementos[i] = menor;
        } 
        
        
        else if (elementos[i]>maior) {
            maior = elementos[i];
        }

        else if (elementos[i]<menor) {
            menor = elementos[i];
        }        

    }

    printf("\nMaior numero = %d\nMenor numero = %d\nMedia dos elementos = %d\n", maior, menor, (soma/QTD_ARRAYS));


    printf("\nInsira um numero para verificacao: ");
    scanf("%d", &numeroSolicitado);

    for (i = 0; i < QTD_ARRAYS; i++)
    {
        //informa se o numero inserido pelo usuario pertencer aos elementos gerandos aleatoriamente
        if (numeroSolicitado == elementos[i])
        {
            printf("%d aparece na lista => elementos[%d]", numeroSolicitado, i);
        }
        
    }


    
    
    return 0;
}
