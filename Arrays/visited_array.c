//dupliactes and nonduplicates
//using hashmap 
//without hasmap
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,1,2,3,3,4};
    int count;
    int k=0,g=0;
    int duplicate[10]={0};
    int nonduplicate[10]={0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int visited[10]={0};
    for(int i=0;i<size;i++)
    {
        if(visited[i])
            continue;
        count=1;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                visited[j]=1;
            }
        }
        visited[i] = 1; // ✅ Important fix
        if(count>1)
        {
            duplicate[k++]=arr[i];
        }
        else
        {
            nonduplicate[g++]=arr[i];
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",duplicate[i]);
    }
    printf("\n");
    for(int i=0;i<g;i++)
    {
        printf("%d ",nonduplicate[i]);
    }
    return 0;
    
}
