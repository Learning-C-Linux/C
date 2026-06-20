#include <stdio.h>

int main()
{
    unsigned int a=0x12345678;
    unsigned char *p=(unsigned char*)&a;
    if(*p==0x78)
    {
        printf("little endian");
    }
    else
    {
        printf("big endian");
    }
    return 0;
}
