//Count and FlipFlop
#include <stdio.h>
#include <stdint.h>

int main()
{
    unsigned int a;
    int count_zeros=0,count_ones=0;
    printf("enter the value:");
    scanf("%u",&a);
    for(int i=0;i<sizeof(int)*8-1;i++)
    {
        if(((a>>i)&1)==0)
        {
            count_zeros++;
        }
        else
        {
            count_ones++;
        }
    }
    printf("Zeros:%d Ones:%d\n",count_zeros,count_ones);
    //without using for loop  
    int temp=a;
    int count=0;
    while(temp>0)
    {
        if(temp&1)
        {
            count++;
        }
        temp=temp>>1;
    }
    printf("Ones:%d\n",count);
    printf("OriginalValue:");
    for(int i=sizeof(int)*8-1;i>=0;i--)
    {
        printf("%d",(a>>i)&1);
        if(i%4==0)
        {
            printf(" ");
        }
    }
    printf("\nFliped Values:");
    a=~a;
    for(int i=sizeof(int)*8-1;i>=0;i--)
    {
        printf("%d",(a>>i)&1);
        if(i%4==0)
        {
            printf(" ");
        }
    }
    
    return 0;
}
