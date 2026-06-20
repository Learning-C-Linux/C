//divide using bit manipulations
#include <stdio.h>

int main()
{
    int n,m;
    printf("enter the number and divide number:");
    scanf("%d %d",&n,&m);
    int k=n>>m;
    printf("%d",k);
    return 0;
}
