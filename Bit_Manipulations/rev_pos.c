//rev_bits.c till specific pos

#include <stdio.h>
//0001 0010
//0100 1000
int main()
{
    int a=10;
    int p;
    printf("enter the pos:");
    scanf("%d",&p);
    int res;
    int org=a;
    int size=sizeof(int)*8;
    for(int i=0;i<size;i++)
    {
        if(i<=p)
        {
            int c=(a>>i)&1; 
            //printf("%d\n",c);
            a=a>>i; 
            int new=size-1; 
            res=(c<<new)|a; 
        }
        
    }
    for(int i=size-1;i>=0;i--)
    {
        printf("%d",(org>>i)&1);
        if(i%4==0)
        {
            printf(" ");
        }
    }
    printf("\n");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d",(res>>i)&1);
        if(i%4==0)
        {
            printf(" ");
        }
    }
    return 0;
}
