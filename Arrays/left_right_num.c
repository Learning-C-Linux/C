//Move all negative number in the given array to left and positive numbers to right in sorting order
#include <stdio.h>
int main()
{
    int arr[]={1,2,-1,-2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=size-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=0)
        {
            arr[right--]=arr[i];
        }
        else
        {
            arr[left++]=arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
