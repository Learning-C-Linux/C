//Demonstrate pointer arithmetic on arrays (e.g., traverse array using pointer).
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *ptr=arr;
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}
