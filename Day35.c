// Write a C program to input 5 integers into an array and calculate their sum and average.
#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    float average;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    average = (float)sum / 5;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}
