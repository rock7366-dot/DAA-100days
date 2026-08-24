// Write a C program to input an integer and check whether it is a prime number or not.
#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a Prime Number", n);
    }
    else
    {
        printf("%d is Not a Prime Number", n);
    }

    return 0;
}