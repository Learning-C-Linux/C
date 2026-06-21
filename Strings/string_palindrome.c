#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="ABBA";
    char str2[100];
    int flag=0;
    int s= strlen(str);
    for(int i=s-1;i>=0;i--)
    {
        str2[i]=str[i];
    }
    str2[s] = '\0';
    int s2=strlen(str2);
    printf("%s\n",str2);
    for(int i=0;i<=s-1;i++)
    {
        int temp=s2-i-1;
        if(str[i]!=str2[temp])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}
