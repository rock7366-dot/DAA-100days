// Write a C program to input 5 integers into an array and find the largest element
#include <stdio.h>

int main()
{
    int arr[5];
    int largest;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest element = %d", largest);

    return 0;
}