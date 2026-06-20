#include <stdio.h>

int main()
{
    int n;
    printf("enter a value:");
    scanf("%d",&n);
    for(int i=0;i<sizeof(int)*8;i++)
    {
        if((n>>i)&1)
        {
            printf("found at pos:%d",i);
            break;
        }
    }
    return 0;
}
