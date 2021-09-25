/*
1 - 2pts) Escrever um programa em C que contenha uma estrutura que sirva para o cadastro de 
produtos em uma loja. Esta estrutura armazena o codigo do produto (int), o preço (float) e a 
descrição do produto (char *); declare um array para armazenar 10 itens da estrutura definida. 

Faça o programa exibir um menu com as seguintes opções (e as realize através do uso de funções):
	a) Cadastrar produto
	b) Listar produtos cadastrados 
	c) Consultar preço e descrição a partir de código de produto
	d) Calcular media de preço dos produtos
	e) Sair	
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo_produto;
    float preco_produto;
    char *descricao_produto;
} cadastro;

//a) Cadastrar produto
cadastrar_produto(cadastro* lista, int cont_produto) {

    /*A funcao interliga-se com a estrutura para armazenar os dados lidos da funcao, na 
    estrutura*/

    if (cont_produto >= 10) {
        printf("\nVoce chegou ao limite de cadastrar produtos!\n");
    } else {

    lista[cont_produto].descricao_produto = malloc(30*sizeof(char));//aloca memoria para as strings/descricao
    
    printf("\n.......................CADASTRANDO PRODUTO........................\n");
    printf("\nCODIGO para o produto[%d]: ", cont_produto);
    scanf("%d", &lista[cont_produto].codigo_produto);//ler codigo do usuario e armazena na struct

    printf("PRECO para o produto[%d]: ", cont_produto);
    scanf("%f", &lista[cont_produto].preco_produto);//ler preco do usuario e armazena na struct

    printf("DESCRICAO para o produto[%d]: ", cont_produto);
    scanf("%s", lista[cont_produto].descricao_produto);//ler descricao do usuario e armazena na struct

    printf("\nProduto [%d] cadastrado com exito!\n", cont_produto);
    printf("\n..................................................................\n");

    fflush(stdin);//limpa buffer do teclado

    }
}

//b) Listar produtos cadastrados
listar_produtos(cadastro* lista, int cont)
{
    /*A funcao chama a estrutura com os dados cadastrados na mesma, para assim, poder 
    exibir esses dados*/

    int i;

    //exibe produtos cadastrados, caso haja algum
    for (i = 0; i < cont; i++)
    {             
        printf("\n---------------------------Produto[%d]:---------------------------\n", i);
        printf("\tCodigo: %d\n", lista[i].codigo_produto);
        printf("\tPreco: R$ %.2f\n", lista[i].preco_produto);
        printf("\tDescricao: %s\n", lista[i].descricao_produto);
        printf("------------------------------------------------------------------\n\n", i);
    }
}

//c) Consultar preco e descricao a partir de codigo de produto
consulta_produto(cadastro* lista, int cont)
{
    /*A funcao traz a estrutura e os dados cadastrados que houver nela, tambem com uma
    variavel inteira contadora que ler a quantidade de itens cadastrados */

    int code, i;

    printf("\n__________________________________________________________________\n");
    printf("\nInsira o CODIGO do produto a ser consultado: ");
    scanf("%d", &code);//ler um codigo do usuario

    for (i = 0; i < cont; i++)
    {
        //caso o codigo inserido estiver cadastrado, exibe as informacoes presentes no codigo
        if (code == lista[i].codigo_produto)
        {           
            printf("\nCom base no codigo '%d', foi encontrado:\n\n", code);
            printf("\tDescricao: %s\n", lista[i].descricao_produto);
            printf("\tPreco: R$ %.2f\n", lista[i].preco_produto);
            printf("\n__________________________________________________________________\n");
        } 
    }

    fflush(stdin);
}

//d) Calcular media de preco dos produtos
calcula_media_valores(cadastro* lista, int cont)
{
    int i;
    float soma = 0;

    //soma todos os precos dos produtos cadastrados
    for (i = 0; i < cont; i++)
    {
        soma = soma + lista[i].preco_produto;
    }

    //exibe a media, caso houver produtos cadastrados
    if (soma > 0)
    {
        printf("\nA media de preco dos produtos cadastrados ate agora = R$ %.2f\n", soma/cont);
    }

    //exibe a mensagem, caso nao houver nenhum preco/produto cadastrado
    else if (soma <= 0) 
    {
        printf("\nNenhum produto foi cadastrado!\n");
    }
}

int main(void)
{
    cadastro armazenamento[10];//variavel do tipo cadastro que contem a quantidade de itens
    int qtd_itens = 0;
    char opcao;
  
    //enquanto o usuario nao inserir 'e' como opcao, o ciclo continuara rodando 
    while ((opcao != 'e') && (opcao != 'E'))
    {
        printf (
        "\n==================================================================\n"
        "\n\ta) Cadastrar produto\n"
        "\tb) Listar produtos cadastrados\n" 
        "\tc) Consultar preco e descricao a partir do codigo do produto\n"
        "\td) Calcular media de preco dos produtos\n"
        "\te) Sair\n"
        );

        printf("\t\nInforme a opcao desejada: ");
        scanf("%c", &opcao);//ler opcao desejada
        printf("\n==================================================================\n");

        fflush(stdin);
        
        //executa as funcoes de acordo com o caractere inserido
        switch (opcao)
        {
            /*em cada funcao invocada, entra um vetor(armazenamento) com a estrutura de 'cadastro'
            na qual vai ser preencida/exibida*/
            case 'a':
            case 'A': {
                cadastrar_produto(armazenamento, qtd_itens);
                qtd_itens++;
            } break;

            case 'b':
            case 'B': {
                listar_produtos(armazenamento, qtd_itens);
            } break;

            case 'c':
            case 'C': {
                consulta_produto(armazenamento, qtd_itens);
            } break;

            case 'd':
            case 'D': {
                calcula_media_valores(armazenamento, qtd_itens);
            } break;

            case 'e':
            case 'E': {
                printf("\nxxxxxxxxxxxxxxxxx Programa encerrado pelo usuario xxxxxxxxxxxxxxxxx\n");
                exit(0);
            }

            default: {
                printf("\nOpcao invalida! Tente novamente\n");
            }
        }
    }
    
    return 0;
}
