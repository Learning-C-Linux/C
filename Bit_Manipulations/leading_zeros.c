#include <stdio.h>

int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if (n & (1U << i))
            break;
        count++;
    }

    printf("Leading zeros: %d\n", count);
    return 0;
}

