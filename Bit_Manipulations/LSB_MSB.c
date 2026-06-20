#include <stdio.h>

int main() {
    unsigned int n;
    printf("Enter number: ");
    scanf("%u", &n);

    int lsb = n & 1;
    int msb = (n >> 31) & 1;

    printf("LSB = %d\n", lsb);
    printf("MSB = %d\n", msb);
    return 0;
}

