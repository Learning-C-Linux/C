//1. Write a C program using a function to find the sum of the series:
//1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int fact;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        fact=1;
        for(int j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        printf("fact %d %d\n",i,fact);
        sum=sum+fact/i;
        printf("%d\n",sum);

    }
    return 0;
}
