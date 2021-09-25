#include <stdio.h>
#include <locale.h>

/*
int main(void)
{
    int numero, contador=1;

    printf("Insira um numero: ");
    scanf("%i", &numero);
    
    //enquanto numero for maior que zero, continuará pedindo para o usuario digitar mais numeros
    //quando o usuario inserir 0, while e o ciclo param de ser executados.  
    while (numero>0)
    {
        printf("Insira um numero: ");
        scanf("%i", &numero);  
        ++contador;  
    
    }

    //apresenta a quantidade de numeros que o usuario inseriu quando o ciclo parar
    printf("Voce digitou %i numeros", contador);
    

    return 0;
} */

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero, maior, menor, contador=1;

    printf("Insira o %iº número : ", contador);
    scanf("%i", &numero);
    maior = numero;
    menor = numero;

    //enquanto o numero a ser digitado pelo usuario for 0, o loop continuara executando 
    //até o usuario inserir um numero diferente de 0. 
    while (numero != 0)
    {       
        ++contador; // enquanto o loop estiver sendo executado, continuará adicionando +1 no variavel 'contador'
        printf("Insira o %iº número : ", contador);
        scanf("%i", &numero);
        if (numero>maior) {
            maior = numero; }
        if (numero<menor) {
            menor = numero;}
               
    }

    //quando o loop encerrar, apresenta a quantidade de numeros inseridos, maior e menor numero
    printf("Você digitou %i numeros, o maior = %i e o menor = %i", contador, maior, menor);
    

    
    return 0;
}

