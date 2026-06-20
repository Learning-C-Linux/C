//clear or reset a paricular bit
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int p;
    printf("enter the pos:");
    scanf("%d",&p);
    int k=~(1<<p)&n;
    printf("%d\n",k);
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
