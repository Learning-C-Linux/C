//insert an element in particular pos
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int arr3[10];
    int k=0,n;
    int size=sizeof(arr)/sizeof(arr[0]);
    int p;
    printf("enter the pos and value:");
    scanf("%d %d",&p,&n);
    for(int i=0;i<size;i++)
    {
        if(i==p)
        {
            arr3[k++]=n;
        }
         arr3[k++]=arr[i];
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}
