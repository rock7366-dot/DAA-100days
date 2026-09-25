// Write a C program to input an integer and calculate the sum of even digits and the sum of odd digits separately.
#include <stdio.h>

int main()
{
    int n, digit;
    int evenSum = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    while (n != 0)
    {
        digit = n % 10;

        if (digit % 2 == 0)
        {
            evenSum = evenSum + digit;
        }
        else
        {
            oddSum = oddSum + digit;
        }

        n = n / 10;
    }

    printf("Sum of even digits = %d\n", evenSum);
    printf("Sum of odd digits = %d", oddSum);

    return 0;
}