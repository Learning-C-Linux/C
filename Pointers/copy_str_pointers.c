//Write a program to copy a string using pointers.
#include <stdio.h>
#include <string.h>

int main()
{
    char src[20]="Ganesh";
    char dest[20];
    int k=0;
    char *ptr=src;
    int size=strlen(src);
    for(int i=0;i<size;i++)
    {
        dest[k++]=ptr[i];
    }
    dest[k]='\0';
    printf("%s",dest);
    return 0;
}
