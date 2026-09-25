// Write a C program to input 5 integers into an array and print all the elements of the array.
#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}