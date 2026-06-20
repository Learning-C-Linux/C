#include <stdio.h>
//Write a program to swap the first 8 bits and the last 8 bits in a 32-bit unsigned integer.
//Input: 1000 0001 1111 0011 1010 1101 0100 0001
//Output: 0100 0001 1111 0011 1010 1101 1000 0001

int main()
{
    unsigned int a;
    printf("enter the number:");
    scanf("%X",&a);
    int res=(0XFF000000&a)>>24|(0x000000FF&a)<<24|(0x00FF0000&a)|(0x0000FF00&a);
    printf("%X",res);
    return 0;
}
