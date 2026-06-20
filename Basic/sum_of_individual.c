//sumof_indivial_num

#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
