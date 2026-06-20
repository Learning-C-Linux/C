//swap using bit manipulations
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the values:");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
    return 0;
}

