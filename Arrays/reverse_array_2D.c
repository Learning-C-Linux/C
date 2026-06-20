//[{1 , 2 , 3}{4 , 5 , 6}{7 , 8 , 9}] change this array to [{9 , 8 , 7}{6 , 5 , 4}{3 , 2 , 1}] 

#include <stdio.h>

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int size=sizeof(arr)/sizeof(arr[0]);
    //printf("%d ",size);
    int res[3][3]={0};
    int k=0,q=0;
    for(int i=0;i<3;i++)
    {
        for(int j=2;j>=0;j--)
        {
           res[k][q]=arr[i][j];
            q++;
            if (q == 3)
            {
                q = 0;
                k++;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
