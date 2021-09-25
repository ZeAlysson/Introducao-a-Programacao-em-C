#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int totalSeg, horas, minutos, segundos, aux;

    printf("Digite um valor total em segundos: ");
    scanf("%i", &totalSeg);

    aux = totalSeg;

    horas = aux/3600;   //-->Converte o valor total de segundos em Hora(s)

    aux = aux-(horas*3600); /*-->Vai pegar o valor total de segundos inseridos, subtrair o mesmo 
                            pelo valor de horas convertido em segundos para descobrir os segundos
                            restantes da conversão total em horas*/

    minutos = aux/60;     

    aux = aux-(minutos*60); 

    segundos = aux;

    printf("Temos %ih %imin %iseg", horas, minutos, segundos);


    return 0;
}
