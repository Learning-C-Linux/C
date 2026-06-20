//Write a program multiply by 10.5
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10.5;
    int res=(n<<3)+(n>>1)+(n<<1);
    printf("%d",res);
    return 0;
}
