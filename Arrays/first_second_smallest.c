#include <stdio.h>

int main()
{
   int arr[]={1,2,3,4,5};
   int first_smallest,second_smallest;
   int size= sizeof(arr)/sizeof(arr[0]);
   if(arr[0]>arr[1])
   {
       first_smallest=arr[0];
       second_smallest=arr[1];
   }
   else
   {
       first_smallest=arr[1];
       second_smallest=arr[0];
   }
   for(int i=0;i<size;i++)
   {
       if(arr[i]<first_smallest)
       {
           second_smallest=first_smallest;
           first_smallest=arr[i];
       }
       else if(arr[i]<first_smallest && arr[i]>second_smallest)
       {
           second_smallest=arr[i];
       }
   }
   printf("first_smallest:%d second_smallest:%d\n",first_smallest,second_smallest);
   return 0;
}
