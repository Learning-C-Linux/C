#include <stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    printf("%d ",((char*)(ptr+1)-(char*)ptr));
    return 0;
}
