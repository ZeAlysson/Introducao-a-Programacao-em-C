#include <stdio.h>
#include <locale.h>

/*ESCREVA UM PROGRAMA QUE PERGUNTE O TEMPO EM HORAS, MINUTOS E SEGUNDOS.
E CONVERTA TUDO EM SEGUNDOS*/ 

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int tHoras, tMinutos, tSegundos, tTotalSeg, tTotalMin;
    
    printf("Digite o tempo em horas:");
    scanf("%i", &tHoras);

    printf("Digite o tempo em minutos:");
    scanf("%i", &tMinutos);

    printf("Digite o tempo em segundos:");
    scanf("%i", &tSegundos);

    tTotalMin = 60*tHoras + tMinutos;
    tTotalSeg = tSegundos + tTotalMin*60; 
    
    printf("%ih %imin %iseg em segundos fica: ", tHoras, tMinutos, tSegundos);
    printf("%i segundos" , tTotalSeg);

return 0;
}