//Write a menu-driven C program using switch-case that provides the following options:

// Check whether a number is Even or Odd.
// Check whether a number is Positive, Negative, or Zero.
// Exit the program.
#include <stdio.h>

int main()
{
    int choice, n;

    printf("----- MENU -----\n");
    printf("1. Check Even/Odd\n");
    printf("2. Check Positive/Negative\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &n);

            if (n % 2 == 0)
                printf("%d is Even", n);
            else
                printf("%d is Odd", n);

            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &n);

            if (n > 0)
                printf("%d is Positive", n);
            else if (n < 0)
                printf("%d is Negative", n);
            else
                printf("Number is Zero");

            break;

        case 3:
            printf("Program Exited");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}