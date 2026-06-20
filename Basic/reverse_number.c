//Reverse_Number


#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
       int temp=n%10;
       sum=sum*10+temp;
       n=n/10;
    }
    printf("Reversed number:%d\n",sum);
    return 0;
}
