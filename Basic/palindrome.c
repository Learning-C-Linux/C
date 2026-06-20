//palindrome_number


#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        int rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("Palindrome\n");
    }
    return 0;
}
