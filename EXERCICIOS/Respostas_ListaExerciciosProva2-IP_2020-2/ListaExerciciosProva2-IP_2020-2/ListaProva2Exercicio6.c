#include <stdio.h>
#include <string.h>
/*
Faça um programa em C que leia três strings e as exiba em ordem alfabética.
*/

int main(void) {
    char string1[30], string2[30], string3[30];

    printf("Digite a primeira string: ");
    gets(string1);
    printf("Digite a segunda string: ");
    gets(string2);
    printf("Digite a terceira string: ");
    gets(string3);

    //strcmp(stringA, stringB) -> retorna 0 se forem iguais
    //                         -> retorna <0 se a primeira for "menor"
    //                         -> retorna >0 se a segunda for "menor"

    if (strcmp(string1,string2) == -1) {
        if (strcmp(string1, string3) == -1) {
            printf("%s\n", string1);
            if (strcmp(string2, string3) == -1) {
                printf("%s\n%s\n", string2, string3);
            } else {
                printf("%s\n%s\n", string3, string2);
            }
        } else {
            printf("%s\n%s\n%s\n", string3, string1, string2);
        }
    } else {
        if (strcmp(string2, string3) == -1) {
            printf("%s\n", string2);
            if (strcmp(string1, string3) == -1) {
                printf("%s\n%s\n", string1, string3);
            } else {
                printf("%s\n%s\n", string3, string1);
            }
        } else {
            printf("%s\n%s\n%s\n", string3, string2, string1);
        }
    }

    return 0;

}