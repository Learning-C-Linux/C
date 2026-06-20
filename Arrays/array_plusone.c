//plus one
#include <stdio.h>
int main()
{
    int arr[]={1,2,4};
    int val=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
       int rem=arr[i];
       val=val*10+rem;
    }
    val=val+1;
    printf("%d",val);
    return 0;
}
