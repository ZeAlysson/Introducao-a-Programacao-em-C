#include <stdio.h>
#include <locale.h>
#include <math.h>
/*
    Fazer um programa para ler dois números e um
    caractere contendo um dos símbolos das operações (+, -, *, / e ^).
    Imprimir o resultado da operação efetuada sobre os
    números lidos usando switch.
 */

int main(void)
{ 
    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, n2;
    char op;


    printf("\nTemos as seguites operações:\n\nSomar: +\nSubtrair: -\nMultiplicar: *\nDividir: /\nPotência: ^");
    printf("\nOperação desejada: ");
    scanf("%c", &op);
    printf("\nInsira um valor: ");
    scanf("%f", &n1);
    printf("Insira outro valor: ");
    scanf("%f", &n2);



    switch (op)
    {

    case '+': printf("%.2f + %.2f = %.2f",n1,n2,(n1+n2));
        break;

    case '-': printf("%.2f - %.2f = %.2f",n1,n2,(n1-n2));
        break;

    case '*': printf("%.2f * %.2f = %.2f",n1,n2,(n1*n2));
        break;

    case '/': printf("%.2f / %.2f = %.2f",n1,n2,(n1/n2));
        break;

    case '^': printf("%.2f^%.2f = %.2f",n1,n2,pow(n1,n2));
        break;
    
    default: printf("Operação inválida");
        break;
    }

    return 0;
}
