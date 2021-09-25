#include <stdio.h>

/*
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores 
digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados 
foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final 
de linha após cada uma.

Exemplo de Entrada	
-5
0
-3
-4
12

Exemplo de Saída
3 valor(es) par(es)
2 valor(es) impar(es)
1 valor(es) positivo(s)
3 valor(es) negativo(s)
*/

int main(void) {

    int i, numInteiro, par=0, impar=0, numPositive=0, numNegative=0;

    //pede ao usuario o 5 valores inteiros
    for (i = 0; i < 5; i++) {
        scanf("\n%d", &numInteiro);

        if (numInteiro % 2 == 0) { ++par; }// +1 valor na variavel 'par' quando 'numInteiro' %2 = 0
        if (numInteiro % 2 != 0) { ++impar; }// +1 valor na variavel 'impar' quando 'numInteiro' %2 != 0
        if (numInteiro > 0) { ++numPositive; }// +1 valor na variavel 'numPositive' quando maior que 0
        if (numInteiro < 0) { ++numNegative; }// +1 valor na variavel 'numNegative' quando menor que 0
        
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", numPositive);
    printf("%d valor(es) negativo(s)\n", numNegative);
 
    
    return 0;
}