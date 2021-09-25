/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual 
o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir
mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, 
conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso 
contrário seu programa apresentará a mensagem: ?Presentation Error?.
*/

#include <stdio.h>

int main(void)
{
    int valorTotal, troco, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    printf("Insira um valor inteiro (0 < N < 1000000): ");
    scanf("%d", &valorTotal);

    troco = valorTotal;//auxiliar


    notas100 = troco/100;//determina o qtd de notas de 100, dividindo o valor total por 100. Ex: 150/100 = 1 notas
    troco = troco - (notas100*100);//determina o resto da divisão. Ex: 150/100 = 1 notas, 150-(1*100) = 50 <- resto

    notas50 = troco/50;
    troco = troco - (notas50*50);

    notas20 = troco/20;
    troco = troco - (notas20*20);

    notas10 = troco/10;
    troco = troco - (notas10*10);

    notas5 = troco/5;
    troco = troco - (notas5*5);

    notas2 = troco/2;
    troco = troco - (notas2*2);

    notas1 = troco/1;
    troco = troco - (notas1*1);

    printf("%d\n", valorTotal);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);


    return 0;
}
