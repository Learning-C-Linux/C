//reverse a all 8 bits in a byte
#include <stdio.h>
int main()
{
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    int rev=0;
    for(int i=0;i<sizeof(int)*8-1;i++)
    {
        rev=rev<<1;
        int bits=(n>>i)&1;
        rev=rev|bits;
    }
    for(int i=sizeof(int)*8-1;i>=0;i--)
    {
        printf("%d",(n>>i)&1);
        if(i%4==0)
        {
            printf(" ");
        }
    }
    printf("\n");
    for(int i=sizeof(int)*8-1;i>=0;i--)
    {
        printf("%d",(rev>>i)&1);
        if(i%4==0)
        {
            printf(" ");
        }
    }
    return 0;
}
