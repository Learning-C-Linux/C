/*  Triangles Pattern

   *
  ***
 *****
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
    int n=(r+1)/2;
    printf("%d\n",n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*(n-i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
