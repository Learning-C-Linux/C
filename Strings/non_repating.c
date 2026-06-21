//no repating character
#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="aabacddc";
    int s=strlen(str);
    int visited[10]= {0};
    for(int i=0;i<s;i++)
    {
        if(visited[i]==1)
          continue;
        int count=1;
        for(int j=i+1;j<s;j++)
        {
            if(str[i]==str[j])
            {
                count++;
                visited[j]=1;
            }
        }
       if(count == 1)
        {
            printf("%c", str[i]);
        }
    }    
    return 0;
}
