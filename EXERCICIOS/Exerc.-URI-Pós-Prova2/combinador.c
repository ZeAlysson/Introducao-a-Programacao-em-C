#include <stdio.h>
#include <string.h>

int main(void)
{
    int testes, i, j, k;
    char palavra1[50];
    char palavra2[50];

    scanf("%d", &testes);

    for (i = 0; i < testes; i++)
    {
        scanf("%s %s", &palavra1, &palavra2);

        j = 0;
        k = 0;
        
        while ((strlen(palavra1) > j) || (strlen(palavra2) > k))
        {   
            if(strlen(palavra1) > j)
            printf("%c", palavra1[j]);
            ++j;
            

            if(strlen(palavra2) > k)
            printf("%c", palavra2[k]);
            ++k;
        }

    }
    

    return 0;
}
