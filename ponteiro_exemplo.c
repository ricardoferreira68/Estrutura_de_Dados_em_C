#include <stdio.h>
int main (void)
{
    float var;
    float* ptr2, ptr1;
    var = 10;
    ptr1 = &var;
    ptr2 = &var;
    printf("var              :    %f\n",    var);
    printf("endereço de var  :    %p\n",    &var);
    printf("ptr              :    %p\n",    ptr1);
    printf("apontador por ptr:    %f\n",    *ptr1);
    printf("ptr              :    %p\n",    ptr1);
    printf("apontador por ptr:    %f\n",    *ptr2);
    return 0;
}