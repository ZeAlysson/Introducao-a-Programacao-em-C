#include <stdio.h>

int main(void)
{
    int idade = 19;
    int quantidade = 2000;

    int *ptrIdade;
    int *ptrQuantidade;

    ptrIdade = &idade;
    ptrQuantidade = &quantidade;
    
    printf("Idade(var original): %d\n", idade);
    printf("Valor apontado por ptrIdade(*ptrIdade): %d\n", *ptrIdade);
    printf("Endereco da variavel idade na memoria(&idade): %p\n", &idade);
    printf("Endereco da variavel idade na memoria(ptrIdade): %p\n", ptrIdade);

    *ptrIdade = 30;

    printf("\nIdade(variavel original): %d\n", idade);
    printf("Idade(Apontado por ptrIdade): %d\n", *ptrIdade);


    return 0;
}
