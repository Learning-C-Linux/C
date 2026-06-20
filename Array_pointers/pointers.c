//Write a program to access array elements using a pointer.
//arrauys using pointer it is possible having risk of segmentation fault
#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements:");
    scanf("%d",&n);
    int *p;
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    
    return 0;
}
