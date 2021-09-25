#include <stdio.h>
#include <stdlib.h>

char senhaAleatoria() {
    
    char result;

    int i = rand() % 3;

    switch(i) {
        case 0: result = rand() % 26 + 65;//gera valores aleatorios de caracteres maisculos
        break;
        case 1: result = rand() % 26 + 'a';//gera valores aleatorios de caracteres minusculos
        break;
        case 2: result = rand() % 10 + '0';//gera valores inteiros aleatorios de 0 a 9
        break; 
    }

    return result;
}

int main(void)
{
    int tamanho_senha, i;
    char *senha;

    srand(time(NULL));//semente para gerar valores aleatorios diferentes em cada ciclo

    printf("Insira o quantidade de caracteres da senha: ");
    scanf("%d", &tamanho_senha);

    //senha[tamanho_senha]
    //tamanho_senha+1 para dar espaço para o \0
    senha = (char*)malloc((tamanho_senha+1)*sizeof(char));
    
    for (i = 0; i < tamanho_senha; i++)
    {
        senha[i] = senhaAleatoria();
    }

    //coloca o \0 na ultima posição da string senha
    senha[i] = '\0';

    printf("\nSenha gerada: %s\n", senha);
    
    free(senha);//libera memoria restante 
    
    return 0;
}
