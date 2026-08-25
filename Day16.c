// Write a C program to input a positive integer n and print all prime numbers between 1 and n.
#include <stdio.h>

int main()
{
    int n, i, j, isPrime;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Prime numbers are: ");

    for (i = 2; i <= n; i++)
    {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}