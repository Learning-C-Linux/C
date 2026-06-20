//toggle particular bit
#include <stdio.h>

int main()
{
    int n,p;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the pos:");
    scanf("%d",&p);
    int k= n^(1<<p);
    for(int i=sizeof(int)*8-1;i>=0;i--)
    {
        printf("%d",(k>>i)&1);
        if(i%4==0)
        {
            printf(" ");
        }
    }
    return 0;
}
