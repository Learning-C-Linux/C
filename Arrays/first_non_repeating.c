//first non repeating in an array
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count;
    for(int i=0;i<size;i++)
    {
        count=0;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count=count+1;
            }
        }
        if(count==0)
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}
