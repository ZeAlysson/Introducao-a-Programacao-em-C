#include <stdio.h>
#include <string.h>

potenciaQuadrica(int valor) {
    int resultado = 0;
    resultado = valor*valor;
    return resultado;
}

exibeMensagem(char* palavra) {
    printf("Ola, %s.\n", palavra);
    printf("Seu nome possui %d caracteres\n", strlen(palavra));
}

gera_valorAleatorio () {
    printf("Valor sorteado: %d\n", (int)rand() % 100);
}

char gera_caractereAleatorio () {
    
    int aux = rand() % 26;
    return 65 + aux;
}

int main(void)
{
    int numero;
    char nome[20];

    srand(time(NULL));

    printf("Insira um valor: ");
    scanf("%d", &numero);

    printf("Valor ao quadrado: %d\n", potenciaQuadrica(numero));

    printf("Insira seu nome: ");
    scanf("%s", &nome);

    exibeMensagem(nome);

    exibeMensagem("Jose");
    
    gera_valorAleatorio();

    printf("Caractere gerado: %c\n", gera_caractereAleatorio());

    return 0;
}
