// Write a C program to input two positive integers and find their GCD and LCM.
#include <stdio.h>

int main()
{
    int a, b, x, y, gcd;
    long long lcm;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Euclidean Algorithm for GCD
    while (y != 0)
    {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    gcd = x;

    // Formula for LCM
    lcm = ((long long)a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %lld", lcm);

    return 0;
}