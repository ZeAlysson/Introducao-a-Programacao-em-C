#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x1, x2, x3;
    int y1, y2, y3;
    char option;

    while (option != 'b')
    {

        printf (
        "==================================================================\n"
        " a) Calcular pontos do espaco\n"
        " b) Sair\n"
        );

        printf("\t\nInforme a opcao desejada: ");
        scanf("%c", &option);//ler opcao desejada

        fflush(stdin);

        switch (option)
        {
        case 'a':
        case 'A':
        {
            printf("\nCoordenadas do primeiro ponto (Ex: 1, -2, 3): ");
            scanf("%d%d%d", &x1, &x2, &x3);

            printf("Coordenadas do segundo ponto (Ex: -4, 5, 6): ");
            scanf("%d%d%d", &y1, &y2, &y3);

            fflush(stdin);

            printf("\nResultado: (%di) + (%dj) + (%dk)", x1-y1, x2-y2, x3-y3);
            printf("\n==================================================================\n\n");  
        }break;

        case 'B':
        case 'b': {
            exit(0);
        }

        default: printf("\nOpcao invalida! Tente novamente\n");
            break;
        }

    
    }
     
    return 0;
}
