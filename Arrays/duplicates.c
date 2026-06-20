//frequency of element
#include <stdio.h>
void func(int arr[],int size)
{
    int k=0;
    int arr3[100];
    int frequency[20]={0};
    for(int i=0;i<size;i++)
    {
        frequency[arr[i]]++;
    }
    printf("Non duplicates:");
    for(int i=0;i<size;i++)
    {
        if(frequency[i]==1)
            printf("%d",i);
    }
    printf("\nDuplicates:");
    for(int i=0;i<size;i++)
    {
        if(frequency[i]>1)
            
            printf("%d",i);
    }
    printf("\narray after removing duplicates:");
    for(int i=0;i<20;i++)
    {
        if(frequency[i]==1)
        {
            arr3[k++]=i;
            //printf("%d ",i);
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",arr3[i]);
    }
}

int main()
{
    int arr[]={1,2,1,2,3,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    func(arr,size);
    return 0;
    
}
