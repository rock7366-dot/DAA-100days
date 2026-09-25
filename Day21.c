// Write a C program to input an integer and count the total number of digits in it.
#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        if (n < 0)
        {
            n = -n;
        }

        while (n != 0)
        {
            n = n / 10;
            count++;
        }
    }

    printf("Number of digits = %d", count);

    return 0;
}