#include <stdio.h>
#include <locale.h>

/*
Escreva um programa que pe�a ao usu�rio que digite
tr�s n�meros inteiros, correspondentes a dia , m�s e ano.
Teste os n�meros recebidos, e em caso de haver algum
inv�lido, repita a leitura at� conseguir valores que estejam
na faixa correta (dias entre 1 e 31, m�s entre 1 e 12 e ano
entre 1900 e 2100).
Se estiver tudo certo exiba a data
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int dia, mes, ano;
    
    //vai perguntar a dia para o usuario, caso o valor esteja fora das condi��es:
    //(dia menor que zero ou dia maior que 31), o programa perguntara novamente para o usuario
    //at� o mesmo inserir um valor v�lido para imprimir
    do 
    {
        printf("\nDia: ");
        scanf("%d", &dia);
    } while ((dia<=0)||(dia>31));

    //perguntar� o valor do m�s, caso o valor esteja fora das condi��es, executar� o ciclo at�
    //o usuario inserir um valor v�lido
    do
    {
        printf("M�s: ");
        scanf("%d", &mes);
    } while ((mes<=0)||(mes>12));

    //perguntar� o ano, caso o valor inserido esteja fora das condi��es, perguntar� novamente
    //at� que um valor valido seja inserido
    do
    {
        printf("Ano: ");
        scanf("%d", &ano);
    } while ((ano<1900)||(ano>2100));
    

    //caso todos os valores para a data estejam de acordo com as condi��es, o programa exibe
    //a data conforme os valores v�lido digitados pelo usuario
    printf("\nData: %d/%d/%d",dia, mes, ano);
    

    return 0;
}
