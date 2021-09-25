#include <stdio.h>
#include <stdlib.h>

/*
1) Escreva um programa em C que receba um valor n (int) de entrada e, em seguida:
- Aloque espa�o dinamicamente memoria para criar um vetor de caracteres 
(char) de n elementos e verifique se o espa�o foi alocado com sucesso;
- preencha o vetor criado com n caracteres digitados pelo usuario; 
- exiba o vetor preenchido na tela
- libere o espa�o de memoria alocado
*/

int main(void)
{
    int n, i;
    char *conjunto, aux;

    do
    {
        printf("Insira um valor: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    fflush(stdin);
    /*a fun��o do fflush � para limpar o buffer do teclado, sempre que for receber uma 
    variavel do tipo char, � aconselhavel usar o fflush*/

    //conjunto[n]
    conjunto = (char*)malloc(n*sizeof(char));

    if (conjunto == NULL)
    {
        printf("MALLOC ERROR!");
        exit(0);
    }
    
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Digite o caractere[%d]: ", i);
            scanf("%c", &conjunto[i]);
            getchar();
        }

        for (i = 0; i < n; i++)
        {
            printf("Valor armazenado em caractere[%d] = %c\n", i, conjunto[i]);
        }   
    }

    free(conjunto);
    
    return 0;
}
