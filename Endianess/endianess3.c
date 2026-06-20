#include <stdio.h>
union test
{
    int a;
    char b;
};
int main()
{
 
    union test s1;
    s1.a=1;
    if(s1.b==1)
    {
        printf("little endian");
    }
    else
    {
        printf("big endian");
    }
    return 0;
}
