/* Triangle pattern
    1
    22
    333
    4444
    55555
*/
#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
