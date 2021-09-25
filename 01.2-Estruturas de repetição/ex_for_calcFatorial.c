#include <stdio.h>
#include <locale.h>

int main(void) {
    
    setlocale(LC_ALL, "Portuguese_Brazil");

    int fatorial, resposta;

    printf("\nInsira um valor para calcular seu fatorial:");
    scanf("%i", &fatorial);

    printf("\n%i! = ", fatorial);


    /*cria um ciclo no qual quando 'fatorial' for maior ou igual a 1, ele vai reduzir 1 do valor
    'fatorial' Ex.: fatorial = 5, executará o ciclo 5-0, 5-1, 5-2, 5-3, 5-4 e imprime 5,4,3,2,1*/
    for (resposta=1; fatorial>=1 ; --fatorial)
    {
        resposta = resposta * fatorial;//tbm poder ser escrito: resposta *= fatorial;
        
    /*  Ex: resposta = resposta(1)*(fatorial)5 logo, resposta = 5.
        resposta = resposta(5)*(fatorial)4 logo, resposta = 20.  
        resposta = resposta(20)*(fatorial)3 logo, resposta = 60
        resposta = resposta(60)*(fatorial)2 logo, resposta = 120
        resposta = resposta(120)*(fatorial)1 logo, resposta = 120(resposta final e fim do ciclo*/   
    }

    printf("%i\n", resposta);
    
    return 0;
}
