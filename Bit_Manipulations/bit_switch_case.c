#include <stdio.h>
#include <stdint.h>

#define MACRO_16_4(a)  (((a & 0xF000) >> 4) | ((a & 0x0F00) << 4) | \
                        ((a & 0x00F0) >> 4) | ((a & 0x000F) << 4))

#define MACRO_16_8(a)  (((a & 0x00FF) << 8) | ((a & 0xFF00) >> 8))

#define MACRO_32_8(a)  (((a & 0xFF000000) >> 8)  | ((a & 0x00FF0000) << 8) | \
                        ((a & 0x0000FF00) >> 8)  | ((a & 0x000000FF) << 8))

#define MACRO_32_16(a) (((a & 0xFFFF0000) >> 16) | ((a & 0x0000FFFF) << 16))

#define MACRO_64_8(a)  (((a & 0xFF00FF00FF00FF00ULL) >> 8) | \
                        ((a & 0x00FF00FF00FF00FFULL) << 8))

#define ByteSwap64(Value) \
    (((Value & 0x00000000000000FFULL) << 56) | \
     ((Value & 0x000000000000FF00ULL) << 40) | \
     ((Value & 0x0000000000FF0000ULL) << 24) | \
     ((Value & 0x00000000FF000000ULL) << 8)  | \
     ((Value & 0x000000FF00000000ULL) >> 8)  | \
     ((Value & 0x0000FF0000000000ULL) >> 24) | \
     ((Value & 0x00FF000000000000ULL) >> 40) | \
     ((Value & 0xFF00000000000000ULL) >> 56))

unsigned int set_particular_bit(unsigned int n, unsigned int p)
{
    return ((1U << p) | n);
}

uint64_t clear_particular_bit(uint64_t n, int p)
{
    return (~(1ULL << p) & n);
}

uint64_t get_particular_bit(uint64_t n, int p)
{
    return ((1ULL << p) & n);
}

int toggle_flip(int n, int p)
{
    return ((1 << p) ^ n);
}

int toggle_range(int a, int range1, int range2)
{
    return a ^ (((1 << (range2 - range1 + 1)) - 1) << range1);
}

void check_particular_set(int a, int p)
{
    if ((1 << p) & a)
        printf("%d is set\n", p);
    else
        printf("%d is not set\n", p);
}

void even_odd(int n)
{
    if ((n & 1) == 0)
        printf("even\n");
    else
        printf("odd\n");
}

void clear_leftside_setbit(int a)
{
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
    {
        if ((1U << i) & a)
        {
            printf("%d is set\n", i);
            a = ~(1U << i) & a;
            printf("%d\n", a);
            break;
        }
    }
}

void clear_rightside_setbit(int n)
{
    printf("%d\n", n & (n - 1));
}

void power_of_2(int n)
{
    if (n > 0 && ((n & (n - 1)) == 0))
        printf("power of 2\n");
    else
        printf("not power of 2\n");
}

int count_setbits(int n)
{
    int count = 0;

    for (int i = 0; i < (int)(sizeof(int) * 8); i++)
    {
        if ((1U << i) & n)
            count++;
    }

    return count;
}

void swap_particular_bits(int n, int p1, int p2)
{
    n ^= (1 << p1);
    n ^= (1 << p2);

    printf("%d\n", n);
}

void swap_even_odd_bits(int n)
{
    unsigned int n1 = (n & 0xAAAAAAAAU) >> 1;
    unsigned int n2 = (n & 0x55555555U) << 1;

    n = n1 | n2;

    printf("%d\n", n);
}

void LSB_set(int n)
{
    if (n & 1)
        printf("LSB is set\n");
    else
        printf("LSB is not set\n");
}

void MSB_set(int n)
{
    int size = sizeof(int) * 8;

    if (((1U << (size - 1)) & n) != 0)
        printf("MSB is set\n");
    else
        printf("MSB is not set\n");
}

void highest_setbit(int n)
{
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
    {
        if ((1U << i) & n)
        {
            printf("%d is set\n", i);
            break;
        }
    }
}

void lowest_setbit(int n)
{
    for (int i = 0; i < (int)(sizeof(int) * 8); i++)
    {
        if ((1U << i) & n)
        {
            printf("%d is set\n", i);
            break;
        }
    }
}

void count_trailing_zeros(int n)
{
    int count = 0;

    for (int i = 0; i < (int)(sizeof(int) * 8); i++)
    {
        if ((1U << i) & n)
            break;
        count++;
    }

    printf("%d\n", count);
}

void count_leading_zeros(int n)
{
    int count = 0;

    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
    {
        if ((1U << i) & n)
            break;
        count++;
    }

    printf("%d\n", count);
}

