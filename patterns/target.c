//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
#include <stdio.h>

int main()
{
    int arr[]={3,2,4};
    int target=6;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size:%d\n",size);
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
                if (arr[i] + arr[j] == target && j > i) 
                {
                    printf("%d %d\n",i,j);
                }
            }
        }
    }
    return 0;
}
