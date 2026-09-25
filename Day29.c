// Write a C program using a function to check whether a given number is prime or not.
#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("%d is a Prime Number", n);
    }
    else
    {
        printf("%d is Not a Prime Number", n);
    }

    return 0;
}