#include <stdio.h>
int main()
{
    float a = 10.5;
    int b = (int)a;       
    float sub = a - b;     

    int res = (b << 3) + (b << 1);  
    float final = res + (sub * 10); // 100 + 5 = 105

    printf("%.1f\n", final);        
    return 0;
}

