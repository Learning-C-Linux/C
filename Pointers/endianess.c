/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=10;
    char *ptr=(char*)&a;
    if(*ptr)
    {
        printf("little endian\n");
    }
    else
    {
        printf("big endian\n");
    }
    for(int i=0;i<sizeof(int);i++)
    {
        printf("0x%02X ",*(ptr++));
    }
    return 0;
}

