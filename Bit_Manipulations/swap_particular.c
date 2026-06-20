//11. Write a program to swap 7th and 11th bits for a number 115 using bit-wise operators?
#include <stdio.h>
int main()
{
    unsigned int a;
    printf("enter the number:");
    scanf("%d",&a);
    int p1,p2;
    printf("enter the pos:");
    scanf("%d %d",&p1,&p2);
    int r1=(1<<p1)&a;
    int r2=(1<<p2)&a;
    if(r1==r2)
    {
        printf("Bits are equal");
    }
    else
    {
        int res=a^((1 << p1) | (1 << p2));
        printf("%X",res);
    }
    return 0;
}
