/* Triangle pattern\

       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *

*/
#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int k=1;k<=r-i;k++)
        {
            printf(" ");
        }
        for(int j=i;j<=2*i-1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
