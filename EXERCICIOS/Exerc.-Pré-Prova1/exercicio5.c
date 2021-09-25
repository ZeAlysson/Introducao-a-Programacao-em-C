/*5) Faça um programa em C que leia os valores inteiros para dia, mês e ano de uma data e depois 
exiba a data como texto. Verifique também se a data é válida. Use switch/case. 
Ex. caso os valores 01 , 01 e 2021 sejam inseridos, será exibido o texto "01 de Janeiro de 2021"; 
caso os valores 33 , 20 e 2021 sejam inseridos, será exibido o texto "Data inválida".*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int dia, mes, ano;

    printf("Insira o dia em inteiro:");
    scanf("%i", &dia);

    printf("Insira o mes em inteiro:");
    scanf("%i", &mes);

    printf("Insira o ano:");
    scanf("%i", &ano);


    if (dia>31) {
        printf("Data invalida!!");
        exit(0);
    } 

    else {

        switch (mes) {

        case 1: printf("%i de Janeiro de %i", dia, ano);
            break;
        case 2:
            if (dia>29) {
                printf("Data invalida! Fevereiro tem no maximo 29 dias!");
            } 
            else {
                printf("%i de Fevereiro de %i", dia, ano);
            } 
            break;
        case 3: printf("%i de Marco de %i", dia, ano);
            break;
        case 4: printf("%i de Abril de %i", dia, ano);
            break;
        case 5: printf("%i de Maio de %i", dia, ano);
            break;
        case 6: printf("%i de Junho de %i", dia, ano);
            break;
        case 7: printf("%i de Julho de %i", dia, ano);
            break;
        case 8: printf("%i de Agosto de %i", dia, ano);
            break;
        case 9: printf("%i de Setembro de %i", dia, ano);
            break;
        case 10: printf("%i de Outubro de %i", dia, ano);
            break;
        case 11: printf("%i de Novembro de %i", dia, ano);
            break;
        case 12: printf("%i de Dezembro de %i", dia, ano);
            break;
        
        default: printf("\nData invalida!\n");
            break;
        
        }

    }

    



    return 0;
}
