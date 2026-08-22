// Write a C program to check whether a given integer is a palindrome or not using a while loop.
#include <stdio.h>

int main()
{
    int n, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
    {
        printf("%d is a Palindrome", original);
    }
    else
    {
        printf("%d is Not a Palindrome", original);
    }

    return 0;
}