// C Program to Check Whether a Number is Prime or Not
// 2, 3, 5, 7, 11, 13, 17


#include <stdio.h>
int main()
{
    int n;
    int flag;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        flag=1;
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        printf("prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;
}
