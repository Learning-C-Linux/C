//Write a program to demonstrate void pointer.
#include <stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    printf("%d ",*(int*)ptr);
    return 0;
}
