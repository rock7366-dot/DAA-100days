#include <stdio.h>

int main()
{
    int a, b;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero is not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}