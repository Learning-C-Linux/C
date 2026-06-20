#include <stdio.h>

int main() {
    unsigned char n;
    printf("Enter 8-bit number: ");
    scanf("%hhu", &n);

    unsigned char swapped = (n << 4) | (n >> 4);

    printf("After swapping nibbles: %u\n", swapped);
    return 0;
}