void count_zeros_ones(int n)
{
    int zeros = 0, ones = 0;

    for (int i = 0; i < (int)(sizeof(int) * 8); i++)
    {
        if ((1U << i) & n)
            ones++;
        else
            zeros++;
    }

    printf("Zeros=%d Ones=%d\n", zeros, ones);
}

void decimal_binary(int n)
{
    int size = sizeof(int) * 8;

    for (int i = size - 1; i >= 0; i--)
        printf("%d", (n >> i) & 1);

    printf("\n");
}

void rotate_bits_left(unsigned int n, int r)
{
    int size = sizeof(unsigned int) * 8;
    r %= size;

    printf("%u\n", (n << r) | (n >> (size - r)));
}

void rotate_bits_right(unsigned int n, int r)
{
    int size = sizeof(unsigned int) * 8;
    r %= size;

    printf("%u\n", (n >> r) | (n << (size - r)));
}

void multiply_2(int n)
{
    printf("%d\n", (n << 1) + (n >> 1));
}

void multiply_3(int n)
{
    printf("%d\n", (n << 1) + n + (n >> 1));
}

void divide_num(int n)
{
    printf("%d\n", n >> 1);
}

void multiply_num(int n)
{
    printf("%d\n", n << 1);
}

int main()
{
    int choice;

    printf("\nBit Manipulation Menu\n");
    printf("1  Set Particular Bit\n");
    printf("2  Clear Particular Bit\n");
    printf("3  Get Particular Bit\n");
    printf("4  Toggle Bit\n");
    printf("5  Toggle Range\n");
    printf("6  Check Particular Bit\n");
    printf("7  Even/Odd\n");
    printf("8  Clear Leftmost Set Bit\n");
    printf("9  Clear Rightmost Set Bit\n");
    printf("10 Power of 2\n");
    printf("11 Count Set Bits\n");
    printf("12 Swap Particular Bits\n");
    printf("13 Swap Even/Odd Bits\n");
    printf("14 LSB Check\n");
    printf("15 MSB Check\n");
    printf("16 Highest Set Bit\n");
    printf("17 Lowest Set Bit\n");
    printf("18 Count Trailing Zeros\n");
    printf("19 Count Leading Zeros\n");
    printf("20 Count Zeros and Ones\n");
    printf("21 Decimal to Binary\n");
    printf("22 Rotate Left\n");
    printf("23 Rotate Right\n");
    printf("24 Multiply by 2.5\n");
    printf("25 Multiply by 3.5\n");
    printf("26 Divide by 2\n");
    printf("27 Multiply by 2\n");
    printf("28 Macro Tests\n");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("%u\n", set_particular_bit(10, 2));
            break;

        case 2:
            printf("%llu\n",
                   (unsigned long long)clear_particular_bit(10, 1));
            break;

        case 3:
            printf("%llu\n",
                   (unsigned long long)get_particular_bit(10, 1));
            break;

        case 4:
            printf("%d\n", toggle_flip(10, 1));
            break;

        case 5:
            printf("%d\n", toggle_range(255, 2, 5));
            break;

        case 6:
            check_particular_set(10, 1);
            break;

        case 7:
            even_odd(10);
            break;

        case 8:
            clear_leftside_setbit(10);
            break;

        case 9:
            clear_rightside_setbit(10);
            break;

        case 10:
            power_of_2(16);
            break;

        case 11:
            printf("%d\n", count_setbits(15));
            break;

        case 12:
            swap_particular_bits(10, 1, 3);
            break;

        case 13:
            swap_even_odd_bits(10);
            break;

        case 14:
            LSB_set(10);
            break;

        case 15:
            MSB_set(10);
            break;

        case 16:
            highest_setbit(10);
            break;

        case 17:
            lowest_setbit(10);
            break;

        case 18:
            count_trailing_zeros(16);
            break;

        case 19:
            count_leading_zeros(16);
            break;

        case 20:
            count_zeros_ones(10);
            break;

        case 21:
            decimal_binary(10);
            break;

        case 22:
            rotate_bits_left(15, 2);
            break;

        case 23:
            rotate_bits_right(15, 2);
            break;

        case 24:
            multiply_2(10);
            break;

        case 25:
            multiply_3(10);
            break;

        case 26:
            divide_num(10);
            break;

        case 27:
            multiply_num(10);
            break;

        case 28:
            printf("MACRO_16_4  = 0x%X\n", MACRO_16_4(0x1234));
            printf("MACRO_16_8  = 0x%X\n", MACRO_16_8(0x1234));
            printf("MACRO_32_16 = 0x%X\n", MACRO_32_16(0x12345678));
            printf("ByteSwap64  = 0x%llX\n",
                   (unsigned long long)
                   ByteSwap64(0x1122334455667788ULL));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
