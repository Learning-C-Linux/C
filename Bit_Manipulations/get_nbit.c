//Write a C program to get nth bit of a number.
#include <stdio.h>
int main()
{
    int n,p;
    printf("enter the value and pos:");
    scanf("%d %d",&n,&p);
    int k=(n>>p)&1;
    printf("%d",k);
    return 0;
}
