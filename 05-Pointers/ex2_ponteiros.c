#include <stdio.h>

int main(void)
{

    int *ptrInt, i;
    int vetor[10];

    ptrInt = vetor; //ptrInt = &vetor[0];

    for (i = 0; i < 10; i++)
    {
        *(ptrInt + i) = i*10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("vetor[%d] = %d\n", i, *ptrInt);
        printf("&vetor[%d] = %p\n", i, ptrInt);
        ptrInt++;
    }
    


    
    
    return 0;
}
