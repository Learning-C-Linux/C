//2 bit swap
#include <stdio.h>
#include <stdint.h>

int main()
{
    int num = 2;
    
    printf("The given value before swap the bits: %d\n", num);
    num=((num&0xC0)>>2)|((num&0x03)<<2);
    printf("The given value after swap the bits: %d\n", num);

    return 0;
}
