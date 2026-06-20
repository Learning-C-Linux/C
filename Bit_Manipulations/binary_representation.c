//Write a program to display the binary representation of a number entered by the user.
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int size=sizeof(int)*8;
    for(int i=size-1;i>=0;i--)
    {
        printf("%d",(n>>i)&1);
        if(i%4==0)
        {
            printf(" ");
        }
    }
    return 0;
}
