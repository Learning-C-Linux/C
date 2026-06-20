#include <stdio.h>
//2 bits swap at a particular pos:
int main()
{
   unsigned char a;
   printf("enter the value:");
   scanf("%hhu",&a);
   int p1,p2;
   printf("enter the pos:");
   scanf("%d %d",&p1,&p2);
   int res1=(a<<p1)&1;
   int res2=(a>>p2)&1;
   if(res1!=res2)
   {
       a=(1<<p1)^a;
       a=(1<<p2)^a;
   }
   printf("%d\n",a);
   printf("0x%02X",a);
   return 0;
}
