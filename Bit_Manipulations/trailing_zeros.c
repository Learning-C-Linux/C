//Write a C program to count trailing zeros in a binary number.
#include <stdio.h>
int main()
{
    int n;
    int count=0;
    printf("enter a value:");
    scanf("%d",&n);
    for(int i=0;i<sizeof(int)*8;i++)
    {
        if(((n>>i)&1)!=0)
        {
            break;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}
