#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int diff = a - b;

    // If diff is negative → a < b → sign = 1
    // If diff is positive → a > b → sign = 0
    int sign = (diff >> 31) & 1;

    int max = a - (sign * diff);
    int min = b + (sign * diff);

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
}

