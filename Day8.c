// Write a C program to input a positive integer n and calculate the sum of all natural numbers from 1 to n using a for loop.
#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}