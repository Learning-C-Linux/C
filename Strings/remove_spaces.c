#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="Hello World";
    char str1[20];
    int k=0,i=0;
    int size=strlen(str);
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            str1[k++]=str[i];
        }
        i++;
    }
    str1[k] = '\0'; // terminate the string
    printf("%s",str1);
    return 0;
}
