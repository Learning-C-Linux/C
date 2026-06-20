//Write a program power of 4 using bit wise
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>0&&(n&(n-1))== 0 && (n & 0x55555555))
    {
        printf("multiple of 4\n");
    }
    return 0;
}
