/*2) Escreva um programa em C que leia um valor real que represente uma temperatura 
em Farenheit. Converta o valor para Celsius e exiba as seguintes mensagens de acordo com a 
temperatura convertida:
- Temperatura abaixo de zero - Exibir "Clima congelante"
- Temperatura entre 0 e 10 - Exibir "Clima muito frio"
- Temperatura entre 10 e 19 - Exibir "Clima frio"
- Temperatura entre 20 e 28 - Exibir "Clima normal"
- Tempratura entre 29 e 40 - Exibir "Clima quente"
- Temperatura maior que 41 - Exibir "Clima muito quente"*/

#include <stdio.h>

int main(void) {
    
    float GrauF, GrauC;

    printf("Insira um temperatura Fahrenheit:");
    scanf("%f", &GrauF);

    GrauC = (GrauF-32) * 5/9;


    if (GrauC<0) {
        printf("%.2f C - Clima Congelante", GrauC);
    } 
    
    else {
        
        if ((GrauC>=0)&&(GrauC<=10)) {
            printf("%.2f C - Clima muito frio", GrauC);
        } 

        else {

            if ((GrauC>=10)&&(GrauC<=19)) {
                printf("%.2f C - Clima frio", GrauC);
            }

            else {

                if ((GrauC>=20)&&(GrauC<=28)) {
                    printf("%.2f C - Clima normal", GrauC);
                }

                else {

                    if ((GrauC>=29)&&(GrauC<=40)) {
                        printf("%.2f C - Clima quente", GrauC);
                    }

                    else {
                        if (GrauC>=41) {
                            printf("%.2f C - Clima muito quente", GrauC);
                        }
                        
                    }
                    
                }
            
            }
                      
        }           
        
     }
    
    return 0;
}

