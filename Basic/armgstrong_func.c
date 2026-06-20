//Write a C program to check whether a taken input is an Armstrong number or
//not, using functions.
#include <stdio.h>
int func(int n)
{
    int sum=0,rem=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    printf("%d\n",sum);
    return sum;
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int result=func(n);
    if(result==n)
    {
        printf("armgstrong\n");
    }
    return 0;
}
