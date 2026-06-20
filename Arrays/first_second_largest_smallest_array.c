//2 largest and 2 smallest in a matrix
#include <stdio.h>
int main()
{
    int arr[50][50];
    int r,c;
    int largest,second=0;
    int smallest,second_smallest=0;
    printf("enter number of rows and col:");
    scanf("%d %d",&r,&c);
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
    largest=arr[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]>largest)
            {
                second=largest;
                largest=arr[i][j];
            }
        }
    }        
    printf("\nLargest%d %d",largest,second);
    smallest=arr[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]<smallest)
            {
                second_smallest=smallest;
                smallest=arr[i][j];
            }
            else if(arr[i][j]<second && arr[i][j]>smallest)
            {
                second_smallest=arr[i][j];
            }
        }
    }
    printf("\n Smallest%d %d",smallest,second_smallest);
    return 0;    
}
