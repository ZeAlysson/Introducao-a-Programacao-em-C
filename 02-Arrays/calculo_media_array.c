#include <stdio.h>
#include <locale.h>

/*
Ler a nota de 5 alunos e armazenar num array. 
Calcular a média da nota dos 5 alunos e verificar quantos conseguiram
nota acima da média da turma;
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float notasAlunos[5] = {0}, somaTotal=0, media;
    int i, notasAcimaMedia=0;

    for (i = 0; i < 5; i++) //cria 5 loops para obter as notas pelo usuario
    {
        printf("Insira a nota do %dº aluno: ", i+1);//solicita uma nota ao usuario
        scanf("%f", &notasAlunos[i]);//armazena a nota no array/vetor

        somaTotal+=notasAlunos[i];//obtem a soma das notas para calcular a media, posteriormente
    }

    media = somaTotal/5;//calcula a media com as somas obtidas anteriormente

    for (i = 0; i < 5; i++) //executa 5 loops para descobrir quantos alunos obtiveram nota acima da media
    {
        if (notasAlunos[i] > media)//caso a nota armazenada no array for maior que a media...
        {
            ++notasAcimaMedia;//...será armazenado +1 valor na variavel que conta as notas acima da media
        }
        
    }
    
    //enfim, exibe os resultados
    printf("A média da nota dos 5 alunos = %f\n", media);
    printf("%d alunos tiraram nota acima da média", notasAcimaMedia);
    

    return 0;
}
