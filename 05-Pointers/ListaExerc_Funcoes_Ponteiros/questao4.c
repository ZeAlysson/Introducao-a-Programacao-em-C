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
- aloque espa�o dinamicamente na memoria para criar um vetor de tPessoa de n
elementos e verifique se o espa�o foi alocado com sucesso
- preencha o vetor criado com n valores digitados pelo usuario
- exiba o vetor preenchido na tela e a m�dia de alturas dos itens tPessoa
- libere o espa�o de memoria alocado

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
    float soma=0;

    tPessoa *vetor_pessoas;

    printf("Insira o elemento 'n': ");
    scanf("%d", &n);

    vetor_pessoas = (tPessoa*)malloc(n*sizeof(tPessoa));

    if(vetor_pessoas == NULL)
    {
        printf("malloc error\n");
        exit(0);
    }

    for (i = 0; i < n; i++)
    {
        printf("\nInsira a matricula[%d]: ", i);
        scanf("%d", &vetor_pessoas[i].matricula);

        printf("Insira a data de nascimento[%d]: ", i);
        scanf("%d %d %d", &vetor_pessoas[i].dataNascimento.dia, 
                          &vetor_pessoas[i].dataNascimento.mes,
                          &vetor_pessoas[i].dataNascimento.ano);

        printf("Insira a altura[%d]: ", i);
        scanf("%f", &vetor_pessoas[i].altura);

        soma += vetor_pessoas[i].altura;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nMatricula tPessoa[%d]: %d\n", i, vetor_pessoas[i].matricula);

        printf("Data de nascimento tPessoa[%d]: %d/%d/%d\n", i, vetor_pessoas[i].dataNascimento.dia,
                                                                vetor_pessoas[i].dataNascimento.mes,
                                                                vetor_pessoas[i].dataNascimento.ano);
        
        printf("Altura tPessoa[%d]: %f\n", i, vetor_pessoas[i].altura);
    }

    printf("Media de alturas: %.2f\n", soma/n);
    
    

    return 0;
}
