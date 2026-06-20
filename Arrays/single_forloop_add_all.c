//  In the given String all words first character should be captial
#include <stdio.h>
int main()
{
    int r,c;
    printf("enter number of rows and col:");
    scanf("%d %d",&r,&c);
    int sum=0;
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
     // Single loop sum
    for(int i = 0; i < r * c; i++) 
    {
        int row = i / c;  // row index
        int col = i % c;  // column index
        sum += arr[row][col];
    }

    printf("%d\n",sum);
    return 0;
}
