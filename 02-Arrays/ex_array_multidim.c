#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, k;
    int valores[2][3][4] = {

        {{1,2,3,4}, {5,6,7,8}, {6,5,4,3}},
        {{2,3,4,5}, {4,2,3,4}, {3,2,3,4}}
    };

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for(k = 0; k < 4; k++) {
                printf("valores[%d][%d][%d] = %d\n", i, j, k, valores[i][j][k]);
            }
        }
    }
    
    
    return 0;
}
