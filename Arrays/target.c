// target and print it in sub arrays
#include <stdio.h>
int main()
{
    int arr[]={0,1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("enter the target:");
    scanf("%d",&target);
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                if(arr[i]+arr[j]==target &&j>i)
                {
                    printf("%d %d\n",i,j);
                }
            }
        }
    }
    return 0;
}
