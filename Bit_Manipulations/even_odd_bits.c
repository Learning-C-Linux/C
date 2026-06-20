//swap even and odd bits
#include <stdio.h>
#include <stdint.h>

void swap_even(int n)
{
    int k=n&0xAAAAAAAA;
    printf("%d\n",k);
}
void swap_odd(int n)
{
    int k=n&0x55555555;
    printf("%d\n",k);
}
void even_odd(int n)
{
    int k=((n&0xAAAAAAAA)>>1)|((n&0x55555555)<<1);
    printf("%d",k);
} 

int main()
{
    uint32_t n;
    printf("enter the number:");
    scanf("%d",&n);
    swap_even(n);
    swap_odd(n);
    even_odd(n);
    return 0;
}
