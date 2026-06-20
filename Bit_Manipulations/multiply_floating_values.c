#include <stdio.h>

// Multiply two integers without using * (use shifts + addition)
int mul_no_star(int a, int b) {
    int result = 0;

    while (b > 0) {
        if (b & 1)          // if LSB is 1
            result += a;    // add a

        a <<= 1;            // a = a * 2
        b >>= 1;            // b = b / 2
    }

    return result;
}

int main() {
    float x, y;
    printf("Enter two floating values: ");
    scanf("%f %f", &x, &y);

    // Convert floats to scaled integers (multiply by 1000)
    int X = (int)(x * 1000);
    int Y = (int)(y * 1000);

    // Multiply using bitwise logic
    int product_int = mul_no_star(X, Y);

    // Convert back to float
    float result = product_int / 1000000.0f;

    printf("Result = %.6f\n", result);

    return 0;
}

