//Implement your own strcmp()
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="HelloWorld";
    char str2[]="HiiGanesh";
    int s1 = strlen(str1);
    int s2 = strlen(str2);
    int count=0;
    printf("%d %d\n",s1,s2);
        for(int i=0;str1[i]!='\0'&& str2[i]!='\0';i++)
        {
            if(str1[i]!=str2[i])
            {
                count=1;
                break;
            }
        }
    if(count==0 &&s1 == s2)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
   return 0;
}
