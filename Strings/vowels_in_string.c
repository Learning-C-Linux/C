#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="HelloWorld";
    char arr[5]={'a','e','i','o','u'};
    int s=strlen(str);
    int count=0;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(str[i] == arr[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
