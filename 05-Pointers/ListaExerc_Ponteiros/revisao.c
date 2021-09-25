/*
4) Considere o tipo de dado tPessoa definido abaixo:
typedef struct {
	int dia, mes, ano;
} tData;

typedef struct {
	int matricula;
	tData dataNascimento;
	float altura;
} tPessoa;

Escreva um programa em C que receba um valor n (int) de entrada e, em seguida:
- aloque espaço dinamicamente na memoria para criar um vetor de tPessoa de n
elementos e verifique se o espaço foi alocado com sucesso
- preencha o vetor criado com n valores digitados pelo usuario
- exiba o vetor preenchido na tela e a média de alturas dos itens tPessoa
- libere o espaço de memoria alocado
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int dia, mes, ano;
} tData;

typedef struct {
	int matricula;
	tData dataNascimento;
	float altura;
} tPessoa;


int main(void)
{
    int n, i;
    float soma = 0;
    tPessoa *vetor;

    printf("\nInsira um valor inteiro: ");
    scanf("%d", &n);

    vetor = (tPessoa*)malloc(n*sizeof(tPessoa));

    if(vetor == NULL)
    {
        printf("MALLOC ERROR");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        printf("\nMatricula Pessoa[%d]: ", i);
        scanf("%d", &vetor[i].matricula);

        printf("Data de Nascimento Pessoa[%d]: ", i);
        scanf("%d %d %d", &vetor[i].dataNascimento.dia,
                          &vetor[i].dataNascimento.mes,
                          &vetor[i].dataNascimento.ano);

        printf("Altura Pessoa[%d]: ", i);
        scanf("%f", &vetor[i].altura);

        soma += vetor[i].altura;
    }

    printf("\nExibindo dados adquiridos...\n");

    for (i = 0; i < n; i++)
    {
        printf("\nMatricula Pessoa[%d]: %d\n", i, vetor[i].matricula);

        printf("Data de nascimento Pessoa[%d]: %d/%d/%d\n", i, vetor[i].dataNascimento.dia,
                                                             vetor[i].dataNascimento.mes,
                                                             vetor[i].dataNascimento.ano);

        printf("Altura Pessoa[%d] = %.2f\n", i, vetor[i].altura);
    }
    
        printf("\nMedia das alturas: %.2f\n", soma/n);
    
    
    return 0;
}
