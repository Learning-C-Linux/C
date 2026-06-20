//frequency of element
#include <stdio.h>
void func(int arr[],int size)
{
    int frequency[20]={0};
    for(int i=0;i<size;i++)
    {
        frequency[arr[i]]++;
    }
    for(int i=0;i<size;i++)
    {
        if(frequency[i]!=0)
            printf("%d %d\n",i,frequency[i]);
    }
}
int main()
{
    int arr[]={1,2,1,2,3,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    func(arr,size);
    return 0;
    
}
