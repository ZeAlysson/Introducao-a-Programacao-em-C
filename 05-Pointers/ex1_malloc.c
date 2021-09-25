#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int tamanho_array;
    int *conjunto, aux, i;

    printf("Insira o tamanho do array: ");
    scanf("%d", &tamanho_array);

    //determina o tamanho do array de acordo com o que o usuario digitou
    //conjunto[tamanho]
    conjunto = (int*)malloc(tamanho_array*sizeof(int));

    for (i = 0; i < tamanho_array; i++)
    {
        printf("Digite o conjunto[%d]: ", i);
        scanf("%d", &conjunto[i]);
    }

    printf("\n%d elementos digitados\n", tamanho_array);

    //mostra os valores armazenados na memoria alocada
    for (i = 0; i < tamanho_array; i++)
    {
        printf("conjunto[%d] = %d\n", i, *(conjunto + i));
    }
    
    //libera o espaço restante na memória alocada
    free(conjunto);

    return 0;
}
