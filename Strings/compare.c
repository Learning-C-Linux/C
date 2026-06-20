// Compare given two string without buildin function or library
#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="I am on earth";
    char str1[]="I am on Earth";
    int i=0;
    int flag=1;
    while(str[i]!='\0' && str1[i]!='\0')
    {
        if(str[i]!=str1[i])
        {
            flag=0;
            break;
        }
        i++;
    }
    if(flag)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
  
 
}
