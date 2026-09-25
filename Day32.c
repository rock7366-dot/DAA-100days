// Write a C program using a function to calculate the power of a number.
#include <stdio.h>

long long power(int base, int exponent)
{
    long long result = 1;

    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    int base, exponent;
    long long result;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    if (exponent < 0)
    {
        printf("Negative exponent is not supported.");
    }
    else
    {
        result = power(base, exponent);

        printf("Result = %lld", result);
    }

    return 0;
}