//Write a program to swap two numbers using pointers.
#include <stdio.h>
void func(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10,b=20;
    func(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
