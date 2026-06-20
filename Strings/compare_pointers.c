#include <stdio.h>
//compare two strings using pointers
//When you use fgets(), it reads the newline character '\n' that occurs when you press Enter, unless the input exactly fills the buffer.
int main()
{
    char str1[100];
    char str2[100];
    printf("enter string1:");
    fgets(str1,sizeof(str1),stdin);
    printf("enter string2:");
    fgets(str2,sizeof(str2),stdin);
    char *ptr1=str1;
    char *ptr2=str2;
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]=='\n')
        {
            str1[i]='\0';
        }
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        if(str2[i]=='\n')
        {
            str2[i]='\0';
        }
    }
    while(*ptr1!='\0' && *ptr2!='\0')
    {
        if(*ptr1!=*ptr2)
        {
            break;
        }
        ptr1++;
        ptr2++;
    }
    if (*ptr1 == '\0' && *ptr2 == '\0')
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    return 0;
}
