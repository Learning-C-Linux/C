//Square pattern

#include <stdio.h>

int main()
{
    int r,c;
    printf("enter number of rows and cols:");
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf("*"); 
        }
        printf("\n");
    }
    return 0;
}
