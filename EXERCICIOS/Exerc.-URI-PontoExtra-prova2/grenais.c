/*
A Federa��o Ga�cha de Futebol contratou voce para escrever um programa para fazer uma estat�stica 
do resultado de v�rios GRENAIS. Escreva um programa para ler o n�mero de gols marcados pelo Inter 
e pelo Gr�mio em um GRENAL. Logo ap�s escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar
uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o n�mero 
de gols marcados pelos times em uma nova partida, caso contr�rio deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estat�stica.
- O n�mero de vit�rias do Inter.
- O n�mero de vit�rias do Gr�mio.
- O n�mero de Empates.
- Uma mensagem indicando qual o time que venceu o maior n�mero de GRENAIS 
(ou "Nao houve vencedor", caso termine empatado).

Entrada
O arquivo de entrada cont�m 2 valores inteiros, correspondentes aos gols marcados pelo Inter e
pelo Gr�mio respectivamente. Em seguida h�ver� um inteiro (1 ou 2), correspondente � repeti��o 
do programa.

Sa�da
Ap�s cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o 
algoritmo for encerrado devem ser mostradas as estat�sticas conforme a descri��o apresentada 
acima. Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.
*/

#include <stdio.h>
 
int main(void) {

    int GRENAL, GRE, INTER, i;
    int WinInter=0, WinGrem=0, qtdGRENAL=0, empates=0;

    i = 0;
    while(GRENAL != 2) {
       ++i;
        printf("Resultado da partida[%d]: ", i);
        scanf("%d%d", &INTER, &GRE);

        if (INTER > GRE) {++WinInter;}
        if (GRE > INTER) {++WinGrem;}
        if (INTER == GRE) {++empates;}

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &GRENAL);
        ++qtdGRENAL;
    }

    printf("%d grenais\n", qtdGRENAL);
    printf("Inter:%d\n", WinInter);
    printf("Gremio:%d\n", WinGrem);
    printf("Empates:%d\n", empates);
    if (WinInter > WinGrem) { printf("Inter venceu mais\n"); }
    else { printf("Gremio venceu mais\n"); }
    if (WinInter == WinGrem) { printf("Nao houve vencedor\n"); }
    
    return 0;
}