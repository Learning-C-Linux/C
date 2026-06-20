//concat
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char str2[100];
    printf("enter the string1:");
    fgets(str,sizeof(str),stdin);
    printf("enter the string2:");
    fgets(str2,sizeof(str2),stdin);
        for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] == '\n')
        {
            str2[i] = '\0';
            break;
        }
    }
    int len1 = strlen(str);
    int len2 = strlen(str2);

    for(int i=0;i<len2;i++)
    {
        str[len1+i]=str2[i];
    }
    str[len1+len2]='\0';
    printf("%s",str);
    return 0;
}
