/*#include <stdio.h>

int main () {

   int pi = 3;
   int raio;
   int c;

    printf("Digite o valor do raio:");
    scanf("%i", &raio);

     c = pi * raio;

    printf("O valor da circuferencia e: %i",c);


    return 0;
}
*/

#include <stdio.h>
#include <math.h>

int main () {

    int a;
    int b;
    int c;
    int delta;

    printf("Digite o valor de A is \n");
    scanf("%i",&a);

    printf("Digite o valor de B is \n");
    scanf("%i",&b);

    printf("Digite o valor de C is \n");
    scanf("%i",&c);

    delta = b*b - 4*a*c;

    printf("O valor de delta is %i \n", delta);


    return 0;
}