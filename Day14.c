//Write a C program to check whether a given number is an Armstrong number or not.
#include <stdio.h>

int main()
{
    int n, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number", original);
    }
    else
    {
        printf("%d is not an Armstrong number", original);
    }

    return 0;
}