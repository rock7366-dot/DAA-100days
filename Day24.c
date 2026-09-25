// Write a C program to input an integer and count the total number of even and odd digits in the number.
#include <stdio.h>

int main()
{
    int n, digit;
    int evenCount = 0, oddCount = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    if (n == 0)
    {
        evenCount = 1;
    }
    else
    {
        while (n != 0)
        {
            digit = n % 10;

            if (digit % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }

            n = n / 10;
        }
    }

    printf("Even digits = %d\n", evenCount);
    printf("Odd digits = %d", oddCount);

    return 0;
}