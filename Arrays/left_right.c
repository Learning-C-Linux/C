//Move all even number Number in the Array to left and Odd Number to right

#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int arr1[10];
    int left=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    int right=size-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            arr1[left++]=arr[i];
        }
        else
        {
            arr1[right--]=arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}
