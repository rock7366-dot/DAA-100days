//Write a C program to print the multiplication tables of numbers from 1 to 5, with each table containing multiples from 1 to 10. Use nested for loops.
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("\nTable of %d\n", i);

        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}