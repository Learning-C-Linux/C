//missimg elements in an array
#include <stdio.h>
int main()
{
    int arr[]={1,2,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int highest=arr[size-1];
    int found;
    for(int i=1;i<=highest;i++)
    {
        found=0;
        for(int j=0; j<size; j++) 
        {
            if(arr[j] == i)
            {
                found = 1;
                break;
            }
        }
        if(!found)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
