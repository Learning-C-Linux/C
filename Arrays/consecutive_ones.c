#include <stdio.h>
void func(int arr[],int size)
{
    int count=1;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]==arr[i+1]&&arr[i]!=0)
        {
            printf("%d ",arr[i]);
            count++;
        }
    }
    printf("\n%d\n",count);
}
int main()
{
    int arr[]={0, 1, 1, 1, 1, 1, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    func(arr,size);
    return 0;
}
