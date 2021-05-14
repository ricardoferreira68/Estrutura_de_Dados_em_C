#include <stdio.h>
int main (void)
{
    float var;
    float *ptr;
    var = 10;
    ptr = &var;
    printf("var              :    %f\n",    var);
    printf("endereço de var  :    %p\n",    &var);
    printf("ptr              :    %p\n",    ptr);
    printf("apontador por ptr:    %f\n",    *ptr);
    return 0;
}