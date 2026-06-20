#include <stdio.h>
//0x5A5A 1234
// 0xA5A52143
//0x4321A5A5
int main()
{
    int a;
    printf("enter the number:");
    scanf("%x",&a);
    int res=(0xF0000000&a)>>4|(0x0F000000&a)<<4|(0x00F00000&a)>>4|(0x000F0000&a)<<4|(0x0000F000&a)>>4|(0x00000F00&a)<<4|(0x000000F0&a)>>4|(0x0000000F&a)<<4;
    printf("%X\n",res);
    int final_16=(0xFFFF0000&a)>>16|(0x0000FFFF&a)<<16;
    printf("%X\n",final_16);
    int final_8=(0xFF000000&res)>>24|(0x00FF0000&res)>>8|(0x0000FF00&res)<<8|(0x000000FF&res)<<24;
    printf("%X",final_8);
    return 0;    
}
