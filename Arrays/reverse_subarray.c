#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int arr1[10];
    int size= sizeof(arr)/sizeof(arr[0]);
    int k;
    int j=0;
    int count=0;
    printf("enter the group:");
    scanf("%d",&k);
    for(int i=0;i<size;i++)
    {
        arr1[j++]=arr[i];
        count++;
        if(count==k)
        {
            for(int x=j-1; x>=j-k; x--)
                printf("%d ", arr1[x]);
            printf("\n");
            count=0;
        }
    }
    if(count != 0)
    {
        for(int x=j-1; x>=j-count; x--)
            printf("%d ", arr1[x]);
    }

    return 0;
}
