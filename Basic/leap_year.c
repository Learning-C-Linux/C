Leap Year

#include <stdio.h>
int main()
{
    int n;
    printf("enter a  value:");
    scanf("%d",&n);
    if(n%4==0 ||n%400==0)
    {
        printf("leap year\n");
    }
    else if(n%100==0)
    {
        printf("Not leap\n");
    }
    else
    {
        printf("Not leap\n");
    }
    return 0;
}
