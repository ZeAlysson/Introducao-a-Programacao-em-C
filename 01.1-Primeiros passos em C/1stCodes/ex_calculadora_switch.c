#include <stdio.h>
#include <locale.h>
#include <math.h>
/*
    Fazer um programa para ler dois n�meros e um
    caractere contendo um dos s�mbolos das opera��es (+, -, *, / e ^).
    Imprimir o resultado da opera��o efetuada sobre os
    n�meros lidos usando switch.
 */

int main(void)
{ 
    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, n2;
    char op;


    printf("\nTemos as seguites opera��es:\n\nSomar: +\nSubtrair: -\nMultiplicar: *\nDividir: /\nPot�ncia: ^");
    printf("\nOpera��o desejada: ");
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
    
    default: printf("Opera��o inv�lida");
        break;
    }

    return 0;
}
