//Write a C program to get highest and lowest set bit of a number.
#include <stdio.h>
void highest(int n)
{
    int order=0;
    for(int i=0;i<sizeof(int)*8;i++)
    {
        if((n>>i)&1)
        {
            order=i;
            break;
        }
    }
    printf("Lowest set bit:%d",order);
}
void lowest(int n)
{
    int order=0;
    for(int i=sizeof(int)*8-1;i>=0;i--)
    {
        if((n>>i)&1)
        {
            order=i;
            break;
        }
    }
    printf("\nHighest set bit:%d",order);
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    highest(n);
    lowest(n);
    return 0;
}
