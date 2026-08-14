#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}