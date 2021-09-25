#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
    x = ax2 + bx + c = 0
    Faca um programa que a partir dos coeficientes de uma equacao
    do segundo grau voce encontre a(s) sua(s) raiz(es).

    Utilize a formula de Bhaskara:

        x = ( -b +/- raiz(b2 - (4*a*c) ) ) / 2*a

        delta = (b*b) - (4*a*c)

        x1 = ( -b + raiz(delta)) / 2*a
        x2 = ( -b - raiz(delta)) / 2*a

*/
int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int a, b, c, delta;
    float x1, x2;


    printf("Considerando ax²+bx+c = 0 uma função do 2º grau, para achar o valor de delta,\n"
            "digite um valor para a: ");
    scanf("%i", &a);

    printf("Digite um valor para b: ");
    scanf("%i", &b);

    printf("Digite um valor para c:");
    scanf("%i", &c);


    delta = pow(b,2) - (4*a*c);

    x1 = (-b + sqrt(delta)) / 2*a;

    x2 = (-b - sqrt(delta)) / 2*a;

    printf("\nDelta = %i \n\n", delta);
    printf("O valor da raízes são:\nx1 = %2f\nx2 = %2f", x1, x2);


    








    return 0;
}
