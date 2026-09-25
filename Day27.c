// Write a C program using a function to find the GCD of two positive integers.
#include <stdio.h>

int findGCD(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main()
{
    int a, b, gcd;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    gcd = findGCD(a, b);

    printf("GCD = %d", gcd);

    return 0;
}