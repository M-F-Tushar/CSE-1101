/*Write a program that reads a positive integer and rounds it up to the next highest
power of 2. For example, if the user enters 35, the program should display 64, which is
the next highest power of 2 since 25 = 32 < 35 < 64 = 2 to the power 6.
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n--;//35 → Subtract 1 → 34. This handles cases where the input is already a power of 2 (like 32).
    n |= n >> 1;
    n |= n >> 2;
    n++;
    printf("%d\n", n);
    return 0;
}
/*
We use bitwise operations to turn on all bits below the highest set bit in 34 (binary 100010):

n |= n >> 1
100010 → Shift right by 1 → 010001
OR with original → 110011 (decimal 51)

n |= n >> 2
110011 → Shift right by 2 → 001100
OR with original → 111111 (decimal 63)

Result: 63 (binary 111111).
This is the largest number with all bits set below the original highest bit.
*/
/*#include <stdio.h>

int main() {
    unsigned int n, power = 1;

    printf("Enter a positive integer: ");
    scanf("%u", &n);

    // Keep multiplying by 2 until we reach or exceed n
    while (power < n) {
        power *= 2;
    }

    printf("Next highest power of 2 is: %u\n", power);
    return 0;
}
*/
