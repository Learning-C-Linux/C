//Greatest_of_threenumber.c

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is Greatest_of_threenumber\n",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is Greatest_of_threenumber\n",b);
    }
    else
    {
        printf("%d id Greatest_of_threenumber\n",c);
    }
    return 0;
}
