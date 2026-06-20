//In the given String all words first character should be captial

#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[]="my name is thishi";
    int count=0;
    int i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("length%d\n",count);
    for(int i=0;i<count;i++)
    {
      if(i==0 && str[i]>='a' && str[i]<='z')
      {
          str[i]=toupper(str[i]); //-32(captial)  +32(small)
      }
      else if (str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
      {
            str[i] = toupper(str[i]);
      }

    }
    printf("%s",str);
    return 0;
}
