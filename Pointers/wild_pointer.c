//Write a program to demonstrate wild pointer.
#include <stdio.h>

int main()
{
    int *ptr;
    printf("%p",ptr);
    printf(" %d",*ptr);
    return 0;
}
