//little or big endian
#include <stdio.h>
int main()
{
    int a=10;
    char *ptr=(char*)&a;
    for (int i = 0; i < sizeof(int); i++)
    {
        printf("Byte %d: 0x%02X\n", i, (unsigned char)ptr[i]);
    }

    if(*ptr)
    {
        printf("little endian");
    }
    else
    {
        printf("big endian\n");
    }
    return 0;
}
