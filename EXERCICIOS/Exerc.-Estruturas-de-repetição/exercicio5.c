#include <stdio.h>
#include <locale.h>

/*5) Escreva um programa em C que gere os números entre 50000 100000 e exiba 
aqueles que quando divididos por 11 possuem resto 5.*/

int main(void)
{
    int i;

    for (i = 50000; i <= 100000; i++)
    {
        if (i %11 == 5)
        {
            printf("%i\n", i);
        }   
    }
    
    return 0;
}
