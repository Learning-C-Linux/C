//replace a with ji
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter the string");
    fgets(str,10,stdin);
    int i=0;
    while(str[i]=='\n')
    {
        str[i]='\0';
        i++;
    }
    printf("%s\n",str);
    int j=0,count=0;
    while(str[j]!='\0')
    {
        count++;
        j++;
    }
    for(int i=0;i<=count-1;i++)
    {
        if(str[i]=='a')
        {
            str[i]='j';
        }
    }
    printf("%s",str);
    return 0;
}
