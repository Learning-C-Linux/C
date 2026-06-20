#include <stdio.h>
int main()
{
    int arr[]={1, 2, 0, 4, 3, 0, 5, 0};
    int arr1[20];
    int k=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            arr1[k++]=arr[i];
        }
    }
    for(int i=k;i<size;i++)
    {
        arr1[k++]=0;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}
