#include <stdio.h>
#include <string.h>
/*
 Uso de strings e ponteiros
*/
int main(void) {
    char nome[30];
    int shift;
    char *palavra; //string 

    printf("Digite o nome: ");
    gets(nome);

    palavra = nome;//&nome[0];

    printf("Digite um inteiro: ");
    scanf("%d", &shift);


    printf("%s\n", palavra+shift);

    printf("Tamanho substring: %d\n", strlen(palavra+shift));

    return 0;
}