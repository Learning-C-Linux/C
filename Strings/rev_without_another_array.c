//in place without using another array
#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="Hello1";
    int s= strlen(str);
    int i=0;
    for(int i=0;i<=s;i++)
    {
       char temp=str[s-1];
       str[s-1]=str[i];
       str[i]=temp;
       s--;
    }
    printf("%s",str);
    return 0;
}
