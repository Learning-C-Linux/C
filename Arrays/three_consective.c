#include <stdio.h>
void func(int arr[],int size)
{
    int pro;
    int a=0,b=0,c=0;
    int max=0;
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
                for(int k=0;k<size;k++)
                {
                    if(j==k || i==k )
                    {
                        continue;
                    }
                    else
                    {
                        pro=arr[i]*arr[j]*arr[k];
                        if(pro>max)
                        {
                            max = pro;
                            a=arr[i]; b=arr[j]; c=arr[k];
                        }        
                    }
   
                }
            }
        }
    }
    printf("Three Great Candidates: %d %d %d\n",a,b,c);
    printf("Maximum Product = %d\n",max);

}
int main()
{
    int arr[]={10, 3, 5, 6, 20};
    int size=sizeof(arr)/sizeof(arr[0]);
    func(arr,size);
    return 0;
}
