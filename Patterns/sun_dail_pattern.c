/* Triangle pattern

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********

*/

#include <stdio.h>
int main()
{
    int r;
    printf("Enter number of rows:");
    scanf("%d",&r);
    for(int i=0;i<r;i++)
    {
        for(int k=0;k<i;k++)
        {
            printf(" ");
        }
        for(int j=0;j<(2*(r-i)-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<r;i++)
    {
        for(int k=0;k<r-i-1;k++)
        {
            printf(" ");
        }
        for(int j=0;j<(2*i+1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
