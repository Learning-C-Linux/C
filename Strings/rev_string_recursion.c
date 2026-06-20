//reverse string using recursion
#include <stdio.h>
char str_rev(char *str)
{
    if(*str=='\0')
    {
        return 0;
    }
    str_rev(str+1);
    putchar(*str);
}
int main()
{
    char *str="Hello";
    str_rev(str);
    return 0;
}
/*
reverse string using recursion
#include <stdio.h>
char str_rev(char *str)
{
    if(*str=='\0')
    {
        return 0;
    }
    str_rev(str+1);
    putchar(*str);
}
int main()
{
    char str[20];
    printf("enter the string:");
    scanf("%s",str);
    str_rev(str);
    return 0;
}*/
