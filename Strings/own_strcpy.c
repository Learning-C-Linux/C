//strcpy
#include <stdio.h>
int main()
{
    char str1[]="Hello";
    char str2[]="Worlds";
    int i=0,j=0,count=0,count1=0;
    while(str1[i]!='\0')
    {
        count++;
        i++;
    }
    while(str2[j]!='\0')
    {
        count1++;
        j++;
    }
    for(int i=0;i<count1;i++)
    {
        str1[i]=str2[i];
    }
    str1[i+1]='\0';
    printf("%s",str1);
    return 0;
}
