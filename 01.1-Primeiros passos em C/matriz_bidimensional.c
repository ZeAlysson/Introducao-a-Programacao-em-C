#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int matriz [3][3] = { {1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9} };
    int u, v;

    for (u = 0; u < 3; u++)
    {
        printf("\n");
        for (v = 0; v < 3; v++)
        {
            printf("%d ", matriz[u][v]);
        }
        
    }
     
    return 0;
}
