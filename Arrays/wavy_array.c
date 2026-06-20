//Wave Array
#include <stdio.h>
void func(int arr[],int size)
{
    int j;
   for(int i=0;i<size;i+=2)
   {
       j=i+1;
       if(arr[i]<arr[j])
       {
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
       }
   }
   for(int i=0;i<size;i++)
   {
       printf("%d ",arr[i]);
   }
}
int main()
{
    int arr[]={2, 4, 7, 8, 9, 10};
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    func(arr,size);
    return 0;
}
