//even and odd
#include <stdio.h>
int main()
{
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
}
