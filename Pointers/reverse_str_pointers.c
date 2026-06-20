//Write a program to reverse a string using pointers.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20]="Ganesh";
    int size=strlen(str);
    char *ptr=str;
    for(int i=size;i>=0;i--)
    {
        printf("%c",ptr[i]);
    }
    return 0;
}
