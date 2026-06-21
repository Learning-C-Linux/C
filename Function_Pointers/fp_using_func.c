/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mult(int a,int b)
{
    return a*b;
}
int func(int (*ptr[])(int a,int b),int i,int a,int b)
{
    return ptr[i](a,b);
}
int main()
{
   int a,b;
   printf("enter the values:");
   scanf("%d %d",&a,&b);
   int (*ptr[3])(int,int)={add,sub,mult};
   int n;
   printf("enter the choice:");
   scanf("%d",&n);
   printf("%d\n",func(ptr, n, a, b));
   printf("%d",ptr[n](a,b));

    return 0;
}
