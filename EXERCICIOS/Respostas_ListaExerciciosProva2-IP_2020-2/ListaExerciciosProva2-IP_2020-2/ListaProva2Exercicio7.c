#include <stdio.h>
#include <string.h>

/*
Faça um programa em C que leia uma string e depois leia um valor inteiro
entre 1 e 50 (faça um laço de repetição que garante esse valor). O valor 
inteiro será utilizado como "senha" para "codificar" a string inserida, em uma
implementação rudimentar da chamada "shift cypher" (cifra de deslocamento).
Some o valor inteiro aos caracteres alfabéticos da String inserida e depois 
exiba a string. Depois, solicite um outro valor inteiro entre 0 e 50 (também 
com laço de repetição) e use o novo valor inteiro para "decodificar" a string, 
decrementando o valor inteiro de cada caractere.

Exemplo: 

String digitada: "Ola mundo"
Inteiro digitado: 3
String codificada: "Rod pxqgr"
*/

int main(void) {

    char string_codigo[30];
    int senha;

    printf("Digite uma frase: ");
    gets(string_codigo);
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);    
    } while((senha<1)||(senha>50));

    for (int i = 0; i < strlen(string_codigo); i++) {
        if (
            ((string_codigo[i] >= 65) && (string_codigo[i] <= 90)) ||
            ((string_codigo[i] >= 97) && (string_codigo[i] <= 122)) ) {
                string_codigo[i] += senha;
        }
    }

    printf("String codificada: %s\n", string_codigo);

    for (int i = 0; i < strlen(string_codigo); i++) {
            if (string_codigo[i] != 32)
                string_codigo[i] -= senha;
    }

    printf("String decodificada: %s\n", string_codigo);
    
    return 0;
}