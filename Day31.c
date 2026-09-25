// Write a C program using a function to calculate the factorial of a non-negative integer
#include <stdio.h>

long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;
    long long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        result = factorial(n);

        printf("Factorial of %d = %lld", n, result);
    }

    return 0;
}