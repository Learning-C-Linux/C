//C Program to Swap Two Numbers
//*********Points to Remember*********
//Call by Value: The Value passed in the function performs the required operation and the value remains within the functions(Does not update in main)
//Call by Reference: The Value passed in the function performs the required operation and the value gets updated in the main (Because it is pointer)

#include <stdio.h>

void add_swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n",a,b);
}

void temp_swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
}

void xor_swap(int a,int b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
}
int main()
{
    int a=10,b=20;
    add_swap(a,b);
    temp_swap(a,b);
    xor_swap(a,b);
    return 0;
}
