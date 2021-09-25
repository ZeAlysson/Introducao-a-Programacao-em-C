#include <stdio.h>

int main(void)
{
    float *ptr, **pptr;
    float pi = 3.14;

    ptr = &pi;
    pptr = &ptr;

    printf("pi = %f\n", pi);
    printf("Endereco de pi: %p\n\n", &pi);

    printf("ptr = %f\n", *ptr);
    printf("Endereco de ptr: %p\n\n", ptr);

    printf("pptr = %f\n", **pptr);
    printf("Endereco de pptr: %p\n\n", pptr);
    
    return 0;
}
