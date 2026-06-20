#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num = 0xAABBCCDD;
    //CCAADDBB

    printf("The given value before swap the bits: 0x%08X\n", num);
    num=((num&0xFF000000)>>8)|((num&0x00FF0000)>>16)|((num&0x0000FF00)<<16)|((num&0x000000FF)<<8);
    printf("The given value after swap the bits: 0x%08X\n", num);

    return 0;
}
