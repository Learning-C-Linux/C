/*  Triangles Pattern

    *******
     *****
      ***
       *
*/
#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int k=1;k<i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*(r-i)+1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
