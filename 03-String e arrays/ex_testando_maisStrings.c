#include <stdio.h>
#include <string.h>

/*Testando mais strings como:
- strchr: apresenta a PRIMEIRA ocorrencia de uma letra definida na string
- strrchr: apresenta a ULTIMA ocorrencia de uma letra definida na string
*/

int main(void) {

    char frase[20] = "Hello World";
    char letra_ocorrencia = 'o';

    //apresenta a frase definada na string
    printf("Minha frase: %s\n", frase);

    //strchr(frase, letra_primeiraOcorrencia);
    //apresenta a PRIMEIRA ocorrencia da letra pré-definida na string, na tela com o resto da frase
    printf("A partir da primeira ocorrencia de '%c': %s\n", 
            letra_ocorrencia, strchr(frase, letra_ocorrencia));
    
    //strrchr(frase, letra_primeiraOcorrencia);
    //apresenta a ULTIMA ocorrencia da letra pré-definida na string
    printf("A partir da ultima ocorrencia de '%c': %s\n", 
            letra_ocorrencia, strrchr(frase, letra_ocorrencia));

    
    return 0;
}
