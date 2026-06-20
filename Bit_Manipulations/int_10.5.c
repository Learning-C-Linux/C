//7. Write a program to multiply 10.5 with 10 by using bitwise operations.
#include <stdio.h>
int main()
{
    int a=10.5;
    int result=(a<<3)+(a>>1)+(a<<1);
    printf("%d",result);
    return 0;
}
