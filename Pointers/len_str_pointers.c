//Write a program to find the length of a string using a character pointer.
#include <stdio.h>
int main()
{
    char str[20]="Ganesh";
    char *ptr=str;
    int count=0;
    while(*ptr!='\0')
    {
        count++;
        ptr++;
    }
    printf("count:%d\n",count);
    return 0;
}

