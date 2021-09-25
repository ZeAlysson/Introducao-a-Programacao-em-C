#include <stdio.h>

/* Faca um programa em C que leia 3 numeros inteiros e exiba-os de forma ordenada. */

int main(void) {

    int n1, n2, n3;

    printf("Primeiro numero: ");
    scanf("%i", &n1);

    printf("Segundo numero: ");
    scanf("%i", &n2);

    printf("Terceiro numero: ");
    scanf("%i", &n3);

    if (n1 < n2) {      

        //quando n3 for maior que n2 e n1:
        if (n2 < n3) {      
            printf("%i, %i, %i", n1, n2, n3); 
        }

        else if (n1 < n3) { 
            printf("%i, %i, %i", n1, n3, n2);  
        } 

        //quando n1 deixar de ser o maior:
        else {
            printf("%i, %i, %i", n3, n1, n2);
        }

    }//fim de if (n1 < n2)
    
    //quando n2 for o principal maior:
    else if (n2 < n3) {

        
        if (n1 < n3) {
            printf("%i, %i, %i", n2, n1, n3);
        } 
        
        else {
            printf("%i, %i, %i", n2, n3, n1);
        }

    } else {
        printf("%i, %i, %i", n3, n2, n1);
    }
    
    return 0;
}
