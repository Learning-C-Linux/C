//arr[] = {1, 2, 3, 4, 5, 6}, d = 2.

#include <stdio.h>
void left_rotate(int arr[],int d,int size)
{
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        for(int k=0;k<size-1;k++)
        {
            arr[k]=arr[k+1];
        }
        arr[size-1]=temp;
    }
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void right_rotate(int arr[],int d,int size)
{
    for(int i=0;i<d;i++)
    {
        int temp=arr[size-1];
        for(int k=size - 1; k > 0; k--)
        {
            arr[k]=arr[k-1];
        }
        arr[0]=temp;
    }
    for(int i=0;i<=size-1;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[]= {1, 2, 3, 4, 5, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size:%d",size);
    int d;
    printf("enter the number");
    scanf("%d",&d);
    left_rotate(arr,d,size);
    right_rotate(arr,d,size);
    return 0;
}
