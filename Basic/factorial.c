//factorial 

#include <stdio.h>
int main()
{
    int n;
    int val=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        val=val*i;
    }
    printf("%d",val);
    return 0;
}
