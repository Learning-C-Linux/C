#include <stdio.h>
int main()
{
    char *str="Hello";
    int i=0;
    int count=0;
    while(*(str+i)!='\0')
    {
        count++;
        i++;
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++)
    {
        printf("%c",*(str+i));
    }
    return 0;
}
