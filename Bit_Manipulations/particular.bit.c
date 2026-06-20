//swap partciular bits
#include <stdio.h>

int main()
{
    int a,p1,p2;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the positions:");
    scanf("%d %d",&p1,&p2);
    int bits1=(a>>p1)&1;
    int bits2=(a>>p2)&1;
    if(bits1==bits2)
    {
        printf("same");
    }
    else
    {
         a=a^(1<<p1)|(1<<p2);
        printf("%d",a);
    }
    return 0;
}
