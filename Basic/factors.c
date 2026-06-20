//factors of a number-- exactly without leaving a remainder.
//1, 2, 3, 4, 5, 6, 8, 10, 12, 15, 20, 24, 30, 40, 60, and 120.

#include <stdio.h>
int main()
{
   int n;
   printf("enter a number:");
   scanf("%d",&n);
   for(int i=1;i<100;i++)
   {
       if(n%i==0)
       {
           printf("%d ",i);
       }
   }
   return 0;
}
