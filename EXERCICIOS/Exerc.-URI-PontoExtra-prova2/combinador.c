#include <stdio.h>
#include <string.h>

/*
Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, 
alternando as letras de cada string, começando com a primeira letra da primeira string, seguido 
pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, e assim 
sucessivamente. As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string 
resultante e retornada.

Entrada
A entrada contém vários casos de teste. A primeira linha contém um inteiro N que indica a 
quantidade de casos de teste que vem a seguir. Cada caso de teste é composto por uma linha que 
contém duas cadeias de caracteres, cada cadeia de caracteres contém entre 1 e 50 caracteres inclusive.

Saída
Combine as duas cadeias de caracteres da entrada como mostrado no exemplo abaixo e exiba a cadeia 
resultante.
*/

int main(void)
{
    int inteiroN, i, j, k;
    char fraseA[50], fraseB[50];

    scanf("%d", &inteiroN);

    for (i = 0; i < inteiroN; i++)
    {
        scanf("%s %s", &fraseA, &fraseB);

        j=0, k=0;

        //Exemplo: fraseA = aa, fraseB = bb
        do {

            if(j < strlen(fraseA))//se qtdade de caracteres de 'fraseA' for maior que 0:
            printf("%c", fraseA[j]);//imprime o carac. conforme o valor de j. Ex: j=0 -> a
            ++j;//+1 de incremento a cada ciclo                    //prox ciclo : j=1 -> a                     

            if(k < strlen(fraseB))//se qtdade de caracteres de 'fraseB' for maior que 0:
            printf("%c", fraseB[k]);//imprime o carac. conforme o valor de j. Ex: k=0 -> b
            ++k;//+1 de incremento a cada ciclo                    //prox ciclo : k=1 -> b

        } while ((strlen(fraseA) > j)||(strlen(fraseB) > k));
        printf("\n");
    }

    return 0;
}
