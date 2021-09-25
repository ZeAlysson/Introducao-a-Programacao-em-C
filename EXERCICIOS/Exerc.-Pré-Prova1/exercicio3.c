/*3) Faça um programa em linguagem C que auxilie os utilizadores do reservatório a controlarem
seu consumo. Obtenha do teclado as dimensões de um reservatório (altura, largura e comprimento, em centímetros) 
e o consumo médio diário dos utilizadores do reservatório (em litros/dia). 
Assuma que o reservatório esteja cheio, tenha formato cúbico e informe: 

(a) A capacidade total do reservatório, em litros; 

(b) A autonomia do reservatório, em dias; 

(c) A classificação do consumo, de acordo com a quantidade de dias de autonomia: Consumo elevado, se a autonomia for menor que 2 dias; Consumo moderado, se a autonomia estiver entre 2 e 7 dias; Consumo reduzido, se a autonomia maior que 7 dias. 

Obs.: Considere que cada litro equivale a 1000 cm3 ou 1 dm3 .*/

#include <stdio.h>

int main(void) {

    float alturaResev, larguraResev, comprimentoResev, volumeResev;
    float consumoDiario, autonomiaResev;
    
    printf("\nInforme as dimensoes do reservatorio (altura, largura e comprimento) em centimetros, respectivamente.\n"
            "Ex: 100, 100, 100\n\n"
            "Insira:");
    scanf("%f, %f, %f", &alturaResev, &larguraResev, &comprimentoResev);

    volumeResev = (alturaResev*larguraResev*comprimentoResev)/1000; //calcula a quantidade total de litros do reservatorio
    
    printf("\nA capacidade total do reservatorio = %.0f Litros\n", volumeResev);                                                                            

    printf("\nAgora informe o consumo medio diario (em litros/dia):");
    scanf("%f", &consumoDiario);

    autonomiaResev = volumeResev/consumoDiario; //calcula a autonomia do reservatorio, ou seja,
                                                //quantidade de dias necessarios para esvaziar o reservatorio conforme o consumo diario

    printf("De acordo com o informado, a autonomia do reservatorio = %.0f dia(s)\n\n", autonomiaResev);
    

    if (autonomiaResev < 2) {
        printf("Consumo elevado");
    } 

    else {
        
        if ((autonomiaResev>=2) && (autonomiaResev<=7)) {
            printf("Consumo moderado");
        }

        else {
            if (autonomiaResev>=7) {
                printf("Consumo reduzido");
            }  
        }   
    }

    return 0;
}
