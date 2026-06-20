#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *ptr=arr;
    ptr++;
    printf("%d",*ptr);
    return 0;
}
