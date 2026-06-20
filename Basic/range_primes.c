//List of Primes until the given range
//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97

#include <stdio.h>
int main()
{
    int n;
    int flag;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        flag=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
