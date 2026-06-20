#include <stdio.h>

int main()
{
   int arr[]={1,2,3,4,5};
   int largest,second;
   int size= sizeof(arr)/sizeof(arr[0]);
   if(arr[0]>arr[1])
   {
       largest=arr[0];
       second=arr[1];
   }
   else
   {
       largest=arr[1];
       second=arr[0];
   }
   for(int i=0;i<size;i++)
   {
       if(arr[i]>largest)
       {
           second=largest;
           largest=arr[i];
       }
       else if(arr[i]<largest && arr[i]>second)
       {
           second=arr[i];
       }
   }
   printf("largest:%d smallest:%d\n",largest,second);
   return 0;
}
