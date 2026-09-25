// Write a C program using functions to find the GCD and LCM of two positive integers.
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

int findLCM(int a, int b)
{
    int gcd = findGCD(a, b);

    return (a * b) / gcd;
}

int main()
{
    int a, b, gcd, lcm;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    gcd = findGCD(a, b);
    lcm = findLCM(a, b);

    printf("GCD = %d\n", gcd);
    printf("LCM = %d", lcm);

    return 0;
}