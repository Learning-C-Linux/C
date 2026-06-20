// Write a program to check whether the byte 0x35 has even parity. If not, set the MSB bit to
//make it even parity.

#include <stdio.h>

int main()
{
    unsigned char a;
    printf("enter the number:");
    scanf("%hhu",&a);
    int c=0;
    int size=sizeof(char)*8;
    for(int i=0;i<size;i++)
    {
        if((a>>i)&1)
        {
            c++;
        }
    }
    printf("Number of 1 bits = %d\n", c);
    if(c%2==0)
    {
        printf("%d is even parity\n",c);
    }
    else
    {
        for(int i=size-1;i>=0;i--)
        {
            if(((a>>i)&1)!=0)
            {
                continue;
            }
            else
            {
                a=(1<<i)|a;
                break;
            }
        }
    }
    printf("Updated value (hex): 0x%X\n", a);
    return 0;
}
