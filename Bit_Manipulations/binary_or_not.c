//wap to findout whether given number binary or not
// ex;101-binary 
// ex; 051-not a binary 

#include <stdio.h>

int main()
{
    int n;
    int flag=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        int rem=n%10;
        if(rem!=0 && rem!=1)
        {
            flag=0;
            break;
        }
        n=n/10;
    }
    if(flag)
    {
        printf("binary number\n");
    }
    else
    {
        printf("not binary\n");
    }
    return 0;
}
