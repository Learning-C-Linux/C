//convert elemnts in matrix from decimal to binary'
#include <stdio.h>
int main()
{
    int n;
    int rem[20]={0};
    printf("enter the number:");
    scanf("%d",&n);
    int i=0;
    while(n!=0)
    {
        rem[i++]=n%2;
        n=n/2;
    }
    for(int k=i-1;k>=0;k--)
    {
        printf("%d",rem[k]);
    }
    return 0;
}
