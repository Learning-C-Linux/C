//missing element
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[9]={0,1,2,3,4,5,6,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int highest=arr[size-1];
    int expected=(highest*(highest+1))/2;
    int actual=0;
    for(int i=0;i<size;i++)
    {
        actual=actual+arr[i];
    }
    int missing=expected-actual;
    printf("%d ",missing);
    return 0;
}
