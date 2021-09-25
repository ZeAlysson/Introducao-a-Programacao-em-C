#include <stdio.h>
#include <locale.h>

/*
Escreva um programa que peça ao usuário que digite
três números inteiros, correspondentes a dia , mês e ano.
Teste os números recebidos, e em caso de haver algum
inválido, repita a leitura até conseguir valores que estejam
na faixa correta (dias entre 1 e 31, mês entre 1 e 12 e ano
entre 1900 e 2100).
Se estiver tudo certo exiba a data
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int dia, mes, ano;
    
    //vai perguntar a dia para o usuario, caso o valor esteja fora das condições:
    //(dia menor que zero ou dia maior que 31), o programa perguntara novamente para o usuario
    //até o mesmo inserir um valor válido para imprimir
    do 
    {
        printf("\nDia: ");
        scanf("%d", &dia);
    } while ((dia<=0)||(dia>31));

    //perguntará o valor do mês, caso o valor esteja fora das condições, executará o ciclo até
    //o usuario inserir um valor válido
    do
    {
        printf("Mês: ");
        scanf("%d", &mes);
    } while ((mes<=0)||(mes>12));

    //perguntará o ano, caso o valor inserido esteja fora das condições, perguntará novamente
    //até que um valor valido seja inserido
    do
    {
        printf("Ano: ");
        scanf("%d", &ano);
    } while ((ano<1900)||(ano>2100));
    

    //caso todos os valores para a data estejam de acordo com as condições, o programa exibe
    //a data conforme os valores válido digitados pelo usuario
    printf("\nData: %d/%d/%d",dia, mes, ano);
    

    return 0;
}
