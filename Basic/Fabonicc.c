//fabonicc

#include <stdio.h>
int main()
{
    int a=0,b=1;
    int n;
    printf("enter the range:");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=0;i<n;i++)
    {
        int sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return 0;
}
