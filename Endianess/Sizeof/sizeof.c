#include <stdio.h>

#define my_sizeof(ptr) ((char*)(&ptr+1)-(char*)(&ptr))

int main()
{
    int a;
    float b;
    double c;
    printf("%d ",my_sizeof(a));
    printf("%d ",my_sizeof(b));
    printf("%d ",my_sizeof(c));
    return 0;
}
