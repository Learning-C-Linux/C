//  In the given String all words first character should be captial
#include <stdio.h>
int main()
{
    int r,c;
    printf("enter number of rows and col:");
    scanf("%d %d",&r,&c);
    int sum=0,sum1=0;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int limit = (r < c) ? r : c;
    for(int i=0;i<limit;i++)
    {
        sum+=arr[i][i];
	sum1+=arr[i][limit-1-i];
    }
    printf("%d %d\n",sum,sum1);
    return 0;
}
