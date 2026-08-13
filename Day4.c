// Write a C program to input a number and check whether it is positive, negative, or zero.
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The number is Positive");
    }
    else if (n < 0)
    {
        printf("The number is Negative");
    }
    else
    {
        printf("The number is Zero");
    }

    return 0;
}