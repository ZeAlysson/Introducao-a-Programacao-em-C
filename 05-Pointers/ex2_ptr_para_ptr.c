#include <stdio.h>

int main(void)
{
    int x, *p, **q, ***r, ****s;

    x = 10;

    p = &x; //p == x
    q = &p; //q == p == x
    r = &q; // r == q == p == x
    s = &r; // s == r == q == p == x

    printf("Valor de x: %d\n", x);
    printf("Valor de s: %d\n", ****s);
}