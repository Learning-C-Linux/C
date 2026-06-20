#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num = 0xAABBCCDD;

    printf("The given value before swap the bits: 0x%08X\n", num);

    num=((num&0xFFFF0000)>>16)|((num&0x0000FFFF)<<16);
    printf("The given value after swap the bits: 0x%08X\n", num);

    return 0;
}
