//perfectnumber --a positive integer, which is equal to the sum of proper divisors but excludes the number.
// number exactly divisble by range of numbers and sum

#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\n%d",sum);
    return 0;
}
