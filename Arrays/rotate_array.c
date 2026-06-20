//Rotate an Array from left to right with Nth Number(Nth get from user)

#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k;
    printf("enter number of rotations:");
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        int temp=arr[0];
        for(int i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[size-1]=temp;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
