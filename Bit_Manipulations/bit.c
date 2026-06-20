#include <stdio.h>

int main()
{
    unsigned int a = 0x12345678;
    //printf("enter number: ");
    //scanf("%x",&a);
    //printf("%x\n",a);
    unsigned int result = (a & 0xFF000000)>>16;
    printf("Result: %08X\n", result);
}
