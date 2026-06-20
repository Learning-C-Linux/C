//8 bit swap
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num = 0xAABBCCDD;
    //BBAADDCC
    //ABCDABCD
    printf("The given value before swap the bits: 0x%08X\n", num);
    num=(num&0xF0000000)|((num&0x0F000000)>>12)|((num&0x00F00000)<<4)|((num&0x000F0000)>>8)|((num&0x0000F000)<<8)|((num&0x00000F00)>>4)|((num&0x000000F0)<<12)|(num&0x0000000F);
    printf("The given value after swap the bits: 0x%08X\n", num);

    return 0;
}
